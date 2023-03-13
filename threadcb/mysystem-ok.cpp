#include "pybind11/functional.h"
#include "pybind11/pybind11.h"

#include "mysystem.h"

namespace py = pybind11;

PYBIND11_MODULE(mysystem, m) {
  py::class_<System>(m, "System")
    .def(py::init<>())
    .def("start", &System::start, py::call_guard<py::gil_scoped_release>())
    .def("stop", &System::stop, py::call_guard<py::gil_scoped_release>())
    .def("registerCallback", &System::registerCallback);
}
