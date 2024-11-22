cmake_minimum_required(VERSION 3.20)
 
# Project details
project(Catch2Example)
 
# Add Catch2 from the external directory
add_subdirectory(external/Catch2)
 
# Add the test executables
add_executable(test_math tests/test_math.cpp src/Math.cpp)
add_executable(test_string tests/test_string.cpp)
 
# Link Catch2 with the test executables
target_link_libraries(test_math PRIVATE Catch2::Catch2WithMain)
target_link_libraries(test_string PRIVATE Catch2::Catch2WithMain)
 
# Include Catch2's testing utilities for CTest
include(Catch)
catch_discover_tests(test_math)
catch_discover_tests(test_string)

 