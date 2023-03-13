#!/usr/bin/env vpython3

import mysystem
import time

g_counter = 0

def foo(i):
  global g_counter
  print(i)
  g_counter = g_counter + 1

s = mysystem.System()
s.registerCallback(foo)
s.start()
while g_counter < 3:
  time.sleep(1)
s.stop()
