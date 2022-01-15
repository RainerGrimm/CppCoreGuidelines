#include <iostream>
#include <vector>

namespace Bad {
    
    struct Number { 
        int m; 
    };
    
    template<typename T1, typename T2>
    bool operator == (T1, T2) { 
        return false;  
    }
    
}

namespace Util {
    
    bool operator == (int, Bad::Number) {   
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
