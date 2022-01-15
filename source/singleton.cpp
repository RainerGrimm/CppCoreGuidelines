#include <iostream>

class MySingleton {

 public:
    MySingleton(const MySingleton&)= delete;
    MySingleton& operator = (const MySingleton&)= delete;

    static MySingleton* getInstance() {
      if ( !instance ){
        instance= new MySingleton();
      }
      return instance;
    }
    
 private:
    static MySingleton* instance;
    MySingleton()= default;
    ~MySingleton()= default;
};

MySingleton* MySingleton::instance= nullptr;


int main() {

  std::cout << MySingleton::getInstance() << "\n";
  std::cout << MySingleton::getInstance() << "\n";

}
