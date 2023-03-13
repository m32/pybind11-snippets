
#include <pybind11/pybind11.h>
#include "wchar.h"

namespace py = pybind11;

void bind_wchar(py::module & m)
{


    py::class_<Test>(m,"Test")
        .def(py::init<>())
        .def("cproc", &Test::cproc)
    ;
}
