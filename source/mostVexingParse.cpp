#include <iostream>

struct MyInt {
    MyInt(int arg = 0): i(arg) {}
    int i;
};


int main() {

    MyInt myInt(2011);
    MyInt myInt2{};
  
    std::cout << myInt.i;
    std::cout << myInt2.i;
  
}
