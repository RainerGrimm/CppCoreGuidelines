struct Base { 
  int base{1998};
};
 
struct Derived : Base { 
  int derived{2011};
};

void needB(Base b) {
    // ...
};
 
int main() {

  Derived d;
  Base b = d;            
  Base b2(d);             
  needB(d);              

}
