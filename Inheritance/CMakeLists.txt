cmake_minimum_required(VERSION 3.31)
project(Inheritance)

set(CMAKE_CXX_STANDARD 20)

add_executable(Inheritance main.cpp
        Animal.cpp
        Animal.h
        Dog.cpp
        Dog.h
        Cat.cpp
        Cat.h
        Bird.cpp
        Bird.h
        Fish.cpp
        Fish.h
        Horse.cpp
        Horse.h
        Elephant.cpp
        Elephant.h)
