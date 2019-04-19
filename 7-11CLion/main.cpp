#include <iostream>
#include "DerivedClass.h"
#include "BaseClass.h"

int main() {
    DerivedClass dervied;
    DerivedClass *p = new DerivedClass();
    BaseClass *base = new BaseClass();
    dervied.fn1();
    dervied.fn2();
    base->fn1();
    base->fn2();
    p->fn1();
    p->fn2();
    return 0;
}