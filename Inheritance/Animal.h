#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal {
private:
    int m_age;
    int m_maxAge;
    int m_weight;
    int m_height;
    static int count;
public:
    Animal();
    Animal(int, int, int, int);
    Animal(const Animal &);
    Animal(Animal &&) noexcept;
    virtual ~Animal();
    Animal &operator = (Animal &&) noexcept;
    bool operator>(const Animal &) const;
    bool operator<(const Animal &) const;
    bool operator==(const Animal &) const;
    static int getCount();
    virtual void makeSound() = 0;
    virtual void Move() = 0;
    struct AnimalCompare {
        bool operator()(const Animal& a, const Animal& b) const {
            return a < b;
        }
    };
    struct AnimalEqual {
        bool operator()(const Animal& a, const Animal& b) const {
            return a == b;
        }
    };
    struct AnimalHash {
        std::size_t operator()(const Animal& a) const {
            std::size_t h1 = std::hash<int>{}(a.m_age);
            std::size_t h2 = std::hash<int>{}(a.m_weight);
            return h1 ^ (h2 << 1);
        }
    };
};



template <typename T>
void checkAnimal(T* obj) {
    if (dynamic_cast<Animal*>(obj)) {
        std::cout << "obj is an animal" << std::endl;
    } else {
        std::cout << "obj is not an animal" << std::endl;;
    }
}


#endif //ANIMAL_H
