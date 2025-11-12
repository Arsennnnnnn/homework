#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"

class ElectricCar : public Car {
private:
    int m_batteryLevel;
public:
    ElectricCar(const std::string &brand, const std::string &model, const Engine &engine, int batteryLevel);

    void drive() override;
    void honk() override;

    void charge();
};

#endif // ELECTRICCAR_H
