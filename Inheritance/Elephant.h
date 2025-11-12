#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "Animal.h"
#include <string>

class Elephant : public Animal {
private:
    std::string m_species;
    std::string m_name;
public:
    Elephant(std::string species, std::string name);
    Elephant(int age, int maxAge, int weight, int height, std::string species, std::string name);

    void makeSound() override;
    void Move() override;

    void sprayWater();
    void eatLeaves();
};

#endif // ELEPHANT_H
