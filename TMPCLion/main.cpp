#include <iostream>
#include "class/Coordinate.h"
#include "class/Line.h"

typedef struct {
    int x;
    int y;
} Coord;

void fun(int &a, int &b);

int main() {
//    int a = 10;
//    int &b = a;
//    b = 20;
//    std::cout << a << std::endl;
//    a = 30;
//    std::cout << b << std::endl;

//    Coord c;
//    Coord &c1 = c;
//    c1.x = 10;
//    c1.y = 20;
//    std::cout << c.x << ", " << c.y << std::endl;
//
//    int a = 3;
//    int *p = &a;
//    // 指针类型的引用 TODO: 理解
//    int *&q = p;
//    *q = 5;
//    std::cout << a << std::endl;
//
//    int x = 10;
//    int y = 20;
//    std::cout << x << ", " << y << std::endl;
//    fun(x, y);
//    std::cout << x << ", " << y << std::endl;
//
//    int *arr = new int[10];
//    delete[]arr;

//    Coordinate coord[3];
//    coord[1].x = 10;
//    Coordinate *ptr = new Coordinate[3];
//    ptr[0].x = 20;
//    ptr->y = 20;
//    delete[]ptr;
//    ptr = nullptr;

    // TODO: 理解这个例子的指针变化
//    Coordinate coor[3];
//    coor[0].x = 3;
//    coor[0].y = 5;
//    Coordinate *p = new Coordinate[3];
//    p->x = 7;
//    p[0].y = 9;
//    p++;
//    p->x = 11;
//    p[0].y = 13;
//    p[1].x = 15;
//    p++;
//    p->y = 17;
//    for (int i = 0; i < 3; ++i) {
//        std::cout << "coor " << coor[i].x << std::endl;
//        std::cout << "coor " << coor[i].y << std::endl;
//    }
//    for (int j = 0; j < 3; ++j) {
//        std::cout << "p " << p->x << std::endl;
//        std::cout << "p " << p->y << std::endl;
//        p--;
//    }
//    p++;
//    delete[]p;
//    p = nullptr;

    Line *p = new Line(1, 2, 3, 4);
    p->printInfo();
    delete p;
    p = nullptr;

    return 0;
}

void fun(int &a, int &b) {
    int c = 0;
    c = a;
    a = b;
    b = c;
}