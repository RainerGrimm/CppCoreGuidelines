#include <iomanip>
#include <iostream>
#include <ostream>

namespace Distance {
  class MyDistance {
    public:
      MyDistance(double d):m(d) {}

      friend MyDistance operator + (const MyDistance& a, const MyDistance& b) {
        return MyDistance(a.m + b.m);
      }
      friend std::ostream& operator << (std::ostream &out, const MyDistance& myDist) {
        out << myDist.m << " m";
        return out;
      }
    private:
      double m;

  };

  namespace Unit{
    MyDistance operator "" _km(long double d) {
      return MyDistance(1000*d);
    }
    MyDistance operator "" _m(long double m) {
      return MyDistance(m);
    }
    MyDistance operator "" _dm(long double d) {
      return MyDistance(d/10);
    }
    MyDistance operator "" _cm(long double c) {
      return MyDistance(c/100);
    }
  }
}

using namespace Distance::Unit;

int main() {

  std:: cout << std::setprecision(7) << "\n";

  std::cout << "1.0_km + 2.0_dm + 3.0_cm: " << 1.0_km + 2.0_dm + 3.0_cm << "\n";
  std::cout << "4.2_km + 5.5_dm + 10.0_m + 0.3_cm: " << 4.2_km + 5.5 + 10.0_m + 0.3_cm << "\n";
  
  std::cout << "\n";

}
