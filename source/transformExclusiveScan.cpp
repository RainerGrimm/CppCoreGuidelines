#include <execution>
#include <numeric>
#include <iostream>
#include <vector>

int main() {
  
    std::cout << '\n';
  
    std::vector<int> resVec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> resVec1(resVec.size());             
    std::transform_exclusive_scan(std::execution::par,         
                                  resVec.begin(), resVec.end(), 
                                  resVec1.begin(), 0,
                                  [](int fir, int sec){ return fir + sec; },
                                  [](int arg){ return arg * arg; });
  
    std::cout << "transform_exclusive_scan: ";
    for (auto v: resVec1) std::cout << v << " ";
  
    std::cout << '\n';
  
}
