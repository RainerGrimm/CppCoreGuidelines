// badCast.cpp

struct Base {
    virtual void f() {}
};
struct Derived : Base {};

int main() {
    
    Base a;

    Derived* b1 = dynamic_cast<Derived*>(&a);  // nullptr
    Derived& b2 = dynamic_cast<Derived&>(a);   // std::bad_cast 
   
}
