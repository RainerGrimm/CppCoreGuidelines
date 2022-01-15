#include <cstddef>
#include <iostream>

int main(){
    
    std::cout << '\n';
    
    unsigned int max{100000};    
    unsigned short x{0};                 
    std::size_t count{0};
    while (x < max && count < 20) {
        std::cout << x << " ";           
        x += 10000;                      
        ++count;
    }
    
    std::cout << "\n\n";
    
}
