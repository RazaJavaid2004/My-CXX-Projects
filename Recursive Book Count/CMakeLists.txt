cmake_minimum_required(VERSION 3.10)
project(RecursiveBookCount)

# Define the executable target
add_executable(RecursiveBookCount src/main.cpp src/bookShelf.cpp)

# Then modify its properties
target_include_directories(RecursiveBookCount PRIVATE include)
target_compile_options(RecursiveBookCount PRIVATE -Wall -Wextra)