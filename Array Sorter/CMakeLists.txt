cmake_minimum_required(VERSION 4.1.0)

project(ArraySorter VERSION 1.0 LANGUAGES CXX)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the executable
add_executable(ArraySorter
    src/main.cpp
    src/arraySorter.cpp
)

# Include header files
target_include_directories(ArraySorter PRIVATE include)

# Enable compiler warnings
target_compile_options(ArraySorter PRIVATE -Wall -Wextra -pedantic)