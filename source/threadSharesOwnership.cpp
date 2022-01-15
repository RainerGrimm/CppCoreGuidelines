#include <iostream>
#include <thread>

using namespace std::literals::chrono_literals;

struct MyInt {
    int val{2017};
    ~MyInt() {                            
        std::cout << "Goodbye" << '\n';   
    }
};

void showNumber(const MyInt* myInt) {
    std::cout << myInt->val << '\n';
}

void threadCreator() {
    MyInt* tmpInt= new MyInt;             
    
    std::thread t1(showNumber, tmpInt);   
    std::thread t2(showNumber, tmpInt);  
    
    t1.detach();
    t2.detach();
}

int main() {

    std::cout << '\n';
    
    threadCreator();
    std::this_thread::sleep_for(1s);

    std::cout << '\n';

}
