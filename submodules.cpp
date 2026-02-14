#if defined(MS_WIN64)
#define _hypot hypot
#include <cmath>
#else
#include <signal.h>
#define DebugBreak() raise(SIGTRAP)
#endif

#define PYBIND11_DETAILED_ERROR_MESSAGES
#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <iostream>
#include <string>

#include <Shell.h>

namespace py=pybind11;

static int debuglog = 0;
#define ENTERWRAPPER std::cout << "PyLiteHtml::" << __FUNCTION__ << std::endl;
//#define ENTERWRAPPER

void module_shell(py::module &m) {
    auto m_shell = m.def_submodule("shell");
    m_shell
        .def("Initialize", &Shell::Initialize)
        .def("Shutdown", &Shell::Shutdown)
        .def("LoadFonts", &Shell::LoadFonts)
    ;
    //bool ProcessKeyDownShortcuts(Rml::Context* context, Rml::Input::KeyIdentifier key, int key_modifier, float native_dp_ratio, bool priority);
}

PYBIND11_MODULE(pyrmlui, m) {
    m.def("debuglog", [](int on) {
        debuglog = on;
    })
    ;
    module_shell(m);
}
