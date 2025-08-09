cmake_minimum_required(VERSION 3.10)
project(StudentRecordSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header files
include_directories(include)

# Main executable
add_executable(StudentRecordSystem
    src/main.cpp
    src/StudentRecordSystem.cpp
)

# Google Test setup
enable_testing()
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

# Prevent GoogleTest from overriding compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Add test executable
add_executable(StudentRecordSystemTest
    tests/StudentRecordSystemTest.cpp
    src/StudentRecordSystem.cpp
)

target_include_directories(StudentRecordSystemTest PRIVATE include)
target_link_libraries(StudentRecordSystemTest gtest_main)

include(GoogleTest)
gtest_discover_tests(StudentRecordSystemTest)