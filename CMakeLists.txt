cmake_minimum_required(VERSION 3.22)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)
include_directories(ShoppingCart)
include_directories(Banking)
include_directories(LabsWeek5)
# executables
add_executable(Banking Banking/main.cpp)
add_executable(LabsWeek5 LabsWeek5/main.cpp)
add_executable(ShoppingCart ShoppingCart/main.cpp)
