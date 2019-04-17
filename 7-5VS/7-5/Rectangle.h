#pragma once
#include "Shape.h"

class Rectangle :Shape
{
public:
	Rectangle();
	Rectangle(double width, double height);
	~Rectangle();
	double getArea();
private:
	double width;
	double height;
};

