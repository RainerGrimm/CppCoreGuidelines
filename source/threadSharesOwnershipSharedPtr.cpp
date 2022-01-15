#include <iostream>
#include <memory>
#include <thread>

using namespace std::literals::chrono_literals;

struct MyInt {
    int val{2017};
    ~MyInt() {
        std::cout << "Goodbye" << '\n';
    }
};

void showNumber(std::shared_ptr<MyInt> myInt) {    
    std::cout << myInt->val << '\n';
}

void threadCreator() {
    auto sharedPtr = std::make_shared<MyInt>();    
    
    std::thread t1(showNumber, sharedPtr);
    std::thread t2(showNumber, sharedPtr);
    
    t1.detach();
    t2.detach();
}

int main() {

    std::cout << '\n';
    
    threadCreator();
    std::this_thread::sleep_for(1s);

    std::cout << '\n';

}
