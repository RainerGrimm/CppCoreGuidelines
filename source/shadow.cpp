
#include <iostream>

int shadow(bool cond) {
    int d = 0;
    if (cond) {
        d = 1;
    }
    else {
        int d = 2;  // declare a local scoped d; 
                    // hiding d of the parent scope
        d = 3;
    }
    return d;
}

int main() {

    std::cout << '\n';
    
    std::cout << "shadow(true): " << shadow(true) << '\n';      
    std::cout << "shadow(false): " << shadow(false) << '\n';     

    std::cout << '\n';
    
}
