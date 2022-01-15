#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex mut;
std::condition_variable condVar;

void waitingForWork() {
    std::cout << "Waiting " << '\n';
    std::unique_lock<std::mutex> lck(mut);
    condVar.wait(lck);                       
    std::cout << "Running " << '\n';
}

void setDataReady() {
    std::cout << "Data prepared" << '\n';
    condVar.notify_one();                  
}

int main() {
    
    std::cout << '\n';

    std::thread t1(waitingForWork);
    std::thread t2(setDataReady);

    t1.join();
    t2.join();
  
    std::cout << '\n';
  
}
