#include <future>

int getUniqueId() {
  static int id = 1;
  return id++;
}

int main() {

    auto fut1 = std::async([]{ return getUniqueId(); });
    auto fut2 = std::async([]{ return getUniqueId(); }); 

    auto id = fut1.get();
    auto id2= fut2.get();

}   
