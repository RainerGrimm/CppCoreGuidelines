// namespaceDirectiveRemoved.cpp

#include <iostream>
#include <chrono>

using namespace std::literals::chrono_literals;

int main() {

  std::cout << std::endl;

  auto schoolHour = 45min;

  auto shortBreak = 300s;
  auto longBreak = 0.25h;

  auto schoolWay = 15min;
  auto homework = 2h;

  auto schoolDayInSec = 2 * schoolWay + 6 * schoolHour + 
                            4 * shortBreak + longBreak + homework;

  std::cout << "School day in seconds: " << schoolDayInSec.count() << std::endl;

  std::chrono::duration<double, std::ratio<3600>> schoolDayInHours = schoolDayInSec;
  std::chrono::duration<double, std::ratio<60>> schoolDayInMin = schoolDayInSec;
  std::chrono::duration<double, std::ratio<1, 1000>> schoolDayInMilli = schoolDayInSec;

  std::cout << "School day in hours: " << schoolDayInHours.count() << std::endl;
  std::cout << "School day in minutes: " << schoolDayInMin.count() << std::endl;
  std::cout << "School day in milliseconds: " 
       << schoolDayInMilli.count() << std::endl;

  std::cout << std::endl;

}
