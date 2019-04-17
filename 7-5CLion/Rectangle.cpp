//
// Created by Boli Tao on 2019/4/17.
//

#include "Rectangle.h"

int Rectangle::getArea() {
    return width * length;
}

Rectangle::Rectangle(int width, int length) : width(width), length(length) {}
