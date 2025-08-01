cmake_minimum_required(VERSION 3.10)

project(SimpleCalculator)

include_directories(include)

# MODIFIED: Added src/simplecalculator.cpp to sources
add_executable(SimpleCalculator src/main.cpp src/simplecalculator.cpp)