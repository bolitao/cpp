//
// Created by Boli Tao on 2019/4/17.
//

#include "Circle.h"

int Circle::getArea() {
    return 3.14 * r * r;
}

Circle::Circle(int r) : r(r) {}
