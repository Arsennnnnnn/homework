#ifndef FISH_H
#define FISH_H

#include "Animal.h"

class Fish : public Animal {
private:
    std::string m_species;
    std::string m_name;
public:
    Fish(std::string species, std::string name);
    Fish(int age, int maxAge, int weight, int height, std::string species, std::string name);
    void makeSound() override;
    void Move() override;
    void swim();
    void blowBubbles();
};

#endif // FISH_H
