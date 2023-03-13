#include "pybind11/functional.h"
#include "pybind11/pybind11.h"

#include "mysystem.h"

namespace py = pybind11;

PYBIND11_MODULE(mysystem, m) {
  py::class_<System>(m, "System")
    .def(py::init<>())
    .def("start", &System::start)
    .def("stop", &System::stop)
    .def("registerCallback", [](System* s, System::Callback cb)
      {
        s->registerCallback([cb](int i)
        {
          // py::gil_scoped_acquire acquire;
          // py::gil_scoped_release release;
          cb(i);
        });
      });
}
