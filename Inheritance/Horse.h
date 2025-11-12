#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"

class Horse : public Animal {
private:
    std::string m_species;
    std::string m_name;
public:
    Horse(std::string species, std::string name);
    Horse(int age, int maxAge, int weight, int height, std::string species, std::string name);

    void makeSound() override;
    void Move() override;

    void run();
    void jump();
};

#endif // HORSE_H
