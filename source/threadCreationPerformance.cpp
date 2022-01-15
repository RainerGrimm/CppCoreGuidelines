#include <chrono>
#include <iostream>
#include <thread>

constexpr long long numThreads= 1'000'000;

int main() {

    auto start = std::chrono::system_clock::now();

    for (long long i = 0; i < numThreads; ++i) std::thread([]{}).detach();  

    std::chrono::duration<double> dur= std::chrono::system_clock::now() - start;
    std::cout << "time: " << dur.count() << " seconds" << '\n';

}
