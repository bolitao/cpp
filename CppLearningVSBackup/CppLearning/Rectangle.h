//
// Created by Boli Tao on 2019/3/27.
//

#ifndef CPPLEARNINGCLION_RECTANGLE_H
#define CPPLEARNINGCLION_RECTANGLE_H


#include "Shape.h"
#include "PaintCost.h"

class Rectangle : public Shape, public PaintCost {
public:
    int getArea() {
        return (width * height);
    }
};


#endif //CPPLEARNINGCLION_RECTANGLE_H
