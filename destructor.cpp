#include <iostream>
#include <thread>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;

class Test {
public:
    explicit Test(py::function &func) : m_func (func)
    {
        std::cout << "Constructor called!" << std::endl;
        showrc("constructor");
        m_func(1, "start");
        showrc("constructor call");
    };

    ~Test() {
        m_func(2, "stop");
        std::cout << "Destructor called!" << std::endl;
        showrc("destructor release");
        //m_func.release();
        // showrc("destructor end");
    };
private:
    py::function m_func;
    void showrc(const char *msg) {
        std::cout << msg << ":get_refcount(m_func)=" << m_func.ref_count() << std::endl;
    }
};

auto cleanup_callback = []() {
    // perform cleanup here -- this function is called with the GIL held
    std::cout << "Module cleanup!" << std::endl;
};


PYBIND11_MODULE(destructor, m) {
    m.add_object("_cleanup", py::capsule(cleanup_callback))
    ;
#if 0
    m.add_object("_cleanup", py::capsule([]{
        std::cout << "Module cleanup!" << std::endl;
        }))
    ;
#endif
    py::class_<Test>(m, "Test", "Test description\n")
        .def(py::init<py::function &>())
    ;
}
