#include <iostream>
#include "Counter.h"

int main() {
    Counter counter1(3);
    Counter counter2(5);
    counter1 = counter1 + counter2;
//    counter1 += counter2;
//    Counter counter3 = counter1 + counter2;
    std::cout << counter1.getVal() << std::endl;
    return 0;
}