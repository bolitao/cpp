#pragma once
#include "Rectangle.h"

class Square : Rectangle {
public:
	Square();
	Square(double length);
	~Square();
	double getArea();
private:
	double length;
};
