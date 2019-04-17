//
// Created by bolitao on 19-4-16.
//

#ifndef TMPCLION_LINE_H
#define TMPCLION_LINE_H


#include "Coordinate.h"

class Line {
public:
    Line(int x1, int y1, int x2, int y2);

    ~Line();

    const Coordinate &getCoorA() const;

    void setCoorA(const Coordinate &coorA);

    const Coordinate &getCoorB() const;

    void setCoorB(const Coordinate &coorB);

    void printInfo();

private:
    Coordinate coorA;
    Coordinate coorB;
};


#endif //TMPCLION_LINE_H
