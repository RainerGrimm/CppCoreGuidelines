#include <memory>

struct MyClass {
    std::unique_ptr<int> uniPtr = std::make_unique<int>(2011);
};

int main() {
    
    MyClass myClass;
    MyClass myClass2(myClass);
    MyClass myClass3;
    myClass3 = myClass;
    
}
