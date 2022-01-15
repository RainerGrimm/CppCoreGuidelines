#include <iostream>
#include <cstdarg>

int sum(int num, ... ) {
  
    int sum = 0;
      
    va_list argPointer;
    va_start(argPointer, num );
    for( int i = 0; i < num; i++ )
        sum += va_arg(argPointer, int );
    va_end(argPointer);
      
    return sum;
}
 
int main() {
    
    std::cout << "sum(1, 5): " << sum(1, 5) << '\n';
    std::cout << "sum(3, 1, 2, 3): " << sum(3, 1, 2, 3) << '\n';
    std::cout << "sum(3, 1, 2, 3, 4): " << sum(3, 1, 2, 3, 4)  << '\n'; 
    std::cout << "sum(3, 1, 2, 3.5): " << sum(3, 1, 2, 3.5) << '\n';   

}
