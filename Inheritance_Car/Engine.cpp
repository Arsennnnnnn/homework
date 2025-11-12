#include <iostream>
#include "Engine.h"

Engine::Engine(int horsePower, std::string type)
    : m_horsePower(horsePower), m_type(type) {}

void Engine::start() {
    std::cout << "Engine "  << m_type << ", " << m_horsePower << " HP started." << std::endl;
}

void Engine::stop() {
    std::cout << "Engine stopped." << std::endl;
}

int Engine::getHorsePower() const {
    return m_horsePower;
}

std::string Engine::getType() const {
    return m_type;
}
