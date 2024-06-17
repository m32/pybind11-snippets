/*
https://stackoverflow.com/questions/60040665/replacing-the-command-line-arguments-int-argc-and-char-argv-with-stdvectors
*/
#include <pybind11/pybind11.h>
#include <iostream>

#if PY_VERSION_HEX < 0x03000000
#define MyPyText_AsString PyString_AsString
#else
#define MyPyText_AsString PyUnicode_AsUTF8
#endif

namespace py = pybind11;

void closed_func(int argc, char** argv){
    for (int i = 0; i < argc; ++i) {
        std::cout << "FROM C++: " << argv[i] << std::endl;
    }
}

void closed_func_wrap(py::object pyargv11) {
    int argc = 0;
    std::unique_ptr<char*[]> argv;

// convert input list to C/C++ argc/argv
    PyObject* pyargv = pyargv11.ptr();
    if (PySequence_Check(pyargv)) {
        Py_ssize_t sz = PySequence_Size(pyargv);
        argc = (int)sz;
        argv = std::unique_ptr<char*[]>{new char*[sz]};
        for (Py_ssize_t i = 0; i < sz; ++i) {
            PyObject* item = PySequence_GetItem(pyargv, i);
            argv[i] = (char*)MyPyText_AsString(item);
            Py_DECREF(item);
            if (!argv[i] || PyErr_Occurred()) {
                argv = nullptr;
                break;
            }
        }
    }

// bail if failed to convert
    if (!argv) {
        std::cerr << "argument is not a sequence of strings" << std::endl;
        return;
    }

// call the closed function with the proper types
    closed_func(argc, argv.get());
}

PYBIND11_MODULE(targv, m)
{
    m.def("run", &closed_func_wrap, "runs the HelloEposCmd");
}
