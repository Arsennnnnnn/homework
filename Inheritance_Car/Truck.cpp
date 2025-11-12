#include <iostream>
#include "Truck.h"

Truck::Truck(const std::string& brand, const std::string &model, const Engine &engine, int capacity)
    : Car(brand, model, engine), m_capacity(capacity) {}

void Truck::drive() {
    std::cout << m_brand << " " << m_model << " drives carrying " << m_capacity << " tons of cargo." << std::endl;
}

void Truck::honk() {
    std::cout << "HOOOONK!" << std::endl;
}

void Truck::loadCargo() {
    std::cout << m_brand << " " << m_model << " is loading cargo..." << std::endl;
}
