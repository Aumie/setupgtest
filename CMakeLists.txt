cmake_minimum_required(VERSION 3.16)
project(setupgtest)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

add_executable(setupgtest main.cpp)

target_link_libraries(setupgtest gtest gtest_main)


