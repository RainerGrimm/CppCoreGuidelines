#include <iostream>
#include <string>

int main() {
 
    std::string text{"The Text is not too long."};  
 
    std::cout << "text.size(): " << text.size() << '\n';
    std::cout << text << '\n';
 
    text +=" And can still grow!";
 
    std::cout << "text.size(): " << text.size() << '\n';
    std::cout << text << '\n';
 
}
