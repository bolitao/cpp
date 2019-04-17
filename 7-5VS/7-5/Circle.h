#pragma once
#include "Shape.h"

class Circle : Shape {
public:
	Circle();
	Circle(double r);
	~Circle();
	double getArea();
private:
	double r;
};
