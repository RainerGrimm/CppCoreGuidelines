#include <iostream>

class Foo {
    int m1;
    int m2;
public:
    Foo(int x) :m2{x}, m1{++x} {    // BAD: misleading initializer order
        std::cout << "m1: " << m1 << '\n';
        std::cout << "m2: " << m2 << '\n';
    }
};

int main() {

    std::cout << '\n';
    Foo foo(1);
    std::cout << '\n';

}
