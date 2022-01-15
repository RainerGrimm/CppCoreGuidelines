#include <iostream>
#include <memory>
#include <utility>

class MyInt {
public:
    explicit MyInt(int val): myInt(val){}
    ~MyInt() {
        std::cout << myInt << '\n';
    }
private:
    int myInt;
};

void funcCopy(MyInt myInt) {}
void funcPtr(MyInt* myInt) {}
void funcRef(MyInt& myInt) {}
void funcUniqPtr(std::unique_ptr<MyInt> myInt) {}
void funcSharedPtr(std::shared_ptr<MyInt> myInt) {}

int main() {
    
    std::cout << '\n';
    
    std::cout << "=== Begin" << '\n';
    
    MyInt myInt{1998};
    MyInt* myIntPtr = &myInt;
    MyInt& myIntRef = myInt;
    auto uniqPtr = std::make_unique<MyInt>(2011);
    auto sharedPtr = std::make_shared<MyInt>(2014);
    
    funcCopy(myInt);
    funcPtr(myIntPtr);
    funcRef(myIntRef);
    funcUniqPtr(std::move(uniqPtr));
    funcSharedPtr(sharedPtr);
    
    std::cout << "==== End" << '\n';
    
    std::cout << '\n';
    
}
