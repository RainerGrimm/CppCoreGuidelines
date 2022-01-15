#include <iostream>

union Value {
    int i;
    double d;
};

int main() {
  
    std::cout << '\n';

    Value v;
    v.d = 987.654;            
    std::cout << "v.d: " << v.d << '\n';     
    std::cout << "v.i: " << v.i << '\n';      

    std::cout << '\n';

    v.i = 123;    
    std::cout << "v.i: " << v.i << '\n';
    std::cout << "v.d: " << v.d << '\n';      
  
    std::cout << '\n';

}
