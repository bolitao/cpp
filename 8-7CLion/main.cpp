#include <iostream>
#include "Point.h"

int main() {
    Point a(2, 2);
    Point b(4, 4);
    std::cout << a-- << std::endl;
    std::cout << --a << std::endl;
    std::cout << ++b << std::endl;
    std::cout << b++ << std::endl;
    return 0;
}