#include <iostream>
#include "Elephant.h"

Elephant::Elephant(std::string species, std::string name)
    : m_species(species), m_name(name) {}

Elephant::Elephant(int age, int maxAge, int weight, int height, std::string species, std::string name)
    : Animal(age, maxAge, weight, height), m_species(species), m_name(name) {}

void Elephant::makeSound() {
    std::cout << "Trumpet!" << std::endl;
}

void Elephant::Move() {
    std::cout << "Elephant " << m_name << " walks heavily." << std::endl;
}

void Elephant::sprayWater() {
    std::cout << "Elephant " << m_name << " sprays water with its trunk." << std::endl;
}

void Elephant::eatLeaves() {
    std::cout << "Elephant " << m_name << " eats leaves from a tree." << std::endl;
}
