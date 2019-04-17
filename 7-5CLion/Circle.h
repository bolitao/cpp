//
// Created by Boli Tao on 2019/4/17.
//

#ifndef INC_7_5CLION_CIRCLE_H
#define INC_7_5CLION_CIRCLE_H


#include "Shape.h"

class Circle : Shape{
public:
    Circle(int r);

    int r;
    int getArea();
};


#endif //INC_7_5CLION_CIRCLE_H
