#include <iostream>
#include "ElectricCar.h"

ElectricCar::ElectricCar(const std::string &brand, const std::string &model, const Engine &engine, int batteryLevel)
    : Car(brand, model, engine), m_batteryLevel(batteryLevel) {}

void ElectricCar::drive() {
    std::cout << m_brand << " " << m_model << " drives." << std::endl;
}

void ElectricCar::honk() {
    std::cout << "Beep beep!" << std::endl;
}

void ElectricCar::charge() {
    std::cout << m_brand << " " << m_model << " is charging." << std::endl;
    m_batteryLevel = 100;
}
