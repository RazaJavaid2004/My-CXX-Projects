cmake_minimum_required(VERSION 3.10)
project(GuessTheNumber)

# Define the executable target
add_executable(GuessTheNumber src/main.cpp src/guessthenumber.cpp)

# Then modify its properties
target_include_directories(GuessTheNumber PRIVATE include)
target_compile_options(GuessTheNumber PRIVATE -Wall -Wextra)