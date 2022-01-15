#include <iostream>
#include <memory>

using std::cout;

void asSmartPointerGood(std::shared_ptr<int>& shr) {
    cout << "asSmartPointerGood \n";
    cout << "    shr.use_count(): " << shr.use_count() << '\n';  
    shr.reset(new int(2011));                                     
    cout << "    shr.use_count(): " << shr.use_count() << '\n';     
    cout << "asSmartPointerGood \n";
}

void asSmartPointerBad(std::shared_ptr<int>& shr) {
    cout << "asSmartPointerBad(sharedPtr2) \n";
    *shr += 19;
}

int main() {
  
    cout << '\n';
  
    auto sharedPtr1 = std::make_shared<int>(1998);
    auto sharedPtr2 = sharedPtr1;
    cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << '\n'; 
  
    cout << '\n';
  
    asSmartPointerGood(sharedPtr1);                                   

    cout << '\n';
  
    cout << "*sharedPtr1: " << *sharedPtr1 << '\n';
    cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << '\n';
  
    cout << '\n';
  
    cout << "*sharedPtr2: " << *sharedPtr2 << '\n';
    cout << "sharedPtr2.use_count(): " << sharedPtr2.use_count() << '\n';
  
    cout << '\n';
  
    asSmartPointerBad(sharedPtr2); 
    cout << "*sharedPtr2: " << *sharedPtr2 << '\n';
  
    cout << '\n';
  
}
