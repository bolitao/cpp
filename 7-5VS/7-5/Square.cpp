#include "Square.h"


Square::Square() {
}

Square::Square(double length) : length(length) {
}


Square::~Square() {
}

double Square::getArea() {
	return length * length;
}
