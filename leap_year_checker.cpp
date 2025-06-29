#include <iostream>

int main() {
  int year;
  bool leap_year;

  // get the year as input
  std::cout << "Please enter the year you would like to check: ";
  std::cin >> year;
  std::cout << "\n";

  // check if the year is a leap year
  if (year % 400 == 0) {
    leap_year = true;
  }
  else if (year % 4 == 0 && !(year % 100 == 0)) {
    leap_year = true;
  }
  else {
    leap_year = false;
  }

  // display the result to the user
  if (leap_year == true) {
    std::cout << year << " is a leap year.\n";
  }
  else {
    std::cout << year << " is not a leap year.\n";
  }
  
}
