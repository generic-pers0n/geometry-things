#ifndef DFORMULA_HPP
#define DFORMULA_HPP

#include <iostream>
#include <cmath>

typedef long double ldbl;

inline ldbl distance(const ldbl* pt1, const ldbl* pt2)
{
  return sqrt(pow(2.0, pt1[0] - pt2[0]) + pow(2.0, pt1[1] - pt2[1]) );
}

#endif // end dformula.hpp
