#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex mut;
std::condition_variable condVar; 

bool dataReady{false};

void waitingForWork() {
    std::cout << "Waiting " << '\n';
    std::unique_lock<std::mutex> lck(mut);
    condVar.wait(lck, []{ return dataReady; });   
    std::cout << "Running " << '\n';
}

void setDataReady() {
    {
        std::lock_guard<std::mutex> lck(mut);
        dataReady = true;
    }
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
