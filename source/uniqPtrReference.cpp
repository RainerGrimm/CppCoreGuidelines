#include <memory>
#include <utility>

struct Widget{
    Widget(int) {}
};

void reseat(std::unique_ptr<Widget>& uniqPtr) {
    uniqPtr.reset(new Widget(2003));   
    // do something with uniqPtr
}

int main() {

    auto uniqPtr = std::make_unique<Widget>(1998);
    
    reseat(std::move(uniqPtr));       // ERROR
    reseat(uniqPtr);                  // OK 

}
