#
# python3 ./setup.py build_ext -i
#
import os, sys

from distutils.core import setup, Extension
from distutils import sysconfig
from pybind11 import get_include

extTrampoline = Extension(
    'trampoline',
    [
        'trampoline.cpp'
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
    extTrampoline,
]

setup(
    name='demo',
    version='0.0.1',
    author='Grzegorz Makarewicz',
    author_email='mak@trisoft.com.pl',
    description='demo',
    ext_modules=ext_modules,
)
