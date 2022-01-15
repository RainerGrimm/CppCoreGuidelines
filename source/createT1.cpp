#include <utility>

struct MyType {
    MyType(int, double, bool) {};
};

template <typename T, typename Arg>
T createT(Arg&& arg) {
    return T(std::forward<Arg>(arg));
}
    
int main() {
    
    int lvalue{2020};
    
    //std::unique_ptr<int> uniqZero = std::make_unique<int>();      
    auto uniqEleven = createT<int>(2011);                
    auto uniqTwenty = createT<int>(lvalue);              
    //auto uniqType = std::make_unique<MyType>(lvalue, 3.14, true); 
    
}
