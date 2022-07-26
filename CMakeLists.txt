cmake_minimum_required(VERSION 3.22)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)
include_directories(LinkedList)
include_directories(ShoppingCart)

add_executable(LinkedList LinkedList/LinkedList.cpp)
add_executable(ShoppingCart ShoppingCart/main.cpp)
add_executable(Algorithms Algorithms/BubbleSort.cpp)