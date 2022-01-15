#include <iostream>
#include <array>
#include <vector>
 
int main() {
  
  std::cout << '\n';
  
  std::cout << "sizeof(int)= " << sizeof(int) << '\n';
  
  std::cout << '\n';
  
  int cArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  std::array<int, 10> cppArr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  std::vector<int> cppVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  std::cout << "sizeof(cArr)= " << sizeof(cArr) << '\n';            
  
  std::cout << "sizeof(cppArr)= " << sizeof(cppArr) << '\n';       
  
                                                                    
  
  std::cout << "sizeof(cppVec) = "   << sizeof(cppVec) + sizeof(int) * cppVec.capacity() << '\n';
  std::cout << "               = sizeof(cppVec): " << sizeof(cppVec) << '\n';
  std::cout << "               + sizeof(int)* cppVec.capacity(): "   << sizeof(int)* cppVec.capacity() << '\n';

  std::cout << '\n';
  
}
