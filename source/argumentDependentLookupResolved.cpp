#include <iostream>
#include <vector>

namespace Bad {
    
    struct Number { 
        int m; 
    };
    
}

namespace Util {
    
    bool operator == (int, Bad::Number) {   // compare to int
        return true; 
    } 

    void compareSize() {
        Bad::Number badNumber{5};                            
        std::vector<int> vec{1, 2, 3, 4, 5};
        
        std::cout << std::boolalpha << '\n';
        
        std::cout << "5 == badNumber: " <<                    
                     (5 == badNumber) << '\n';               
        std::cout << "vec.size() == badNumber: " << 
                     (vec.size() == badNumber) << '\n'; 
        
        std::cout << '\n';
    }
}

int main() {
   
   Util::compareSize();

}
