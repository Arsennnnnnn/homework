#include <iostream>
#include "Cat.h"

Cat::Cat(std::string species, std::string name)
    : m_species(species), m_name(name) {}

Cat::Cat(int age, int maxAge, int weight, int height, std::string species, std::string name)
    : Animal(age, maxAge, weight, height), m_species(species), m_name(name) {}

void Cat::makeSound() {
    std::cout << "Meow!" << std::endl;
}

void Cat::Move() {
    std::cout << "Cat " << m_name << "walks forward." << std::endl;
}

void Cat::scratch() {
    std::cout << "Cat " << m_name << " scratches the sofa." << std::endl;
}

void Cat::climb() {
    std::cout << "Cat " << m_name << " climbs the tree." << std::endl;
}
