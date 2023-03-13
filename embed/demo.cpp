#include <iostream>
#include <pybind11/embed.h>

namespace py = pybind11;
using namespace std;

int main()
{
    cout << "Hello PyBind World" << endl;

    // start the interpreter and keep it alive
    py::scoped_interpreter guard{}; 
    py::module math = py::module::import("math");
    py::object result = math.attr("sqrt")(25);
    std::cout << "Sqrt of 25 is: " << result.cast<float>() << std::endl;
}
