#!/usr/bin/python3

from trampoline import A,B

class MyA(A):
    def __init__(self):
        super().__init__()
        print("MyA.Constructor")

    def __del__(self):
        print("MyA.__del__")
        #super().__del__()

    def SayHello(self):
        print("MyA.SayHello")
        return 'MyA.SayHello'

class MyB(B):
    def __init__(self):
        super().__init__()
        print("MyB.Constructor")

    def __del__(self):
        print("MyB.__del__")
        #super().__del__()

    def AllocateAnAClass(self):
        print("MyB.AllocateAnAClass")
        return MyA()

y = MyB()
y.Run()
