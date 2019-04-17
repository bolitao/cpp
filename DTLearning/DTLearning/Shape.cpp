#include <iostream>
#include "Shape.h"


Shape::Shape()
{
	std::cout << "Shape()" << std::endl;
}


Shape::~Shape()
{
	std::cout << "~Shape" << std::endl;
}

// double Shape::calc_area()
// {
// 	std::cout << "Shape -> calcArea()" << std::endl;
// 	return 0;
// }

double Shape::calcArea()
{
	std::cout << "Shape -> calcArea()" << std::endl;
	return 0;
}
