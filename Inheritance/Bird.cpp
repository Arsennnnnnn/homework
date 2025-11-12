#include <iostream>
#include "Bird.h"

Bird::Bird(std::string species, std::string name)
    : m_species(species), m_name(name) {}

Bird::Bird(int age, int maxAge, int weight, int height, std::string species, std::string name)
    : Animal(age, maxAge, weight, height), m_species(species), m_name(name) {}

void Bird::makeSound() {
    std::cout << "Tweet tweet!" << std::endl;
}

void Bird::Move() {
    std::cout << "Bird " << m_name << " flies." << std::endl;
}

void Bird::fly() {
    std::cout << "Bird " << m_name << " spreads wings and flies." << std::endl;
}

void Bird::sing() {
    std::cout << "Bird " << m_name << " sings beautifully." << std::endl;
}
