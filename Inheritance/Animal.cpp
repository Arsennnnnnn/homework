#include <iostream>
#include "Animal.h"


Animal::~Animal() {
    std::cout << "animal dtor" << std::endl;
}

Animal::Animal(int age, int maxAge, int weight, int height)
    : m_age(age), m_maxAge(maxAge), m_weight(weight), m_height(height) {}

