#include "Circle.h"
#include <math.h>

Circle::Circle(double r) {
	Circle::radius = r;
}

Circle::~Circle() {
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}
