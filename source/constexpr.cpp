constexpr auto gcd(int a, int b) {
    while (b != 0){
        auto t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
  
    constexpr int i = gcd(11, 121);
  
    int a = 11;
    int b = 121;
    int j = gcd(a, b);
 
}
