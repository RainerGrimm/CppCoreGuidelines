#include <iostream>
#include <type_traits>

int main() {
    
    std::cout << std::boolalpha << '\n';
    
    std::cout << "std::is_default_constructible<int&>::value: " 
              << std::is_default_constructible<int&>::value << '\n';
    std::cout << "std::is_copy_constructible<int&>::value: " 
              << std::is_copy_constructible<int&>::value << '\n';
    std::cout << "std::is_copy_assignable<int&>::value: " 
              << std::is_copy_assignable<int&>::value << '\n';
    std::cout << "std::is_move_constructible<int&>::value: " 
              << std::is_move_constructible<int&>::value << '\n';
    std::cout << "std::is_move_assignable<int&>::value: " 
              << std::is_move_assignable<int&>::value << '\n';
    std::cout << "std::is_destructible<int&>::value: " 
              << std::is_destructible<int&>::value << '\n';
    std::cout << '\n';
    std::cout << "std::is_swappable<int&>::value: " 
              << std::is_swappable<int&>::value << '\n';     

    std::cout << '\n';

}
