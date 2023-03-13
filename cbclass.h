#define PYBIND11_DETAILED_ERROR_MESSAGES
#include <pybind11/pybind11.h>

namespace py = pybind11;

class Test0 {
public:
    Test0();
    void proc(char *msg);
};

class Test {
public:
    Test();
    void cproc(py::function &func);
};
