#include <iostream>
#include "cbclass.h"

namespace py = pybind11;

void bind_cbclass(py::module & m)
{


    py::class_<Test0>(m,"Test0")
        .def(py::init([](){
            std::cout << "py:Test0:Test0" << std::endl;
            return new Test0();
        }))
        .def("proc", &Test0::proc)
    ;
    py::class_<Test>(m,"Test")
        .def(py::init([](){
            std::cout << "py:Test:Test" << std::endl;
            return new Test();
        }))
        .def("cproc", &Test::cproc)
    ;
}
