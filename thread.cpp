#include <iostream>
#include <thread>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;

class SomeClass {
public:
    explicit SomeClass(std::function<void(int, const char*)>& func) : m_func (func)
    {
        std::cout << "Constructor called!" << std::endl;
        m_func(1, "start");
        m_thread = std::thread([=] (){
            while (true) {
                this->m_func(2, "thread");
            }
        });
    };

    ~SomeClass() {
        m_func(2, "stop");
        std::cout << "Destructor called!" << std::endl;
        m_thread.join();
    };
private:
    std::function<void(int, const char*)> m_func;
    std::thread m_thread;
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
    py::class_<SomeClass>(m, "SomeClass", "SomeClass description\n")
        .def(py::init<std::function<void(int, const char*)>&>())
    ;
}
