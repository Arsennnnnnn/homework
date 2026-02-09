#include <iostream>

struct callable {
    int value;

    callable(int v) : value(v) {}

    callable operator()(int x) const {
        return callable(value * x);
    }

    operator int() const {
        return value;
    }
};

callable f(int x) {
    return callable(x);
}
//with lambdas
auto g = [](int x) {
    return [x](int y) {
        return x * y;
    };
};

int main() {
    std::cout << g(4)(5) << std::endl;
    std::cout << f(5)(6) << std::endl;
}