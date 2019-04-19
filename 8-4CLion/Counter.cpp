//
// Created by Boli Tao on 2019/4/17.
//

#include "Counter.h"

Counter::Counter(int val) : val(val) {}

int Counter::getVal() const {
    return val;
}

void Counter::setVal(int val) {
    Counter::val = val;
}

Counter Counter::operator+(const Counter &counter) {
    return Counter(Counter::val + counter.getVal());
}
