#include <iostream>
#include "Circle.h"

int main() {
    Circle circle(3.0);
    std::cout << "圆的面积：" << circle.getArea() << std::endl;
//    system("pause");
    return 0;
}