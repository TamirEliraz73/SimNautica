cmake_minimum_required(VERSION 3.30.5)
project(cpp)

set(CMAKE_CXX_STANDARD 20)

message(STATUS "Using compiler: ${CMAKE_CXX_COMPILER}")

add_executable(cpp main.cpp
        main2.cpp
        SimObject.cpp
        SimObject.h
        Vector2f.cpp
        Vector2f.h
        Structure.cpp
        Structure.h
        Farm.cpp
        Farm.h)
