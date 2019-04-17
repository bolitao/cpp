#include "Circle.h"


Circle::Circle() {
}

Circle::Circle(double r) : r(r) {
}


Circle::~Circle() {
}

double Circle::getArea() {
	return 3.14 * r * r;
}
