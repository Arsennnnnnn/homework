#include <iostream>
#include "Dog.h"

Dog::~Dog() {
    std::cout << __func__ << std::endl;
}

Dog::Dog(std::string species, std::string name)
    : m_species(species), m_name(name) {}

Dog::Dog(int age, int maxAge, int weight, int height, std::string species, std::string name)
    : Animal(age, maxAge, weight, height), m_species(species), m_name(name) {}

void Dog::makeSound() {
    std::cout << "Woof Woof!" << std::endl;
}

void Dog::Move() {
    std::cout << "Dog " << m_name << "moved forward." << std::endl;
}

void Dog::bringTheBall() {
    std::cout << "Dog " << m_name << "brings the ball." << std::endl;
}

void Dog::sitDown() {
    std::cout << "Dog " << m_name << "sits down." << std::endl;
}
