#ifndef ANIMAL_H
#define ANIMAL_H



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
};



#endif //ANIMAL_H
