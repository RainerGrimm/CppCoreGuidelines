#include <iostream>

void func(int fir, int sec) {
    std::cout << "(" << fir << "," << sec << ")" << '\n';
}

int main(){
    int i = 0;
    func(i++, i++);
}
