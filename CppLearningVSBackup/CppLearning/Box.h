//
// Created by Boli Tao on 2019/3/28.
//

#ifndef CPPLEARNINGCLION_BOX_H
#define CPPLEARNINGCLION_BOX_H


class Box {
public:
    double getVolume(void) {
        return length * breadth * height;
    }

    void setLength(double len) {
        length = len;
    }

    void setBreadth(double bre) {
        breadth = bre;
    }

    void setHeight(double hei) {
        height = hei;
    }

    Box operator+(Box b) {
        Box box;
        box.breadth = this->breadth + b.breadth;
        box.length = this->length + b.length;
        box.height = this->height + b.height;
        return box;
    }

private:
    double length;
    double height;
    double breadth;
};


#endif //CPPLEARNINGCLION_BOX_H
