//
// Created by bolitao on 19-4-16.
//

#include <iostream>
#include "Line.h"

const Coordinate &Line::getCoorA() const {
    return coorA;
}

void Line::setCoorA(const Coordinate &coorA) {
    Line::coorA = coorA;
}

const Coordinate &Line::getCoorB() const {
    return coorB;
}

void Line::setCoorB(const Coordinate &coorB) {
    Line::coorB = coorB;
}

Line::~Line() {
    std::cout << "~Line()" << std::endl;
}

void Line::printInfo() {
    std::cout << "(" << Line::coorA.getX() << ", " << Line::coorA.getY() << ")" << std::endl;
    std::cout << "(" << Line::coorB.getX() << ", " << Line::coorB.getY() << ")" << std::endl;
}

Line::Line(int x1, int y1, int x2, int y2) : coorA(x1, y1), coorB(x2, y2) {
    std::cout << "Line()" << std::endl;
}
