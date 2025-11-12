#include <iostream>
#include "SportsCar.h"

SportsCar::SportsCar(const std::string &brand, const std::string &model, const Engine &engine, const int topSpeed)
    : Car(brand, model, engine), m_topSpeed(topSpeed) {}

void SportsCar::drive() {
    std::cout << m_brand << " " << m_model << " drives fast." << std::endl;
}

void SportsCar::honk() {
    std::cout << "Vroom!" << std::endl;
}

void SportsCar::turboBoost() {
    std::cout << m_brand << " " << m_model << " activates turbo boost!" << std::endl;
}
