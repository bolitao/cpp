#pragma once
#include "Shape.h"
class Rect : public Shape {
public:
  Rect(double width, double height);
  ~Rect();
  virtual double calcArea();

protected:
  double width;
  double height;
};
