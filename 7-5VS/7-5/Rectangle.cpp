#include "Rectangle.h"


Rectangle::Rectangle() {
}

Rectangle::Rectangle(double width, double height): width(width), height(height) {
}


Rectangle::~Rectangle() {
}

double Rectangle::getArea() {
	return width * height;
}
