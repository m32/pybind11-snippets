#include <iostream>
#include <pybind11/pybind11.h>
namespace py = pybind11;

class Test  {
public:
    Test() = default;
    virtual ~Test() = default;

    virtual void update() {
        std::cout << "updating from c++ " << std::endl;
        updatep(1);
        updatep(2);
    };

    virtual void updatep(int step) = 0;
};

class PyTest : public Test {
public:
    //using Test::Test;
    //PyTest() = default;

    void update() override {
        PYBIND11_OVERRIDE(
            void,               /* Return type */
            Test,               /* Parent class */
            update,             /* Name of function in C++ (must match Python name) */
                                /* Argument(s) */
        );
    };
    void updatep(int step) override
    {
        PYBIND11_OVERRIDE_PURE(
            void,
            Test,
            updatep,
            step
        );
    }
};

PYBIND11_MODULE(inheritance, m) {
    py::class_<Test, PyTest>(m, "TestClass")
        .def(py::init<>())
        .def("update", &Test::update)
    ;
}
