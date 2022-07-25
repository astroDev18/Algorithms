cmake_minimum_required(VERSION 3.22)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(Algorithms main.cpp test.cpp ShoppingCart/main.cpp ShoppingCart/ItemToPurchase.h ShoppingCart/ItemToPurchase.cpp)
