#!/usr/bin/env vpython3
if 0:
    import clang.cindex  # provided through the libclang
    clang.cindex.Config.set_library_file('/usr/lib/x86_64-linux-gnu/libclang-9.so.1')
from codegen.codegenerator import translate, translate_files

py_namespace = translate('''
int i = 12;
char c2[3] = {'a','b','c'};
struct example_detail {
    int first;
    int last;
};

struct example {
    int argsz;
    int flags;
    int count;
    struct example_detail details[2];
};
''')
