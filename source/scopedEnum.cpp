#include <iostream>

enum class ColorScoped {
    red,
    blue,
    green
};

void useMe(ColorScoped color) {
    switch(color) {
    case ColorScoped::red:
        std::cout << "ColorScoped::red" << '\n';
        break;
    case ColorScoped::blue:
        std::cout << "ColorScoped::blue" << '\n';
        break;
    case ColorScoped::green:
        std::cout << "ColorScoped::green" << '\n';
        break;
    }
}


int main() {

    std::cout << static_cast<int>(ColorScoped::red) << '\n';   // 0
    std::cout << static_cast<int>(ColorScoped::green) << '\n'; // 2

    ColorScoped color{ColorScoped::red};
    useMe(color);                              // ColorScoped::red
    
}
