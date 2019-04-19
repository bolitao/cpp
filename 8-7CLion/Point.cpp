//
// Created by Boli Tao on 2019/4/19.
//

#include "Point.h"

Point &Point::operator++() {
    this->x++;
    this->y++;
//    Point::x++;
//    Point::y++;
    return *this;
}

Point Point::operator++(int) {
//    this->x++;
//    this->y++;
//    return *this;
    Point tmp = *this;
    ++*this;
    return tmp;
}

Point &Point::operator--() {
    this->x--;
    this->y--;
    return *this;
}

Point Point::operator--(int) {
//    this->x--;
//    this->y--;
//    return *this;
    Point tmp = *this;
    --*this;
    return tmp;
}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

Point::Point(int x, int y) : x(x), y(y) {
}

Point::Point() {}

std::ostream &operator<<(std::ostream &os, const Point &point) {
    os << "x: " << point.x << " y: " << point.y;
    return os;
}
