cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project(Task_3)

add_library(libLEAVER SHARED leaver/Leaver.hpp leaver/Leaver.cpp)
add_executable(Task_3_run main.cpp)
target_link_libraries(Task_3_run libLEAVER)