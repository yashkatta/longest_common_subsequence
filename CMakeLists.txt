cmake_minimum_required (VERSION 3.14)

# Version Information ----------------------------------------
project (longest_common_subsequence)

# Add library ----------------------------------------
add_subdirectory(src/longest_common_subsequence)
add_subdirectory(src/utility)

# Set compiler options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -DDEBUG")

# Add Executable ----------------------------------------
add_executable(longest_common_subsequence main.cpp)

target_link_libraries(longest_common_subsequence LongestCommonSubsequence UtilityProvider)