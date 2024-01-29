/*
https://stackoverflow.com/questions/49010233/pybind11-transfer-class-ownership-to-c-on-construct?rq=3
*/

#define PYBIND11_DETAILED_ERROR_MESSAGES

#include "pybind11/pybind11.h"

#include <memory>
#include <iostream>

namespace py = pybind11;

class A
{
public:
    A() { std::cout << "A.Contructor" << std::endl; }
    A(const A&) { std::cout << "A.Copying" << std::endl; }
    virtual ~A() { std::cout << "A.Destructor" << std::endl; }
    virtual const char* SayHello()
    {
        const char* x = "A.SayHello";
        return x;
    }
};

class ATrampoline : public A
{
public:
    using A::A;
    const char* SayHello() override
    {
        std::cout << "ATrampoline.SayHello" << std::endl;
        py::gil_scoped_acquire gil;
        py::function override = pybind11::get_override(this, "SayHello");
        if (override) {
            override();
        } else {
            std::cout << "ATrampoline.SayHello not overriden" << std::endl;
        }
        PYBIND11_OVERLOAD(const char *, A, SayHello,);
    }
};

class B
{
public:
    B() { std::cout << "B.Constructor" << std::endl; }
    B(const B&) { std::cout << "B.Copying" << std::endl; }
    virtual ~B(){ std::cout << "B.Destructor" << std::endl; }

    void Run()
    {
        std::shared_ptr<A> aBase = AllocateAnAClass();
        const char *x = aBase->SayHello();
        std::cout << x << std::endl;
    }

    virtual std::shared_ptr<A> AllocateAnAClass()
    {
        std::cout << "B.AllocateAnAClass" << std::endl;
        return std::make_shared<A>();
    }
};

class BTrampoline : public B
{
public:
    using B::B;
    std::shared_ptr<A> AllocateAnAClass() override
    {
        std::cout << "BTrampoline.AllocateAnAClass" << std::endl;
        PYBIND11_OVERLOAD(std::shared_ptr<A>, B, AllocateAnAClass,);
    }
};

PYBIND11_MODULE(trampoline, m)
{
#if 1
    py::class_<A, ATrampoline, std::shared_ptr<A>>(m, "A")
        .def(py::init<>())
        .def("SayHello", &A::SayHello);
#else
    py::class_<A, ATrampoline, std::unique_ptr<A, py::nodelete>>(m, "A")
        .def(py::init<>())
        .def("SayHello", &A::SayHello);
#endif

    py::class_<B, BTrampoline>(m, "B")
        .def(py::init<>())
        .def("Run", &B::Run)
        .def("AllocateAnAClass",&B::AllocateAnAClass);
}
