#include <iostream>

class Base {
public:
    void func(int i) { std::cout << "Base::func(int) \n"; }
    void func(double d) { std::cout << "Base::func(double) \n"; }
};

class Derived: public Base {
public:
    void func(int i) { std::cout << "Derived::func(int) \n"; }
};

int main() {
    
    std::cout << '\n';
    
    Derived der;
    der.func(2011);
    der.func(2020.5);
    
    std::cout << '\n';
    
}
