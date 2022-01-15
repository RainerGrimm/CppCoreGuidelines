#include <iostream>
#include <string>

struct Record {
    explicit Record(std::string na): name(na) {}                 
    std::string name;
};

int main() {
    
    Record* p1 = static_cast<Record*>(malloc(sizeof(Record)));  
    std::cout << p1->name << '\n';                         

    auto p2 = new Record("Record");                                       
    std::cout << p2->name << '\n';                         
   
}
