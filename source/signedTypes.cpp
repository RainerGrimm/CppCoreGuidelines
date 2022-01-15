#include <iostream>

template<typename T, typename T2>
T subtract(T x, T2 y) {
    return x - y;
}

int main() {
    
    int s = 5;
    unsigned int us = 5;
    std::cout << subtract(s, 7) << '\n';       // -2
    std::cout << subtract(us, 7u) << '\n';     // 4294967294
    std::cout << subtract(s, 7u) << '\n';      // -2
    std::cout << subtract(us, 7) << '\n';      // 4294967294
    std::cout << subtract(s, us + 2) << '\n';  // -2
    std::cout << subtract(us, s + 2) << '\n';  // 4294967294

    
}  
