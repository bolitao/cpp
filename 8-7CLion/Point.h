//
// Created by Boli Tao on 2019/4/19.
//

#ifndef INC_8_7CLION_POINT_H
#define INC_8_7CLION_POINT_H


#include <ostream>

class Point {
private:
    int x;
    int y;
public:
    Point &operator++();

    Point operator++(int);

    Point &operator--();

    Point operator--(int);

    Point();

    Point(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    friend std::ostream &operator<<(std::ostream &os, const Point &point);
};


#endif //INC_8_7CLION_POINT_H
