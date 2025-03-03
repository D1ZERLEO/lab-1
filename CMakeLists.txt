cmake_minimum_required(VERSION 3.20)

project(lab-1)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/main.cpp
    src/utils.cpp
)
include_directories(src)
add_executable(Lab1 ${SOURCES})