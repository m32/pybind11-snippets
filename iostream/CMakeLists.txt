cmake_minimum_required(VERSION 3.1)
project(ostream_example)

#set( Python_FIND_VIRTUALENV FIRST )
#find_package(Python 3.11 COMPONENTS Interpreter Development REQUIRED)
find_package(Python3 COMPONENTS Interpreter Development REQUIRED)

#message(STATUS "Python3_VERSION = ${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR}")
#message(STATUS "Python3_EXECUTABLE = ${Python3_EXECUTABLE}")
#message(STATUS "Python3_STDLIB     = ${Python3_STDLIB}")
#message(STATUS "Python3_STDARCH    = ${Python3_STDARCH}")
#message(STATUS "Python3_SITELIB    = ${Python3_SITELIB}")
#message(STATUS "Python3_INCLUDE_DIRS = ${Python3_INCLUDE_DIRS}")
#message(STATUS "Python3_LIBRARY_DIRS = ${Python3_LIBRARY_DIRS}")
#message(STATUS "Python3_LIBRARIES = ${Python3_LIBRARIES}")
#message(STATUS "Python3_RUNTIME_LIBRARY_DIRS = ${Python3_RUNTIME_LIBRARY_DIRS}")

execute_process(
  COMMAND /devel/bin/python3/bin/python3 -c "import pybind11; print(pybind11.get_include())"
  OUTPUT_VARIABLE PYBIND11_INCLUDE_DIR
)
include_directories(${PYBIND11_INCLUDE_DIR})

include_directories(.)

set (CMAKE_CXX_STANDARD 17)

add_library(ostream_example SHARED
  ostream_example.cpp
)

target_link_libraries(ostream_example ${Python3_LIBRARIES})
target_include_directories(ostream_example PRIVATE ${Python3_INCLUDE_DIRS} )

set_target_properties(ostream_example PROPERTIES PREFIX "")
