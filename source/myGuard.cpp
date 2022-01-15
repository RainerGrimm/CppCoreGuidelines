#include <mutex>
#include <iostream>

template <typename T>
class MyGuard {
public:
    explicit MyGuard(T& m): myMutex(m) {
        std::cout << "lock" << '\n';
        myMutex.lock();
    }
    ~MyGuard() {
        myMutex.unlock();
        std::cout << "unlock" << '\n';
    }
private:
    T& myMutex;
};

int main() {
	
    std::cout << '\n';
	
    std::mutex m;
    MyGuard<std::mutex> {m};                        
    std::cout << "CRITICAL SECTION" << '\n';  
  
    std::cout << '\n';

}     
