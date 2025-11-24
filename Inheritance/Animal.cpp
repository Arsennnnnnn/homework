#include <iostream>
#include "Animal.h"

Animal::~Animal() {
    std::cout << "animal dtor" << std::endl;
}

Animal::Animal(int age, int maxAge, int weight, int height)
    : m_age(age), m_maxAge(maxAge), m_weight(weight), m_height(height) {}

Animal::Animal(Animal && other) {
    m_age = other.m_age;
    m_maxAge = other.m_maxAge;
    m_weight = other.m_weight;
    m_height = other.m_height;
    other.m_age = 0;
    other.m_maxAge = 0;
    other.m_weight = 0;
    other.m_height = 0;
}

Animal & Animal::operator=(Animal && other) {
    if (this != &other) {
        m_age = other.m_age;
        m_maxAge = other.m_maxAge;
        m_weight = other.m_weight;
        m_height = other.m_height;
        other.m_age = 0;
        other.m_maxAge = 0;
        other.m_weight = 0;
        other.m_height = 0;
    }
    return *this;
}
