//
// Created by Boli Tao on 2019/4/18.
//

#ifndef INC_5_13CLION_X_H
#define INC_5_13CLION_X_H


#include "Y.h"

class X {
public:
    X() {
        i = 0;
    }

    friend void h(X *);

    friend void Y::g(X *);

    friend class Z;

private:
    int i;
};


#endif //INC_5_13CLION_X_H
