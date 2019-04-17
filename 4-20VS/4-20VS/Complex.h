#pragma once
class Complex {
 public:
  Complex(double imaginary, double real);
  ~Complex();
  void add(Complex complex);

  void setImaginary(double imaginary) { this->imaginary = imaginary; }

  void setReal(double real) { this->real = real; }

 private:
  double imaginary;
  double real;
};
