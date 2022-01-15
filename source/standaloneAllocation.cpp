#include <iostream>
#include <memory>

struct MyInt{
  explicit MyInt(int myInt):i(myInt) {}
  ~MyInt() {
    std::cout << "Goodbye from " << i << '\n';
  }
  int i;
};

int main() {
    
    std::cout << '\n';

    MyInt* myInt = new MyInt(2011);

    std::unique_ptr<MyInt> uniq1 = std::unique_ptr<MyInt>(myInt);
    std::unique_ptr<MyInt> uniq2 = std::unique_ptr<MyInt>(myInt);
    
    std::cout << '\n';

}
