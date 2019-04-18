//
// Created by bolitao on 19-4-17.
//

#ifndef INC_4_19CLION_CPU_H
#define INC_4_19CLION_CPU_H

enum Core {
    Single, Dual, Quad
};
enum Size {
    X32, X64
};
enum HyperThread {
    Support, NotSupport
};

class CPU {
public:
    double frenquency;
    Core core;
    Size size;
    HyperThread hyperThread;
};


#endif //INC_4_19CLION_CPU_H
