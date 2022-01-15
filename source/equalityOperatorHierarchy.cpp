#include <string>

struct Base {
    std::string name;
    int number;
    virtual bool operator == (const Base& a) const {
         return name == a.name && number == a.number;
    }
};

struct Derived: Base {
    char character;
    virtual bool operator == (const Derived& a) const {
        return name == a.name && 
               number == a.number && 
               character == a.character;
    }
};

int main() {
    
    Base b;
    Base& base = b;
    Derived d;
    Derived& derived = d;
    
    base == derived;  // compares name and number, ignores derived's character            
    derived == base;  // error: no == defined                                        
    Derived derived2;
    derived == derived2; // compares, name, number, and character
    Base& base2 = derived2; 
    base2 == derived; // compares name and number, but
                      // ignores derived2's and derived's character 
    
}
