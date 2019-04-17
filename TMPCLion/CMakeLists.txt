cmake_minimum_required(VERSION 3.13)
project(TMPCLion)

set(CMAKE_CXX_STANDARD 14)

add_executable(TMPCLion main.cpp class/Coordinate.cpp class/Coordinate.h class/Line.cpp class/Line.h)