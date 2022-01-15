#include <stdexcept>
#include <iostream>
#include <string>
 
int main() {

    std::cout << '\n';

    std::string str("1123456789"); 
 
    str.at(0) = '0';                                  
    
    std::cout << str << '\n';
 
    std::cout << "str.size(): " << str.size() << '\n';
    std::cout << "str.capacity() = " << str.capacity() << '\n';
 
    try {
        str.at(12) = 'X';                              
    }
    catch (const std::out_of_range& exc) {
        std::cout << exc.what() << '\n';
    }
    
    std::cout << '\n';

}
