#include <cstddef>
#include <iostream>

class ArrayBase {
protected:
    ArrayBase(std::size_t n): size(n) {} 
    std::size_t getSize() const {
        return size;
    };
private:
    std::size_t size;
};

template<typename T, std::size_t N>
class Array: private ArrayBase {
public:    
    Array(): ArrayBase(N){}
    std::size_t getSize() const {
        return  ArrayBase::getSize();
    }
private:
    T data[N]; 
};   


int main() {

    Array<int, 100> arr1;
    std::cout << "arr1.getSize(): " << arr1.getSize() << '\n';

    Array<double, 200> arr2;
    std::cout << "arr2.getSize(): " << arr2.getSize() << '\n';
    
}
