cmake_minimum_required(VERSION 3.10)

project(AdditionTest)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Add GoogleTest subdirectory (you should download GoogleTest if you haven't yet)
add_subdirectory(googletest)

# Add your source files
add_executable(test_addition test_addition.cpp addition.cpp)

# Link GoogleTest with your test executable
target_link_libraries(test_addition gtest gtest_main)

# Add tests
add_test(NAME AdditionTest COMMAND test_addition)