#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

int main() {
//    Rectangle rectangle(3, 4);
//    std::cout << rectangle.getArea() << std::endl;
//    Square square(5);
//    std::cout << square.getArea() << std::endl;
    Shape *shape;
    shape = new Circle(4);
    std::cout << "Circle:" << shape->getArea() << std::endl;
    delete shape;
    shape = new Rectangle(3, 4);
    std::cout << "Rectangle:" << shape->getArea() << std::endl;
    delete shape;
    shape = new Square(5);
    std::cout << "Square:" << shape->getArea() << std::endl;
    return 0;
}