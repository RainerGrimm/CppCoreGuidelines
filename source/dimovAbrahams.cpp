#include <iostream>
#include <string>

// getTypeName

template<typename T>            // primary template
std::string getTypeName(T) {
    return "unknown";
}

template<typename T>            // primary template that overloads (1)
std::string getTypeName(T*) {
    return "pointer";
}

template<>                      // explicit specialization of (2)
std::string getTypeName(int*) {
    return "int pointer";
}

// getTypeName2

template<typename T>            // primary template
std::string getTypeName2(T) {
    return "unknown";
}

template<>                      // explicit specialization of (4)
std::string getTypeName2(int*) {
    return "int pointer";
}

template<typename T>            // primary template that overloads (4)
std::string getTypeName2(T*) {
    return "pointer";
}

int main() {
    
    std::cout << '\n';
    
    int *p;
    
    std::cout << "getTypeName(p): " << getTypeName(p) << '\n';   
    std::cout << "getTypeName2(p): " << getTypeName2(p) << '\n'; 
    
    std::cout << '\n';
    
}
