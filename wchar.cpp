#include <pybind11/pybind11.h>

namespace py = pybind11;

extern
void bind_wchar(py::module & m);

PYBIND11_MODULE(wchar, m) {
    bind_wchar(m);
}
