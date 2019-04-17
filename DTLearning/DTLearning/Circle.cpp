#include "Circle.h"
#include <iostream>

Circle::Circle(double r) {
  std::cout << "Circle()" << std::endl;
  Circle::r = r;
}

Circle::~Circle() { std::cout << "~Circle()" << std::endl; }

double Circle::calcArea() {
  std::cout << "Circle -> calcArea()" << std::endl;
  return 3.14 * r * r;
}
