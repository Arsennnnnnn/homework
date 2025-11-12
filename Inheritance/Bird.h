#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
private:
    std::string m_species;
    std::string m_name;
public:
    Bird(std::string species, std::string name);
    Bird(int age, int maxAge, int weight, int height, std::string species, std::string name);

    void makeSound() override;
    void Move() override;

    void fly();
    void sing();
};

#endif // BIRD_H
