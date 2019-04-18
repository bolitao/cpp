#include <iostream>

class X;

class Y {
public:
    void g(X *);
};

class X {
private:
    int i;
public:
    int getI() const;

    X() {
        i = 0;
    }

    friend void h(X *);

    friend void Y::g(X *);

    friend class Z;
};

void h(X *x) {
    x->i += 10;
}

void Y::g(X *x) {
    x->i++;
}

class Z {
public:
    void f(X *x) {
        x->i += 5;
    }
};

int X::getI() const {
    return i;
}

int main() {
    X x;
    Y y;
    Z z;
    z.f(&x);
    y.g(&x);
    h(&x);
    std::cout << x.getI() << std::endl;
    return 0;
}