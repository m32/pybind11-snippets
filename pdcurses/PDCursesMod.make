#!/bin/bash
top=${PWD}
pushd PDCursesMod
if [ ! -d _build ]; then
    echo "First run PDCursesMod.makemake"
else
pushd _build
make $*
cp sdl2/lib*.so $top
cp vt/lib*.so $top
popd
fi
popd
