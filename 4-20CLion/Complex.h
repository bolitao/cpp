//
// Created by Boli Tao on 2019/4/15.
//

#ifndef INC_4_20CLION_COMPLEX_H
#define INC_4_20CLION_COMPLEX_H


class Complex {
public:
    Complex(double real);

    Complex(double real, double imaginary);


    double getReal() const;

    void setReal(double real);

    double getImaginary() const;

    void setImaginary(double imaginary);

    void add(Complex complex);

    void minus(Complex complex);

    void show();

private:
    double real;
    double imaginary;
};


#endif //INC_4_20CLION_COMPLEX_H
