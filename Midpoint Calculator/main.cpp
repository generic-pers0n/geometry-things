#include <iostream>
#include "main.hpp"
using namespace std;

int main()
{
  coor_pt xcoor1, ycoor1; // Coordinate point 1
  coor_pt xcoor2, ycoor2; // Coordinate point 2

  std::cout << "Enter coordinate point 1: ";
  std::cin >> xcoor1 >> ycoor1;

  std::cout << "Enter coordinate point 2: ";
  std::cin >> xcoor2 >> ycoor2;

  midpoint(xcoor1, ycoor1, xcoor2, ycoor2);

  std::string response;
  std::cout << "Would you like to enter another coordinate point?[y/n] ";
  std::cin >> response;

  if (response == "y" || response == "Y")
  {
    std::cout << "\n";
    main(); // loop back to main()
  }

  // Else, return 0;
  return 0;
}
