#include <iostream>

class Account {
 public:
    Account() = default;
    Account(double b): balance(b) {}
    friend bool operator < (Account const& fir, Account const& sec) { 
        return fir.getBalance() < sec.getBalance();
    }
    double getBalance() const {
      return balance;
    }
 private:
    double balance{0.0};
};

template<typename T>
bool isSmaller(T fir, T sec) {
    return fir < sec;
}

int main() {

    std::cout << std::boolalpha << '\n';
    
    double firDou{};
    double secDou{2014.0};

    std::cout << "isSmaller(firDou, secDou): " 
              << isSmaller(firDou, secDou) << '\n';

    Account firAcc{};
    Account secAcc{2014.0};

    std::cout << "isSmaller(firAcc, secAcc): " 
              << isSmaller(firAcc, secAcc) << '\n';
    
    std::cout << '\n';

}
