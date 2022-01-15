#include <iostream>
#include <string>
#include <set>
#include <tuple>
 
int main() {
    
    std::cout << '\n';
    
    std::set<int> mySet;
 
    std::set<int>::iterator iter;
    bool inserted{};
    // unpacks the return value of insert into iter and inserted
    std::tie(iter, inserted) = mySet.insert(2011);
    if (inserted) std::cout << "2011 was inserted successfully\n";
    
    // unpacks the return value of insert into iter2 and inserted2
    auto [iter2, inserted2] = mySet.insert(2017);
    if (inserted2) std::cout << "2017 was inserted successfully\n";
    
    std::cout << '\n';
    
}
