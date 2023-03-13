#!/usr/bin/env vpython3
from mako.template import Template
import clang.cindex  # provided through the libclang
clang.cindex.Config.set_library_file('/usr/lib/x86_64-linux-gnu/libclang-9.so.1')

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

#building object model
def build_object_model(cursor,fn):
    classes = []
    functions = []
    enums = []
    for c in cursor.get_children():
        #only export elements from the parsed file
        if c.location.file.name == fn:
            if c.kind == clang.cindex.CursorKind.CLASS_DECL:
                a_class = Class(c)
                classes.append(a_class)
            elif c.kind == clang.cindex.CursorKind.FUNCTION_DECL:
                functions.append(Function(c))
            elif c.kind == clang.cindex.CursorKind.ENUM_DECL:
                enums.append(Enum(c))

    return classes,functions,enums

bind_template="""
#include <pybind11/pybind11.h>
#include \"${include_file}\"

namespace py = pybind11;

void bind_${include_file[:-2]}(py::module & m)
{
% for e in enums:
    py::enum_<${e.name}>(m, \"${e.name}\", \"\")
    % for ee in e.enumerators:
        .value(\"${ee.name}\", ${e.name}::${ee.name})
    % endfor
        .export_values();
%endfor

% for f in functions:
    m.def(\"${f.name}\",&${f.name});
% endfor

% for c in classes:
    py::class_<${c.name}>(m,\"${c.name}\")
    % for cc in c.constructors:
        % if len(cc.arg_types)==0:
        .def(py::init([](){return new ${c.name}();}))
        % else:
        .def(py::init<${', '.join(cc.arg_types)}>())
        % endif
    % endfor
    % for f in c.functions:
        .def(\"${f.name}\", &${c.name}::${f.name})
    % endfor
    % for f in c.fields:
        .def_readwrite(\"${f.name}\", &${c.name}::${f.name})
    % endfor
    % for p in c.properties:
         % if p.readonly:
        .def_property_readonly(\"${p.name}\", &${c.name}::${p.getter.name})
         % else:
        .def_property(\"${p.name}\", &${c.name}::${p.getter.name}, &${c.name}::${p.setter.name})
         % endif
    % endfor
    ;
% endfor
}
"""

fin='cbclass.h'
fout='cbclassm.cpp'
path=''

#parsing the header file using clang
index = clang.cindex.Index.create()
translation_unit = index.parse(fin, ['-x', 'c++', '-std=c++11', '-D__CODE_GENERATOR__'])

#building the object model for binding from the Clang data
classes,functions,enums = build_object_model(translation_unit.cursor,fin)

#creating the template and rendering it with the object model
tpl = Template(text=bind_template)

rendered = tpl.render(
    classes=classes,
    functions=functions,
    enums=enums,
    include_file=fin
)

if 0:
    with open("{}.ast".format(fout), "w") as f:
        f.write(dump_ast(translation_unit.cursor,fin))

with open(fout, "w") as f:
    f.write(rendered)
