#include <iostream>

constexpr int gcd(int a, int b) {
    while (b != 0){
        auto t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {

    std::cout << '\n';

    constexpr auto res1 = gcd(121, 11);            
    std::cout << "gcd(121, 11) = " << res1 << '\n';

    auto val = 121;                               
    auto res2 = gcd(val, 11);                    
    std::cout << "gcd(val, 11) = " << res2 << '\n';
  
    std::cout << '\n';

}
