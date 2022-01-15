#include <future>
#include <iostream>
#include <utility>

void waitingForWork(std::future<void> fut) {
    std::cout << "Waiting " << '\n';
    fut.wait();
    std::cout << "Running " << '\n';
}

void setDataReady(std::promise<void> prom) {
    std::cout << "Data prepared" << '\n';
    prom.set_value();
}

int main() {

    std::cout << '\n';

    std::promise<void> sendReady;
    auto fut = sendReady.get_future();

    std::thread t1(waitingForWork, std::move(fut));
    std::thread t2(setDataReady, std::move(sendReady));

    t1.join();
    t2.join();

    std::cout << '\n';
  
}
