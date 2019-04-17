//
// Created by Boli Tao on 2019/4/15.
//

#include <iostream>
#include "Complex.h"

double Complex::getReal() const {
    return real;
}

void Complex::setReal(double real) {
    Complex::real = real;
}

double Complex::getImaginary() const {
    return imaginary;
}

void Complex::setImaginary(double imaginary) {
    Complex::imaginary = imaginary;
}

void Complex::add(Complex complex) {
    Complex::real += complex.real;
    Complex::imaginary += complex.imaginary;
}

void Complex::minus(Complex complex) {
    Complex::real -= complex.real;
    Complex::imaginary -= complex.imaginary;
}

Complex::Complex(double real) {
    Complex::real = real;
}

Complex::Complex(double real, double imaginary) {
    Complex::real = real;
    Complex::imaginary = imaginary;
}

void Complex::show() {
    std::cout << Complex::real << "+" << Complex::imaginary << "i";
}

