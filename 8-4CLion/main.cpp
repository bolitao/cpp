#include <iostream>
#include "Counter.h"

int main() {
    Counter counter1(3);
    Counter counter2(5);
    Counter counter3 = counter1 + counter2;
    std::cout << counter3.getVal() << std::endl;
    return 0;
}