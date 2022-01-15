#include <iostream>
#include <type_traits>

struct A {
    int a;
    int f(int) { return 2011; }
};

enum E {
  e= 1,
};

union U {
  int u;
};


int main() {

    using namespace std;
  
    cout <<  boolalpha <<  '\n';

    cout << is_void<void>::value << '\n';                                
    cout << is_integral<short>::value << '\n';                           
    cout << is_floating_point<double>::value << '\n';                    
    cout << is_array<int []>::value << '\n';                           
    cout << is_pointer<int*>::value << '\n';                           
    cout << is_null_pointer<nullptr_t>::value << '\n';                   
    cout << is_member_object_pointer<int A::*>::value <<  '\n';          
    cout << is_member_function_pointer<int (A::*)(int)>::value << '\n'; 
    cout << is_enum<E>::value << '\n';                                  
    cout << is_union<U>::value << '\n';                                  
    cout << is_class<string>::value << '\n';                            
    cout << is_function<int * (double)>::value << '\n';                  	
    cout << is_lvalue_reference<int&>::value << '\n';                  
    cout << is_rvalue_reference<int&&>::value << '\n';                  
  
    cout <<  '\n'; 

}
