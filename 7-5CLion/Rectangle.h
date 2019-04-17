//
// Created by Boli Tao on 2019/4/17.
//

#ifndef INC_7_5CLION_RECTANGLE_H
#define INC_7_5CLION_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(int width, int length);

    int getArea();
    int width;
    int length;
};


#endif //INC_7_5CLION_RECTANGLE_H
