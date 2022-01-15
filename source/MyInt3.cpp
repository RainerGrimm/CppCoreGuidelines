class MyInt3 {
public:
    explicit MyInt3(int v):val(v) {};           
    friend MyInt3 operator + (const MyInt3& fir, const MyInt3& sec) { 
        return MyInt3(fir.val + sec.val);
    }
private:
    int val;
};

int main() {

    MyInt3 myFive = MyInt3(2) + MyInt3(3);
    MyInt3 myFive2 = MyInt3(3) + MyInt3(2);
  
    MyInt3 myTen = myFive + 5;                   
    MyInt3 myTen2 = 5 + myFive;                 
  
}
  
