#include <iostream>

class MyVal {
public:
    MyVal(int i) { myInt = i; };
    MyVal(double d): myDoub(d) {};
private:
    int myInt{};
    double myDoub{};
};

int main() {
    
    std::cout << '\n';
    
    MyVal myValInt(5);
    MyVal myValDou(5.5);
    
    std::cout << '\n';
    
}
