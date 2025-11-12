#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include <string>

class Car {
protected:
    std::string m_brand;
    std::string m_model;
    Engine m_engine;
public:
    Car() = default;
    Car(const std::string& brand, const std::string& model, const Engine& engine);
    virtual ~Car() = default;
    virtual void drive() = 0;
    virtual void honk() = 0;
    void startCar();
    void stopCar();
};

#endif // CAR_H
