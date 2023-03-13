import gc

def enable():
    gc.enable()
    gc.set_debug(gc.DEBUG_LEAK)

import ctypes

# this class will allow us to access the object from memory (even after it is deleted)
class PyObject(ctypes.Structure):
    _fields_ = [
        ("refcnt", ctypes.c_long)
    ]

def show_ref(msg, obj_address):
    # obj_address = id(obj)
    print(msg, PyObject.from_address(obj_address).refcnt)


def dump():
    """
    show us what the garbage is about
    """
    # Force collection
    print("GARBAGE:")
    gc.collect()

    print("GARBAGE OBJECTS:")
    for x in gc.garbage:
        s = str(x)
        if len(s) > 80:
            s = s[:77]+'...'
        print('pgc:', type(x), s, x)
    print('end')
