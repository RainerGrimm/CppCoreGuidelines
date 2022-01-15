#include <iostream>  
  
void print(int) { 
    std::cout << "int" << '\n'; 
} 

void print(double) { 
    std::cout << "double" << '\n'; 
} 

void print(const char*) { 
    std::cout << "const char* " << '\n'; 
} 

void print(int, double, const char*) { 
    std::cout << "int, double, const char* " << '\n'; 
} 

  
int main() { 
 
    std::cout << '\n';   

    print(10); 
    print(10.10); 
    print("ten"); 
    print(10, 10.10, "ten");

    std::cout << '\n';

}
