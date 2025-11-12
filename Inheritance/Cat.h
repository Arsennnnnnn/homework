#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
private:
    std::string m_species;
    std::string m_name;
public:
    Cat(std::string species, std::string name);
    Cat(int age, int maxAge, int weight, int height, std::string species, std::string name);
    void makeSound() override;
    void Move() override;
    void scratch();
    void climb();
};

#endif // CAT_H
