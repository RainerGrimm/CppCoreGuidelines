#include <string>
#include <utility>

template <typename T, typename ... T1>
T create(T1&& ... t1) {
    return T(std::forward<T1>(t1)...);
}

struct MyType {
    MyType(int, double, bool){}
};

int main() {
    
    // lvalue
    int five=5;
    int myFive= create<int>(five);    

    // rvalues
    int myFive2= create<int>(5);      
    
    // no arguments
    int myZero= create<int>();   
    
    // three arguments; (lvalue, rvalue, rvalue)
    MyType myType = create<MyType>(myZero, 5.5, true);
 
}

