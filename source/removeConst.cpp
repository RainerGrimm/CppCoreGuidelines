#include <iostream>
#include <type_traits>

template<typename T > 
struct removeConst { 
    using type = T;               
};

template<typename T > 
struct removeConst<const T> { 
    using type = T;               
};

using std::boolalpha;
using std::cout;
using std::is_same;

int main() {
    
    cout << boolalpha;
    
    cout << is_same<int, removeConst<int>::type>::value << '\n';        // true
    cout << is_same<int, removeConst<const int>::type>::value << '\n';  // true
  
}
