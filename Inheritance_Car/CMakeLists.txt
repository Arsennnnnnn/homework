cmake_minimum_required(VERSION 3.31)
project(Inheritance_Car)

set(CMAKE_CXX_STANDARD 20)

add_executable(Inheritance_Car main.cpp
        Car.cpp
        Car.h
        Engine.cpp
        Engine.h
        ElectricCar.cpp
        ElectricCar.h
        SportsCar.cpp
        SportsCar.h
        Truck.cpp
        Truck.h)
