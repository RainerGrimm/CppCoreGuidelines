#include <map>
#include <vector>
#include <string>

// Initialisation of a C-Array 
class Array {
public:
    Array(): myData{1,2,3,4,5} {}    
private:
    const int myData[5];
};

class MyClass {
public: 
    int x;
    double y;
};

class MyClass2 {
  public:
    MyClass2(int fir, double sec): x{fir}, y{sec} {}
  private: 
    int x;
    double y;
};

int main() {

    // Direct initialization of standard containers
    int intArray[]= {1, 2, 3, 4, 5};   
    std::vector<int> intArray1{1, 2, 3, 4, 5};  
    std::map<std::string, int> myMap{ {"Scott", 1976}, {"Dijkstra", 1972} };

    Array arr;

    // Defaut initialization of arbitrary objects   
    int i{};                  // i becomes 0
    std::string s{};          // s becomes ""
    std::vector<float> v{};   // v becomes an empty vector
    double d{};               // d becomes 0.0

    // Direct initialization of an arbitrary object with public members
    MyClass myClass{2011, 3.14};      
    MyClass myClass1= {2011, 3.14};    

    // Initialization of an arbitrary object using the constructor
    MyClass2 myClass2{2011, 3.14};     
    MyClass2 myClass3= {2011, 3.14};   

}
