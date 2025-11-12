#include <iostream>
#include "Fish.h"

Fish::Fish(std::string species, std::string name)
    : m_species(species), m_name(name) {}

Fish::Fish(int age, int maxAge, int weight, int height, std::string species, std::string name)
    : Animal(age, maxAge, weight, height), m_species(species), m_name(name) {}

void Fish::makeSound() {
    std::cout << "Blub blub!" << std::endl;
}

void Fish::Move() {
    std::cout << "Fish " << m_name << " swims forward." << std::endl;
}

void Fish::swim() {
    std::cout << "Fish " << m_name << " swims in circles." << std::endl;
}

void Fish::blowBubbles() {
    std::cout << "Fish " << m_name << " blows bubbles." << std::endl;
}
