#include <condition_variable>
#include <iostream>
#include <thread>

bool dataReady= false;                                  

std::mutex mut;
std::condition_variable condVar1;
std::condition_variable condVar2;

int counter = 0;
int COUNTLIMIT = 50;

void setTrue() {                                           

    while(counter <= COUNTLIMIT) {                          
        std::unique_lock<std::mutex> lck(mut);
        condVar1.wait(lck, []{return dataReady == false;});  
        dataReady = true;
        ++counter;                                           
        std::cout << dataReady << '\n';
        condVar2.notify_one();                               
    }
}

void setFalse() {                                          

    while(counter < COUNTLIMIT) {                             
        std::unique_lock<std::mutex> lck(mut);
        condVar2.wait(lck, []{return dataReady == true;});
        dataReady = false;
        std::cout << dataReady << '\n';
        condVar1.notify_one();
    }
}

int main() {

    std::cout << std::boolalpha << '\n';

    std::cout << "Begin: " << dataReady << '\n';

    std::thread t1(setTrue);
    std::thread t2(setFalse);

    t1.join();
    t2.join();
  
    dataReady = false;
    std::cout << "End: " << dataReady << '\n';

    std::cout << '\n';
    
}
