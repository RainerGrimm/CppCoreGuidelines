#include <iostream>
#include <memory>

struct Son;
struct Daughter;

struct Mother {
    ~Mother() {
        std::cout << "Mother gone" << '\n';
    }
    void setSon(const std::shared_ptr<Son> s) {
        mySon = s;
    }
    void setDaughter(const std::shared_ptr<Daughter> d) {
        myDaughter = d;
    }
    std::shared_ptr<Son> mySon;
    std::weak_ptr<Daughter> myDaughter;
};

struct Son {
    explicit Son(std::shared_ptr<Mother> m): myMother(m) {}
    ~Son() {
        std::cout << "Son gone" << '\n';
    }
    std::shared_ptr<Mother> myMother;
};

struct Daughter {
    explicit Daughter(std::shared_ptr<Mother> m): myMother(m) {}
    ~Daughter() {
        std::cout << "Daughter gone" << '\n';
    }
    std::shared_ptr<Mother> myMother;
};

int main() {
    
    std::shared_ptr<Mother> m = std::make_shared<Mother>(); 
    std::shared_ptr<Son> s = std::make_shared<Son>(m);
    std::shared_ptr<Daughter> d = std::make_shared<Daughter>(m);
    m->setSon(s);
    m->setDaughter(d);
    
}
