cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(firstLib STATIC src/lib.cpp)
add_executable(firstLibAPP src/main.cpp include/lib.h src/lib.cpp)