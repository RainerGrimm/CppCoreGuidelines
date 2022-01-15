#include <memory>

struct MyType{
    MyType(int, double, bool){};
};

int main(){
    
    int lvalue{2020};
    
    std::unique_ptr<int> uniqZero = std::make_unique<int>();      
    auto uniqEleven = std::make_unique<int>(2011);                
    auto uniqTwenty = std::make_unique<int>(lvalue);              
    auto uniqType = std::make_unique<MyType>(lvalue, 3.14, true); 
    
}
