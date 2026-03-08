#!/usr/bin/env vpython3
import io
import clang.cindex  # provided through the libclang
clang.cindex.Config.set_library_file('/usr/lib/x86_64-linux-gnu/libclang-19.so.1')

import asciitree # must be version 0.2

def dump_ast(cursor,fn):
    def node_children(node):
        return [c for c in node.get_children() if (not c.location.file is None) and (c.location.file.name == fn)]
    def print_node(node):
        text = str(node.spelling or node.displayname)
        kind = str(node.kind)[str(node.kind).index('.')+1:]
        return '{} {}'.format(kind, text)
    return asciitree.draw_tree(cursor, node_children, print_node)

# some clang pyhton bindings return c style strings (bytes) so names need to be converted to python strings.
def b2str(b):
    if type(b) == str:
        return b
    else:
        return str(b,'utf-8')   

# Different object types that we will want to bind

#classes
class MemberFunction(object):
    def __init__(self, cursor):
        self.name = b2str(cursor.spelling)

class Field(object):
    def __init__(self,cursor):
        self.name = b2str(cursor.spelling)

class Property(object):
    '''Assumes functions have CamelCased names that start with get and set 
    i.e. getPropName and setPropName'''
    def __init__(self,getter,setter=None):
        self.name = getter.name[3:]
        self.getter = getter
        if setter is None:
            self.readonly=True
        else:
            self.readonly=False
            self.setter = setter

class Constructor(object):
    def __init__(self,cursor):
        self.arg_types=[]
        for c in cursor.get_children():
            arg_t = c.type.spelling
            self.arg_types.append(arg_t)

class Class(object):
    def __init__(self, cursor):
        self.name = b2str(cursor.spelling)
        self.functions = []
        self.fields =[]
        self.constructors = []
        for c in cursor.get_children():
            if c.access_specifier == clang.cindex.AccessSpecifier.PUBLIC:
                if c.kind == clang.cindex.CursorKind.CXX_METHOD:
                    f = MemberFunction(c)
                    self.functions.append(f)
                elif c.kind == clang.cindex.CursorKind.FIELD_DECL:
                    f = Field(c)
                    self.fields.append(f)
                elif c.kind == clang.cindex.CursorKind.CONSTRUCTOR:
                    f = Constructor(c)
                    self.constructors.append(f)

        getters = [f for f in self.functions if f.name.startswith('get')]
        setters = [f for f in self.functions if f.name.startswith('set')]
        #remove getters and setters from functions
        self.functions = [f for f in self.functions if not(f in getters or f in setters)]
        #creates a list of properties from the getters and setters
        self.properties = []
        for getter in getters:
            # try and find a setter
            try:
                setter = [f for f in setters if f.name[3:]==getter.name[3:]][0]
            except IndexError: # only a getter exists
                p = Property(getter)
            else: #both getter and setter exist
                p = Property(getter,setter)
            self.properties.append(p)

# global functions and enumerations
class Function(object):
    def __init__(self, cursor):
        self.name = b2str(cursor.spelling)

class Enumerator(object):
    def __init__(self,cursor):
        self.name = b2str(cursor.spelling)

class Enum(object):
    def __init__(self,cursor):
        self.name = b2str(cursor.spelling)
        self.enumerators = []
        for c in cursor.get_children():
            if c.kind == clang.cindex.CursorKind.ENUM_CONSTANT_DECL:
                self.enumerators.append(Enumerator(c))   

class Attr(object):
    def __init__(self,cursor):
        self.enumerators = []
        for c in cursor.get_children():
            if c.kind == clang.cindex.CursorKind.ENUM_CONSTANT_DECL:
                self.enumerators.append(Enumerator(c))

class Generator:
    def __init__(self):
        self.modules = []
        self.result = io.StringIO()
        self.result.write('''\
#define PYBIND11_DETAILED_ERROR_MESSAGES

#include <pybind11/pybind11.h>

namespace py = pybind11;
''')

    def write(self, data):
        self.result.write(data)

    def dump_class(self, result, v):
        result.write(f'''\
    py::class_<{v.name}>(m,\"{v.name}\")
''')
        for cc in v.constructors:
            if len(cc.arg_types)==0:
                s = f'return new {v.name}();'
                result.write(f'''\
        .def(py::init([](){s}))
''')
            else:
                result.write(f'''\
        .def(py::init<{', '.join(cc.arg_types)}>())
''')
        for f in v.functions:
            result.write(f'''\
        .def("{f.name}", &{v.name}::{f.name})
''')
        for f in v.fields:
            result.write(f'''\
        .def_readwrite("{f.name}", &{v.name}::{f.name})
''')
        for p in v.properties:
            if p.readonly:
                result.write(f'''\
        .def_property_readonly("{p.name}", &{v.name}::{p.getter.name})
''')
            else:
                result.write(f'''\
        .def_property("{p.name}", &{v.name}::{p.getter.name}, &{v.name}::{p.setter.name})
''')
        result.write(f'''\
    ;
''')

    def dump_function(self, result, v):
        result.write(f'''\
    m.def("{v.name}",&{v.name});
''')

    def dump_enum(self, result, v):
        result.write(f'''\
    py::enum_<{v.name}>(m, "{v.name}", "")
''')
        for ee in v.enumerators:
            result.write(f'''\
        .value("{ee.name}", {v.name}::{ee.name})
''')
        if 0:
            result.write(f'''\
        .export_values();
''')
        else:
            result.write(f'''\
        ;
''')

    def dump_attr(self, result, v):
        for aa in v.enumerators:
            result.write(f'''\
    m.attr("{aa.name}") = py::int_((int){aa.name});
''')

    def parse(self, modname, include_file, cflags):
        #parsing the header file using clang
        self.modules.append(modname)
        index = clang.cindex.Index.create()
        translation_unit = index.parse(include_file, cflags)

        result = io.StringIO()

        if 0:
            result.write(f'/* {include_file}\n')
            result.write(dump_ast(translation_unit.cursor, include_file))
            result.write('\n*/\n')

        result.write(f'''

void bind_{modname}(py::module & m)
''')
        result.write('{')

        rclass = io.StringIO()
        rfunction = io.StringIO()
        renum = io.StringIO()
        rattr = io.StringIO()
        for c in translation_unit.cursor.get_children():
            #only export elements from the parsed file
            if c.location.file.name != include_file:
                continue
            if c.kind == clang.cindex.CursorKind.LINKAGE_SPEC:
                for cc in c.get_children():
                    if cc.kind == clang.cindex.CursorKind.CLASS_DECL:
                        v = Class(cc)
                        self.dump_class(rclass, v)
                    elif cc.kind == clang.cindex.CursorKind.STRUCT_DECL:
                        v = Class(cc)
                        self.dump_class(rclass, v)
                    elif cc.kind == clang.cindex.CursorKind.FUNCTION_DECL:
                        v = Function(cc)
                        self.dump_function(rfunction, v)
                    elif cc.kind == clang.cindex.CursorKind.ENUM_DECL:
                        if b2str(cc.spelling).find("unnamed") > 0:
                            v = Attr(cc)
                            self.dump_attr(rattr, v)
                        else:
                            v = Enum(cc)
                            self.dump_enum(renum, v)
            elif c.kind == clang.cindex.CursorKind.CLASS_DECL:
                v = Class(c)
                self.dump_class(rclass, v)
            elif c.kind == clang.cindex.CursorKind.STRUCT_DECL:
                v = Class(c)
                self.dump_class(rclass, v)
            elif c.kind == clang.cindex.CursorKind.FUNCTION_DECL:
                v = Function(c)
                self.dump_function(rfunction, v)
            elif c.kind == clang.cindex.CursorKind.ENUM_DECL:
                if b2str(c.spelling).find("unnamed") > 0:
                    v = Attr(c)
                    self.dump_attr(rattr, v)
                else:
                    v = Enum(c)
                    self.dump_enum(renum, v)
        for rs in (renum, rattr, rfunction, rclass):
            v = rs.getvalue()
            result.write(v)
            result.write('\n')
        result.write('}\n')
        v = result.getvalue()
        self.result.write(v)

    def save(self, modname):
        v = self.result.getvalue()
        with open(f'{modname}.cpp', 'wt') as fp:
            fp.write(v)
            fp.write(f'''

PYBIND11_MODULE({modname}, m)
''')
            fp.write('{')
            for name in self.modules:
                fp.write(f'''
    bind_{name}(m);\
''')
            fp.write('\n}\n')

def main():
    g = Generator()
    cflags = [
        '-x',
        'c++',
        '-std=c++11',
        '-D__CODE_GENERATOR__',
        '-DPDC_FORCE_UTF8=1',
        '-DPDC_WIDE=1',
        '-IPDCursesMod',
    ]

    g.write('''
#include "curspriv.h"
#include "curses.h"
#include "panel.h"
''')

    g.parse('curspriv', 'PDCursesMod/curspriv.h', cflags)
    g.parse('curses', 'PDCursesMod/curses.h', cflags)
    g.parse('panel', 'PDCursesMod/panel.h', cflags)

    g.save('pdcurses')

main()
