cmake_minimum_required(VERSION 3.13)

project(trampoline)
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
	pybind11
	GIT_REPOSITORY https://github.com/pybind/pybind11.git
	GIT_TAG        v2.6.2
	GIT_SHALLOW    TRUE
)

FetchContent_MakeAvailable(pybind11)

pybind11_add_module(trampoline
    trampoline.cpp)
target_include_directories(trampoline PRIVATE
    ${PYTHON_INCLUDE_DIRS}
    ${PYBIND11_INCLUDE_DIR}
)
target_link_libraries(trampoline PRIVATE
    ${PYTHON_LIBRARIES}
)
