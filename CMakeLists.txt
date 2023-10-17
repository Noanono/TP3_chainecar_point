cmake_minimum_required(VERSION 3.26)
project(TP3_chainecar_point)

set(CMAKE_CXX_STANDARD 17)

add_executable(TP3_chainecar_point main_partie4.cpp Point.cpp Point.h ChaineCar.cpp
        ChaineCar.h Menu.cpp Menu.h)
