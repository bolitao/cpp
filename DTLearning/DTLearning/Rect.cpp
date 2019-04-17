#include "Rect.h"
#include <iostream>

Rect::Rect(double width, double height) {
  std::cout << "Rect()" << std::endl;
  Rect::width = width;
  Rect::height = height;
}

Rect::~Rect() { std::cout << "~Rect()" << std::endl; }

double Rect::calcArea() {
  std::cout << "Rect -> calcArea()" << std::endl;
  return Rect::width * Rect::height;
}
