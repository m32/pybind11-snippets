import os, sys

from distutils.core import setup, Extension
from distutils import sysconfig
from pybind11 import get_include

extInheritance = Extension(
    'inheritance',
    [
        'inheritance.cpp'
    ],
    include_dirs=[
        get_include(),
    ],
    libraries     = [
    ],
    library_dirs  = [
    ],
    language='c++',
    extra_compile_args = [
        '-std=c++11'
    ]
)
extDestructor = Extension(
    'destructor',
    [
        'destructor.cpp'
    ],
    include_dirs=[
        get_include(),
    ],
    libraries     = [
    ],
    library_dirs  = [
    ],
    language='c++',
    extra_compile_args = [
        '-std=c++11'
        ]
)

extWchar = Extension(
    'wchar',
    [
        'wchar.cpp',
        'wcharm.cpp',
    ],
    include_dirs=[
        get_include(),
    ],
    libraries     = [
    ],
    library_dirs  = [
    ],
    language='c++',
    extra_compile_args = [
        '-std=c++11'
        ]
)

extCBclass = Extension(
    'cbclass',
    [
        'cbclass.cpp',
        'cbclassm.cpp',
    ],
    include_dirs=[
        get_include(),
    ],
    libraries     = [
    ],
    library_dirs  = [
    ],
    language='c++',
    extra_compile_args = [
        '-std=c++11'
        ]
)

ext_modules = [
    extInheritance,
    extDestructor,
    extWchar,
    extCBclass,
]

setup(
    name='demo',
    version='0.0.1',
    author='Grzegorz Makarewicz',
    author_email='mak@trisoft.com.pl',
    description='demo',
    ext_modules=ext_modules,
)
