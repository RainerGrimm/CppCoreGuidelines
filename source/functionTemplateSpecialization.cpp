#include <iostream>
#include <string>

template <typename T>            
std::string getTypeName(T) {
    return "unknown type";
}

template <>                      
std::string getTypeName<int>(int) {
    return "int";
}

std::string getTypeName(double) { 
    return "double";
}

int main() {
    
    std::cout << '\n';
    
    std::cout << "getTypeName(true): " << getTypeName(true) << '\n';
    std::cout << "getTypeName(4711): " << getTypeName(4711) << '\n';
    std::cout << "getTypeName(3.14): " << getTypeName(3.14) << '\n';
    
    std::cout << '\n';
    
}
