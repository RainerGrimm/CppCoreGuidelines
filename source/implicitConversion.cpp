#include <iostream>
#include <string>

struct MyHouse {
    MyHouse() = default;
    explicit MyHouse(const std::string& fam): family(fam) {}
	
    operator bool(){ return not family.empty(); }               
    // explicit operator bool(){ return not family.empty(); }   
	
    std::string family = "";
};

int main() {
	
    std::cout << std::boolalpha << '\n';
	
    MyHouse firstHouse;
    if (not firstHouse) {                                        
        std::cout << "firstHouse is not sold." << '\n';
    }
	
    MyHouse secondHouse("grimm");                              
    if (secondHouse) {
        std::cout << "Grimm bought secondHouse." << '\n';
    }
	
    std::cout << '\n';
	
    int myNewHouse = firstHouse + secondHouse;                  
    int myNewHouse2 = (20 * firstHouse - 10 * secondHouse) / secondHouse;

    std::cout << "myNewHouse: " << myNewHouse << '\n';
    std::cout << "myNewHouse2: " << myNewHouse2 << '\n';
	
    std::cout << '\n';
  
}
