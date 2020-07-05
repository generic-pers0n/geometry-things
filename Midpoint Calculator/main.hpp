#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <cmath>
using namespace std;

typedef long double coor_pt;

void midpoint(coor_pt xcoor1, coor_pt ycoor1, coor_pt xcoor2, coor_pt ycoor2)
{
  std::cout << "The midpoint is M(" << (xcoor1+xcoor2)/2 << ", " << (ycoor1+ycoor2)/2 << ")\n";
}

#endif // end main.hpp
