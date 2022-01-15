#include <iostream>

enum class Color1 {
    red,
    blue,
    green
};
 
enum struct Color2: char {
    red,
    blue,
    green
};

int main() {

    std::cout << sizeof(Color1) << '\n';  
    std::cout << sizeof(Color2) << '\n';  

}
