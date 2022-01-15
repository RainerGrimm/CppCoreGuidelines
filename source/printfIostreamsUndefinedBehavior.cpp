#include <cstdio>

#include <iostream>

int main() {
    
    printf("\n");
    
    printf("2011: %d\n",2011);            
    printf("3.1416: %d\n",3.1416);           
    printf("\"2011\": %d\n","2011");           
    // printf("%s\n",2011);    // segmentation fault
    
    std::cout << '\n';
    std::cout << "2011: " <<  2011 << '\n';    
    std::cout << "3.146: " << 3.1416 << '\n';   
    std::cout << "\"2011\": " << "2011" << '\n';   
    
    std::cout << '\n';

}
