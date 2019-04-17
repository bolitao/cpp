#include <iostream>
#include "Rectangle.h"
#include "Square.h"

int main() {
    Rectangle rectangle(3, 4);
    std::cout << rectangle.getArea() << std::endl;
    Square square(5);
    std::cout << square.getArea() << std::endl;
    return 0;
}