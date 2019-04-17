//
// Created by bolitao on 19-4-17.
//

#include "Rectangle.h"

double Rectangle::getArea() {
    return Rectangle::length * Rectangle::width;
}

Rectangle::Rectangle(double width, double length) {
    this->width = width;
    this->length = length;
}
