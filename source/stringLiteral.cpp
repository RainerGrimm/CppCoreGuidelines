#include <iostream>
#include <string>
#include <utility>

int main() {

    std::string hello = "hello";                                     
    auto firstPair = std::make_pair(hello, 5);
    
    auto secondPair = std::make_pair("hello", 15);                
    
     using namespace std::string_literals; 
    // auto secondPair = std::make_pair("hello"s, 15);            
    
    if (firstPair < secondPair) std::cout << "true\n"; 
    
}
