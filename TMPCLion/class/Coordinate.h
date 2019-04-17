//
// Created by bolitao on 19-4-16.
//

#ifndef TMPCLION_COORDINATE_H
#define TMPCLION_COORDINATE_H


class Coordinate {
public:
    Coordinate(int x, int y);

    ~Coordinate();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

private:
    int x;
    int y;
};


#endif //TMPCLION_COORDINATE_H
