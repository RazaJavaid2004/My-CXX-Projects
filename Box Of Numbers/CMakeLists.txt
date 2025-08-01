cmake_minimum_required(VERSION 3.15)

project(BoxOfNumbers VERSION 1.0 LANGUAGES CXX)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the executable
add_executable(BoxOfNumbers
    src/main.cpp
    src/boxOfNumbers.cpp
)

# Include header files
target_include_directories(BoxOfNumbers PRIVATE include)

# Enable compiler warnings
target_compile_options(BoxOfNumbers PRIVATE -Wall -Wextra -pedantic)