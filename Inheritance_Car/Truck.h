#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"

class Truck : public Car {
private:
    int m_capacity;
public:
    Truck(const std::string& brand, const std::string& model, const Engine& engine, int capacity);

    void drive() override;
    void honk() override;

    void loadCargo();
};

#endif // TRUCK_H
