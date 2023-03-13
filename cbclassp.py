#!/usr/bin/env vpython3

import cbclass

def cb(cls):
    print('cb', cls)
    cls.proc('ala')

t = cbclass.Test()
t.cproc(cb)
print('done')