cmake_minimum_required(VERSION 3.13)

project(pybind_demo)
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
	pybind11
	GIT_REPOSITORY https://github.com/pybind/pybind11.git
	GIT_TAG        v2.6.2
	GIT_SHALLOW    TRUE
)

FetchContent_MakeAvailable(pybind11)

add_executable(demo demo.cpp)
target_link_libraries(demo PRIVATE pybind11::embed)

add_executable(wrapper wrapper.cpp)
target_link_libraries(wrapper PRIVATE pybind11::embed)
