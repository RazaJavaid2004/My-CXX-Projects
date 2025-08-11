cmake_minimum_required(VERSION 3.16)
project(LibraryManagementSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 🔧 Include headers from include/
include_directories(${CMAKE_SOURCE_DIR}/include)

# 📦 Main executable
file(GLOB_RECURSE SRC_FILES "src/*.cpp")
add_executable(LibrarySystem ${SRC_FILES} main.cpp)
target_include_directories(LibrarySystem PRIVATE ${CMAKE_SOURCE_DIR}/include)

# 🧪 Enable testing
enable_testing()

# 🧪 Test executable
file(GLOB TEST_FILES "tests/*.cpp")
add_executable(LibraryTests
    tests/LibraryTests.cpp
    src/Library.cpp
    src/Book.cpp
    src/User.cpp
    src/Transaction.cpp
)
target_include_directories(LibraryTests PRIVATE ${CMAKE_SOURCE_DIR}/include)

# 🔗 Link with MSYS2-installed Google Test
target_include_directories(LibraryTests PRIVATE "C:/msys64/ucrt64/include")
target_link_directories(LibraryTests PRIVATE "C:/msys64/ucrt64/lib")
target_link_libraries(LibraryTests PRIVATE gtest gtest_main)

# 🧪 Register test
add_test(NAME LibraryTests COMMAND LibraryTests)