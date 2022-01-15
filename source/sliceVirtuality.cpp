#include <iostream>
#include <string>

struct Base { 
    virtual std::string getName() const {        
        return "Base";       
    }
};
 
struct Derived : Base { 
    std::string getName() const override {       
        return "Derived";
    }
};
 
int main() {
    
    std::cout << '\n';
    
    Base b;
    std::cout << "b.getName(): " << b.getName() << '\n';       
    
    Derived d;
    std::cout << "d.getName(): " << d.getName() << '\n';      
    
    Base b1 = d;
    std::cout << "b1.getName():  " << b1.getName() << '\n';    
   
    Base& b2 = d;
    std::cout << "b2.getName():  " << b2.getName() << '\n';    

    Base* b3 = new Derived;
    std::cout << "b3->getName(): " << b3->getName() << '\n';   
    
    std::cout << '\n';

}
