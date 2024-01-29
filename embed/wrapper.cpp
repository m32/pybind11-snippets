//
// https://stackoverflow.com/questions/56953822/use-c-object-in-python-with-pybind11
//
#include <pybind11/embed.h>
#include <iostream>
#include <string>

// Define namespace for pybind11
namespace py = pybind11;

class Vehiclee
{
  // Access specifier
public:

  // Data Members
  int vehicle_id;
  std::string vehicle_name;
  std::string vehicle_color;

  // Member Functions()
  void printname()
  {
    std::cout << "Vehicle id is: " << vehicle_id;
    std::cout << "Vehicle name is: " << vehicle_name;
    std::cout << "Vehicle color is: " << vehicle_color;
  }
};

PYBIND11_EMBEDDED_MODULE(embeded, module){

  py::class_<Vehiclee> animal(module, "Vehiclee");
}

int main() {
  // Initialize the python interpreter
  py::scoped_interpreter python;

  // Import all the functions from scripts by file name in the working directory
  auto simpleFuncs = py::module::import("wrapperpy");
  auto embeded = py::module::import("embeded");


  // Test if C++ objects can be passed into python functions
  Vehiclee car1;
  car1.vehicle_id = 1234;
  car1.vehicle_name = "VehicleName";
  car1.vehicle_color = "red";

  simpleFuncs.attr("simplePrint")(car1);

  return 0;
}
