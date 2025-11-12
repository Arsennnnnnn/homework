#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
private:
    int m_topSpeed;
public:
    SportsCar(const std::string &brand, const std::string &model, const Engine &engine, int topSpeed);

    void drive() override;
    void honk() override;

    void turboBoost();
};

#endif // SPORTSCAR_H
