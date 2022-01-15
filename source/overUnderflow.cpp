#include <cstddef>
#include <iostream>

int main() {
    
    int a[0];
    int n = 0;

    while (true){
        if (!(n % 100)){
            std::cout << "a[" << n << "] = " << a[n] 
                      << ", a[" << -n << "] = " << a[-n] << '\n';
        }
        a[n] = n;
        a[-n] = -n;
        ++n;
    }
    
}
