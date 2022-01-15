#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

bool byLessLength(const std::string& f, const std::string& s) {       
    return f.size() < s.size();
}

class ByGreaterLength {                                    
 public:
    bool operator()(const std::string& f, const std::string& s) const {
        return f.size() > s.size();
    }
};

int main() {

    std::vector<std::string> myStrVec = {"523345", "4336893456", "7234", 
                                         "564", "199", "433", "2435345"};
                                         
    std::cout << '\n';

    std::cout << "Ascending by length with a function \n";
    std::sort(myStrVec.begin(), myStrVec.end(), byLessLength);     
    for (const auto& str: myStrVec) std::cout << str << " ";  
    std::cout << "\n\n";

    std::cout << "Descending by length with a function object \n";
    std::sort(myStrVec.begin(), myStrVec.end(), ByGreaterLength());
    for (const auto& str: myStrVec) std::cout << str << " ";  
    std::cout << "\n\n";

    std::cout << "Ascending by length with a lambda \n";
    std::sort(myStrVec.begin(), myStrVec.end(),                  
              [](const std::string& f, const std::string& s){ 
		          return f.size() < s.size(); 
			  });
    for (const auto& str: myStrVec) std::cout << str << " ";  
    
    std::cout << "\n\n";

}
