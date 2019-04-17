#include <iostream>
#include "Complex.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    Complex *complex = new Complex(3);
//    Complex *complex1 = new Complex(3, 4);
//    complex->add(*complex1);
//    complex->show();
    Complex c1(3, 5);
    Complex c2 = 4.5;
    c1.add(c2);
    c1.show();
    return 0;
}