#include <iostream>
#include <memory>
#include <string>

struct Base { // GOOD: base class suppresses copying
    Base() = default;
    virtual ~Base() = default;
    Base(const Base&) = delete;
    Base& operator = (const Base&) = delete;
    virtual std::unique_ptr<Base> clone() { return std::make_unique<Base>(); }
    virtual std::string getName() const { return "Base"; }
};

struct Derived : public Base {
    Derived() = default;
    std::unique_ptr<Base> clone() override { return std::make_unique<Derived>(); }
    std::string getName() const override { return "Derived"; }
};

int main() {
    
    std::cout << '\n';

    auto base1 = std::make_unique<Base>();
    auto base2 = base1->clone();
    std::cout << "base1->getName(): " << base1->getName() << '\n';
    std::cout << "base2->getName(): " << base2->getName() << '\n';
    
    auto derived1 = std::make_unique<Derived>();
    auto derived2 = derived1->clone();
    std::cout << "derived1->getName(): " << derived1->getName() << '\n';
    std::cout << "derived2->getName(): " << derived2->getName() << '\n';
    
    std::cout << '\n';

}
