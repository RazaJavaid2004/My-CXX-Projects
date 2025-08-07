cmake_minimum_required(VERSION 3.10)
project(DiceRoller)

# Define the executable target
add_executable(DiceRoller src/main.cpp src/diceroller.cpp)

# Then modify its properties
target_include_directories(DiceRoller PRIVATE include)
target_compile_options(DiceRoller PRIVATE -Wall -Wextra)