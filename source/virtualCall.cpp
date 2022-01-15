#include <iostream>

struct Base {
  Base() {
    f();
  }
  virtual void f() {
    std::cout << "Base called" << '\n';
  }
};

struct Derived: Base {
  void f() override {
    std::cout << "Derived called" << '\n';
  }
};

int main() {
  
  std::cout << '\n';
  
  Derived d;         
  
  std::cout << '\n';
  
}
