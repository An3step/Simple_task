cmake_minimum_required(VERSION 3.14)

project(FibonacciProject)

set(CMAKE_CXX_STANDARD 98)

add_subdirectory(googletest)

add_executable(MyTests test_fibonacci.cpp)

target_link_libraries(MyTests gtest gtest_main)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})