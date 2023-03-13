#!/usr/bin/env vpython3
import inheritance

class MyTestClass(inheritance.TestClass):
    def __init__(self):
        super().__init__()

    def update(self):
        super().update()
        print("updating from python")

    def updatep(self, step):
        print("updatep python step=", step)


def main():
    myTest = MyTestClass()
    myTest.update()
main()
