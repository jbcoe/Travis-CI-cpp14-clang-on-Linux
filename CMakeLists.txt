cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

include_directories(SYSTEM submodules/gsl)

add_executable(UseCpp14 UseCpp14.cpp)

enable_testing()

add_test(UseCpp14 ${CMAKE_BINARY_DIR}/UseCpp14 -s)

# FIXME: Fix graph tests which fail with an assertion error on macOS. 
# add_test(test_graph ${CMAKE_BINARY_DIR}/test_graph -s)
