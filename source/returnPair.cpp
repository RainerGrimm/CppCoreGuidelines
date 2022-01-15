#include <iostream>
#include <set>
#include <tuple>
 
int main() {
    
    std::cout << '\n';
    
    std::set<int> mySet;
 
    std::set<int>::iterator iter;
    bool inserted = false;
    std::tie(iter, inserted) = mySet.insert(2011);              // (1)
    if (inserted) std::cout << "2011 was inserted successfully\n";
    
    auto [iter2, inserted2] = mySet.insert(2017);               // (2)
    if (inserted2) std::cout << "2017 was inserted successfully\n";
    
    std::cout << '\n';
    
}
