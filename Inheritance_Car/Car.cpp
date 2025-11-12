#include <iostream>
#include "Car.h"

Car::Car(const std::string& brand, const std::string& model, const Engine& engine)
    : m_brand(brand), m_model(model), m_engine(engine) {}

void Car::startCar() {
    std::cout << m_brand << " " << m_model << " is starting." << std::endl;
    m_engine.start();
}

void Car::stopCar() {
    std::cout << m_brand << " " << m_model << " is stopping." << std::endl;
    m_engine.stop();
}
