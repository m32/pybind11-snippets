cmake_minimum_required(VERSION 3.1)
project(fredbuf)

#set( Python_FIND_VIRTUALENV FIRST )
#find_package(Python 3.11 COMPONENTS Interpreter Development REQUIRED)
find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
message(STATUS "Python3_VERSION = ${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR}")
message(STATUS "Python3_EXECUTABLE = ${Python3_EXECUTABLE}")
message(STATUS "Python3_STDLIB     = ${Python3_STDLIB}")
message(STATUS "Python3_STDARCH    = ${Python3_STDARCH}")
message(STATUS "Python3_SITELIB    = ${Python3_SITELIB}")
message(STATUS "Python3_INCLUDE_DIRS = ${Python3_INCLUDE_DIRS}")
message(STATUS "Python3_LIBRARY_DIRS = ${Python3_LIBRARY_DIRS}")
message(STATUS "Python3_LIBRARIES = ${Python3_LIBRARIES}")
message(STATUS "Python3_RUNTIME_LIBRARY_DIRS = ${Python3_RUNTIME_LIBRARY_DIRS}")

execute_process(
  COMMAND python3 -c "import pybind11; print(pybind11.get_include())"
  OUTPUT_VARIABLE PYBIND11_INCLUDE_DIR
)
include_directories(${PYBIND11_INCLUDE_DIR})

include_directories(. fredbuf)

add_library(fredbuf SHARED
    fredbuf.cpp
    fredbuf/fredbuf.cpp
)

target_link_libraries(fredbuf
    ${Python3_LIBRARIES}
)
target_include_directories(fredbuf PRIVATE
    ${Python3_INCLUDE_DIRS}
)

set_target_properties(fredbuf PROPERTIES
    PREFIX ""
    CXX_STANDARD 20
    C_STANDARD 99
)
