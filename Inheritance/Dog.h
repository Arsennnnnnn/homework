#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal{
private:
    std::string m_species;
    std::string m_name;
public:
    Dog() = delete; // for not creating an abstract dog obj
    ~Dog() override;
    Dog(std::string species, std::string name);
    Dog(int, int, int, int, std::string species, std::string name);
    void makeSound() override;
    void Move() override;
    void bringTheBall();
    void sitDown();
};

#endif //DOG_H
