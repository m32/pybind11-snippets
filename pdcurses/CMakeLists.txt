cmake_minimum_required(VERSION 3.10)
project(pycursesvt)

#set(Python_FIND_VIRTUALENV FIRST)
# link with debug info
set(Python3_FIND_ABI "ON;OFF;OFF")

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

add_library(${PROJECT_NAME} SHARED
    pycursesvt.cpp
)

target_compile_definitions(${PROJECT_NAME} PRIVATE
    -DHAVE_NCURSESW
    -DHAVE_VSNPRINTF
    -DHAVE_VSSCANF
    -DPDC_FORCE_UTF8
    -DPDC_WIDE
    -D_DEBUG
    -D_XOPEN_SOURCE_EXTENDED
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${Python3_INCLUDE_DIRS}
    PDCursesMod
)
target_link_directories(${PROJECT_NAME} PRIVATE
    .
)

#if(${CMAKE_BUILD_TYPE} STREQUAL "Debug")
#    target_link_libraries(${PROJECT_NAME} PRIVATE python${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR}d.a)
#endif()

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${Python3_LIBRARIES}
    pdcursesvt
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    PREFIX ""
    CXX_STANDARD 20
    C_STANDARD 99
)
