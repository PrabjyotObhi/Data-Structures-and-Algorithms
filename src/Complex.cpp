/*
 * Complex.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: prabj
 */

#include "Complex.h"

namespace std {

//Default constructor definiton
Complex::Complex() {
   real = 0;
   imaginary = 0;
   op = '+';
}
//Parameterised constructor definiton
Complex::Complex(int real, int imag,char op) {
   this->real = real;
   imaginary = imag;
   this->op = op;
}
//Overload <<
ostream& operator<<(ostream & output, Complex & cmplx)
{
   output <<cmplx.getReal()<<cmplx.op<<cmplx.getImaginary() <<"i"<< endl;
   return output;
}
//Overload >>
istream& operator>>(istream &input, Complex &cmplx) {
   input >> cmplx.real;
   input >> cmplx.imaginary;
   return input;
}
//Mutator definition
void Complex::setReal(int real) {
   this->real = real;
}
void Complex::setImaginary(int imag) {
   imaginary = imag;
}
void Complex::setOp(char op) {
   this->op = op;
}
//Accessor definiton
int Complex::getReal() {
   return real;
}
int Complex::getImaginary() {
   return imaginary;
}
char Complex::getOp() {
   return op;
}
//Overload + operator
Complex Complex::operator+(const Complex& c) {
   Complex cmplx;
   cmplx.real = this->real + c.real;
   cmplx.imaginary = this->imaginary + c.imaginary;
   return cmplx;
}
//Overload - operator
Complex Complex::operator-(const Complex& c) {
   Complex cmplx;
   cmplx.real = this->real - c.real;
   cmplx.imaginary = this->imaginary - c.imaginary;
   return cmplx;
}
//Overload * operator
Complex Complex::operator*(const Complex& c) {
   Complex cmplx;
   cmplx.real = (this->real*c.real) - (this->imaginary*c.imaginary);
   cmplx.imaginary = (this->real*c.imaginary) + (this->imaginary*c.real);
   return cmplx;
}

Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
