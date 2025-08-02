cmake_minimum_required(VERSION 3.10)

project(SimpleCalculator)

include_directories(include)

add_executable(SimpleCalculator src/main.cpp src/simpleCalculator.cpp)