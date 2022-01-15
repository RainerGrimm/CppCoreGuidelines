#include <iostream>

struct Immutable {
    mutable int val{12};            
    void canNotModify() const {
        val = 13;
    }
};

int main() {
    
    std::cout << '\n';
    
    const Immutable immu;
    std::cout << "val: " << immu.val << '\n';
    immu.canNotModify();           
    std::cout << "val: " << immu.val << '\n';
    
    std::cout << '\n';
    
}
