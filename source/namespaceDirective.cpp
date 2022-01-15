// namespaceDirective.cpp

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;
using namespace std::literals::chrono_literals;

int main() {

  cout << '\n';

  auto schoolHour = 45min;

  auto shortBreak = 300s;
  auto longBreak = 0.25h;

  auto schoolWay = 15min;
  auto homework = 2h;

  auto schoolDayInSec = 2 * schoolWay + 6 * schoolHour + 
                            4 * shortBreak + longBreak + homework;

  cout << "School day in seconds: " << schoolDayInSec.count() << endl;

  duration<double, ratio<3600>> schoolDayInHours = schoolDayInSec;
  duration<double, ratio<60>> schoolDayInMin = schoolDayInSec;
  duration<double, ratio<1, 1000>> schoolDayInMilli = schoolDayInSec;

  cout << "School day in hours: " << schoolDayInHours.count() << endl;
  cout << "School day in minutes: " << schoolDayInMin.count() << endl;
  cout << "School day in milliseconds: " 
       << schoolDayInMilli.count() << endl;

  cout << endl;

}
