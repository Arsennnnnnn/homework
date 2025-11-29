#include <iostream>
#include "Animal.h"
int Animal::count = 0;

int Animal::getCount() {
    return count;
}

Animal::Animal(int age, int maxAge, int weight, int height)
    : m_age(age), m_maxAge(maxAge), m_weight(weight), m_height(height) {
    ++count;
}

Animal::Animal() : m_age(0), m_maxAge(0), m_weight(0), m_height(0) {
    ++count;
}

Animal::Animal(const Animal &other) {
    m_age = other.m_age;
    m_maxAge = other.m_maxAge;
    m_weight = other.m_weight;
    m_height = other.m_height;
    ++count;
}

Animal::Animal(Animal && other) {
    m_age = other.m_age;
    m_maxAge = other.m_maxAge;
    m_weight = other.m_weight;
    m_height = other.m_height;
    other.m_age = 0;
    other.m_maxAge = 0;
    other.m_weight = 0;
    other.m_height = 0;
    ++count;
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

bool Animal::operator>(const Animal &animal) const {
    return this ->m_weight > animal.m_weight;
}

bool Animal::operator<(const Animal &animal) const {
    return this -> m_weight < animal.m_weight;
}

bool Animal::operator==(const Animal &animal) const {
    return this -> m_weight == animal.m_weight;
}

Animal::~Animal() {
    std::cout << "animal dtor" << std::endl;
    --count;
}
