#ifndef FIBO_H
#define FIBO_H

template<int n>
class fibo {
public:
    static const unsigned long long value = fibo<n - 1>::value + fibo<n - 2>::value;
};

template <>
class fibo<0> {
    public:
    static const unsigned long long value = 1;
};


template <>
class fibo<1> {
public:
    static const unsigned long long value = 1;
};

#endif //FIBO_H
