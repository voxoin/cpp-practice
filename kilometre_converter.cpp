// This program will convert miles into kilometres

#include <iostream>

int main() {
  // declare and define the conversion factor
  const double conversion_factor = 1.609344;

  // declare the distance variables  
  double miles;
  double kilometres;

  // get the number of miles from the user
  std::cout << "Please enter the number of miles: ";
  std::cin >> miles;

  // calculate the number of kilometres
  kilometres =  miles * conversion_factor;

  // display the results
  std::cout << miles << " miles is " << kilometres << " kilmetres.\n";

}
