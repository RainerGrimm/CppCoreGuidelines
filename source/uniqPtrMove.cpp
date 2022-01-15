#include <memory>
#include <utility>

struct Widget {
    explicit Widget(int) {}
};

void sink(std::unique_ptr<Widget> uniqPtr) {
    // do something with uniqPtr, then dispose of it
    
}

int main() {

    auto uniqPtr = std::make_unique<Widget>(1998);
    
    sink(std::move(uniqPtr));      // OK
    sink(uniqPtr);                 // ERROR

}
