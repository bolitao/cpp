//
// Created by Boli Tao on 2019/4/17.
//

#ifndef INC_8_4CLION_COUNTER_H
#define INC_8_4CLION_COUNTER_H

typedef unsigned short USHORT;

class Counter {
public:
//    Counter();

    Counter(int val);

    int getVal() const;

    void setVal(int val);

    Counter operator+(const Counter &);

private:
    int val;
};


#endif //INC_8_4CLION_COUNTER_H
