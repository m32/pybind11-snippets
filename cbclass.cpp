#define PYBIND11_DETAILED_ERROR_MESSAGES

#include <iostream>
#include "cbclass.h"

Test0::Test0() {
}

void Test0::proc(char *msg) {
    std::cout << "Test0:proc(" << msg << ")" << std::endl;
}

Test::Test() {
}

void Test::cproc(py::function &func) {
    Test0 *cls = new Test0();
    func(cls);
    delete cls;
}

extern
void bind_cbclass(py::module & m);

PYBIND11_MODULE(cbclass, m) {
    bind_cbclass(m);
}
