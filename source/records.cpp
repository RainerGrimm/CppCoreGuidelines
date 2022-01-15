#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

struct Rec {                                                     
    std::string name;
    std::string addr;
    int id;         
};

int main() {
    
    std::cout << '\n';
    
    std::vector<Rec> vr{ {"Grimm", "Munich", 1},                 
                         {"huber", "Stuttgart", 2},
                         {"Smith", "Rottenburg", 3},
                         {"black", "Hanover", 4} };
                         
    std::string name = "smith";
    
    auto rec = std::find_if(vr.begin(), vr.end(), [&name](Rec& r) {  
        if (r.name.size() != name.size()) return false;            
        for (std::string::size_type i = 0; i < r.name.size(); ++i) {                   
            if (std::tolower(r.name[i]) != std::tolower(name[i])) return false;
        }
        return true;                                               
    });
    
    if (rec != vr.end()) {
        std::cout << rec->name << ",  " << rec->addr << ", " << rec->id << '\n';
    }
    
    std::cout << '\n';
    
}
