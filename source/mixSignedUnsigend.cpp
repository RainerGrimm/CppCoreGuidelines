#include <iostream>

int main() {

    int x = -3;
    unsigned int y = 7;

    std::cout << x - y << '\n';  // 4294967286
    std::cout << x + y << '\n';  // 4
    std::cout << x * y << '\n';  // 4294967275
    std::cout << x / y << '\n';  // 613566756
  
}  
