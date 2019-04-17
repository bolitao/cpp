//
// Created by Boli Tao on 2019/3/27.
//

#ifndef CPPLEARNINGCLION_SHAPE_H
#define CPPLEARNINGCLION_SHAPE_H


class Shape {
public:

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};


#endif //CPPLEARNINGCLION_SHAPE_H
