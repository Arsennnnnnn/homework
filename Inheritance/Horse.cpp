#include <iostream>
#include "Horse.h"

Horse::Horse(std::string species, std::string name)
    : m_species(species), m_name(name) {}

Horse::Horse(int age, int maxAge, int weight, int height, std::string species, std::string name)
    : Animal(age, maxAge, weight, height), m_species(species), m_name(name) {}

void Horse::makeSound() {
    std::cout << "Neigh!" << std::endl;
}

void Horse::Move() {
    std::cout << "Horse " << m_name << " moves forward." << std::endl;
}

void Horse::run() {
    std::cout << "Horse " << m_name << " runs at full speed." << std::endl;
}

void Horse::jump() {
    std::cout << "Horse " << m_name << " jumps over the fence." << std::endl;
}
