#!/usr/bin/env vpython3
import gci
import sys
import destructor
import sys
from time import sleep

def test_print(no: int, message: str) -> None:
    print("no: {}, message: {}".format(no, message))

def main():
    print('main.before class', sys.getrefcount(test_print))
    obj = destructor.Test(test_print)
    print('main.after class', sys.getrefcount(test_print))
    print('del obj')
    del obj
    print('main.after delete class', sys.getrefcount(test_print))

ni = id(test_print)
print('before main')
gci.show_ref('before main', ni)
main()
print('after main')
gci.show_ref('after main', ni)
#print('del destructor')
del destructor
#gci.dump()
gci.gc.collect()
gci.show_ref('after gc.collect()', ni)
print('end')
