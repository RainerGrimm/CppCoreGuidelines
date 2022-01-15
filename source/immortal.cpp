class Immortal {
public:
    ~Immortal() = delete;   // do not allow destruction
};

int main() {
    Immortal im;        
    Immortal* pIm = new Immortal;
    
    delete pIm;           
}
