#include <algorithm> 
#include <iostream>
#include <utility>

template <typename T>                                                
void swap(T& a, T& b) noexcept {
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

class BigArray {

public:
    explicit BigArray(std::size_t sz): size(sz), data(new int[size]) {}

    BigArray(const BigArray& other): size(other.size), data(new int[other.size]) {
        std::cout << "Copy constructor" << '\n';
        std::copy(other.data, other.data + size, data);
    }
    
    BigArray& operator = (const BigArray& other) {                      
        std::cout << "Copy assignment" << '\n';
        if (this != &other){
            delete [] data;
            data = nullptr;
            size = other.size;
            data = new int[size];
            std::copy(other.data, other.data + size, data);
        }
        return *this;
    }
    
    ~BigArray() {
        delete[] data;
    }
private:
    std::size_t size;
    int* data;
};

int main(){

    std::cout << '\n';

    BigArray bigArr1(2011);
    BigArray bigArr2(2017);
    swap(bigArr1, bigArr2);                                           

    std::cout << '\n';

}

