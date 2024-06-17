/*
https://stackoverflow.com/questions/48982143/returning-and-passing-around-raw-pod-pointers-arrays-with-python-c-and-pyb
https://www.google.com/search?newwindow=1&q=pybind11+return+pointer
https://pybind11.readthedocs.io/en/stable/advanced/functions.html
*/
#include <pybind11/pybind11.h>
#include <memory>
#include <iostream>

namespace py = pybind11;

template <class T> class ptr_wrapper
{
    public:
        ptr_wrapper() : ptr(nullptr) {}
        ptr_wrapper(T* ptr) : ptr(ptr) {}
        ptr_wrapper(const ptr_wrapper& other) : ptr(other.ptr) {}
        T& operator* () const { return *ptr; }
        T* operator->() const { return  ptr; }
        T* get() const { return ptr; }
        void destroy() { delete ptr; }
        T& operator[](std::size_t idx) const { return ptr[idx]; }
    private:
        T* ptr;
};

float array[3] = { 3.14, 2.18, -1 };

ptr_wrapper<float> get_ptr(void) { return array; }
void use_ptr(ptr_wrapper<float> ptr) {
    for (int i = 0; i < 3; ++i)
        std::cout << ptr[i] << " ";
    std::cout << "\n";
}

PYBIND11_MODULE(Ptr,m)
{
    py::class_<ptr_wrapper<float>>(m,"pfloat");
    m.def("get_ptr", &get_ptr);
    m.def("use_ptr", &use_ptr);
}
