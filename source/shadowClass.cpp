#include <iostream>
#include <string>

struct Base {
    void shadow(std::string) {                           
        std::cout << "Base::shadow" << '\n';       
    }
};

struct Derived: Base {
    using Base::shadow;
    void shadow(int) {                                  
        std::cout << "Derived::shadow" << '\n';    
    }
};

int main() {
    
    std::cout << '\n';
    
    Derived derived;
    
    derived.shadow(std::string{});                      
    derived.shadow(int{});                              
    
    std::cout << '\n';
    
}
