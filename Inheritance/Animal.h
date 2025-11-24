#ifndef ANIMAL_H
#define ANIMAL_H



class Animal {
private:
    int m_age;
    int m_maxAge;
    int m_weight;
    int m_height;
public:
    Animal() = default;

    Animal(const Animal &) = default;

    Animal(Animal &&);
    Animal &operator=(Animal &&);
    virtual ~Animal();
    Animal(int, int, int, int);
    virtual void makeSound() = 0;
    virtual void Move() = 0;
};



#endif //ANIMAL_H
