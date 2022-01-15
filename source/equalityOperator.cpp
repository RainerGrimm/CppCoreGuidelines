class MyInt {
    int num;
public:
    explicit MyInt(int n): num(n) {};
    friend bool operator==(const MyInt& lhs, const MyInt& rhs) noexcept { 
        return lhs.num == rhs.num; 
    }
    friend bool operator==(int lhs, const MyInt& rhs) noexcept { 
        return lhs == rhs.num; 
    }
    friend bool operator==(const MyInt& lhs, int rhs) noexcept { 
        return lhs.num == rhs; 
    }
};

int main() {
    MyInt(5) == 5;
    5 == MyInt(5);
}  
