#include "DerivedClass.h"

int main() {
    DerivedClass derivedClass;
    BaseClass *base = &derivedClass;
    DerivedClass *derived = &derivedClass;
    base->fn1();
    base->fn2();
    derived->fn1();
    derived->fn2();
    return 0;
}