//
// Created by bolitao on 19-4-17.
//

#include "Circle.h"

Circle::Circle(double r) {
    Circle::radius = r;
}

Circle::~Circle() {
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}
