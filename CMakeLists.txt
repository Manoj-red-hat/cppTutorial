cmake_minimum_required(VERSION 3.3)
project(cppTutorial)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES check.cpp)
add_executable(cppTutorial ${SOURCE_FILES})