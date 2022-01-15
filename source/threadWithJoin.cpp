#include <iostream>
#include <thread>

int main() {

    std::jthread t([]{ 
        std::cout << std::this_thread::get_id() << '\n';
    });

}
