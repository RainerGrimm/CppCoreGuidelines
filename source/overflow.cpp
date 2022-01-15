#include <cstddef>
#include <iostream>

int main() {
    
    std::cout << '\n';
    
    int max{100000};    
    short x{0};                     
    std::size_t count{0};
    while (x < max && count < 20) {
        std::cout << x << " ";
        x += 10000;                 
        ++count;
    }
    
    std::cout << "\n\n";

} 
