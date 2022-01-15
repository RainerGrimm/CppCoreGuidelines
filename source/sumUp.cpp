#include <iostream>
#include <numeric>
#include <vector>

int main() {

    std::vector<int> vec{1, 2, 3, 4, 5, 6 ,7, 8, 9, 10};

    // bad
    int sum1 = 0;
    auto sizeVec = vec.size();
    for (int i = 0; i < sizeVec; ++i) sum1 += vec[i];

    std::cout << sum1 << '\n';      // 55

    // better
    int sum2 = 0;
    for (auto v: vec) sum2 += v;
    std::cout << sum2 << '\n';      // 55

    // the best
    auto sum3 = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << sum3 << '\n';      // 55

}
    
