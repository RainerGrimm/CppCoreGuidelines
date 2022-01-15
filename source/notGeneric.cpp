#include <deque>
#include <list>
#include <vector>

template <typename Cont>
void justIterate(const Cont& cont) {
    const auto itEnd = cont.end();
    for (auto it = cont.begin(); it < itEnd; ++it) {    
        // do something
    }
}
    
int main() {
    
    std::vector<int> vecInt{1, 2, 3, 4, 5};
    justIterate(vecInt);                                
    
    std::deque<int> deqInt{1, 2, 3, 4, 5};
    justIterate(deqInt);                               
    
    std::list<int> listInt{1, 2, 3, 4, 5};
    justIterate(listInt);                               
    
}  
