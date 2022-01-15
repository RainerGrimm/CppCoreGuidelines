#include <iostream>
#include <string>
#include <thread>

void func() {
    std::string s{"C++11"};
    std::thread t([&s]{ std::cout << s << '\n';});
    t.detach();
}

int main() {
    func();
} 
