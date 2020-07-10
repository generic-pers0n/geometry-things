#include <iostream>
#include "dformula.hpp"

int main()
{
  std::cout << "=============================\n";
  std::cout << "Distance Formula Calculator\n";
  std::cout << "=============================\n\n";

  // Input variables
  ldbl coor_pt1[2]; // Coordinate point 1
  ldbl coor_pt2[2]; // Coordinate point 2

  std::cout << "Enter coordinate point 1: ";
  std::cin >> coor_pt1[0] >> coor_pt1[1];

  std::cout << "Enter coordinate point 2: ";
  std::cin >> coor_pt2[0] >> coor_pt2[1];

  ldbl dist = distance(coor_pt1, coor_pt2);

  std::cout << "The distance is " << dist << std::endl;
  return 0;
}
