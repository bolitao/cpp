//
// Created by bolitao on 19-4-16.
//

#include <iostream>
#include "Coordinate.h"

Coordinate::~Coordinate() {
    std::cout << "~Coordinate() " << Coordinate::x << ", " << Coordinate::y << std::endl;
}

int Coordinate::getX() const {
    return x;
}

void Coordinate::setX(int x) {
    Coordinate::x = x;
}

int Coordinate::getY() const {
    return y;
}

void Coordinate::setY(int y) {
    Coordinate::y = y;
}

Coordinate::Coordinate(int x, int y) {
    Coordinate::x = x;
    Coordinate::y = y;
    std::cout << "Coordinate() " << Coordinate::x << ", " << Coordinate::y << std::endl;
}
