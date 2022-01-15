#include <functional>
#include <iostream>
#include <string>

class Account {
 public:
    Account() = default;
    Account(double b): balance(b){}
    double getBalance() const {
        return balance;
    }
 private:
    double balance{0.0};
};

template <typename T, typename Pred = std::less<T> >    
bool isSmaller(T fir, T sec, Pred pred = Pred() ) {     
    return pred(fir, sec);                             
}

int main() {

    std::cout << std::boolalpha << '\n';
    
    double firDou{};
    double secDou{2014.0};

    std::cout << "isSmaller(firDou, secDou): " 
              << isSmaller(firDou, secDou) << '\n';

    Account firAcc{};
    Account secAcc{2014.0};
    
    auto res = isSmaller(firAcc, secAcc,                             
                         [](const Account& fir, const Account& sec){
                             return fir.getBalance() < sec.getBalance(); 
                         }
    );
    
    std::cout << "isSmaller(firAcc, secAcc): " <<  res << '\n';
    
    std::cout << '\n';
    
    std::string firStr = "AAA";
    std::string secStr = "BB";
     
    std::cout << "isSmaller(firStr, secStr): " 
              <<  isSmaller(firStr, secStr) << '\n';
    
     auto res2 = isSmaller(firStr, secStr,                            
                           [](const std::string& fir, const std::string& sec){
                               return fir.length() < sec.length(); 
                           }
    );
     
    std::cout << "isSmaller(firStr, secStr): " <<  res2 << '\n';
    
    std::cout << '\n';

}
