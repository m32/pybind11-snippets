
#include <pybind11/pybind11.h>
#include "cbclass.h"

namespace py = pybind11;

void bind_cbclass(py::module & m)
{


    py::class_<Test0>(m,"Test0")
        .def(py::init([](){return new Test0();}))
        .def("proc", &Test0::proc)
    ;
    py::class_<Test>(m,"Test")
        .def(py::init([](){return new Test();}))
        .def("cproc", &Test::cproc)
    ;
}
