#include <functional>
#include <iostream>
#include <string>

auto makeLambda() {
  const std::string val = "on stack created";
  return [&val]{return val;};
}

int main() {

  auto bad = makeLambda();
  std::cout << bad();

}
