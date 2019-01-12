/*
 * Complex.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: prabj
 */

#include "Complex.h"
#include <fstream>
#include <iostream>

namespace std {

//Default constructor definiton
template<class elemType>
Complex<elemType>::Complex() {
   real = 0;
   imaginary = 0;
}
//Parameter constructor definiton
template <class elemType>
Complex<elemType>::Complex(elemType r, elemType i)
{
	real=r;
	imaginary=i;
}

//Overload >>
template <class elemType>
istream& operator >>(istream& in, Complex<elemType>& cmplx)
{
	cout << "What is the your real number?" << endl;
	in >> cmplx.real;
	cout << "What is the your imaginary number?" << endl;
	in >> cmplx.imaginary;
	return in;
}

//Overload <<

template <class elemType>
ostream& operator <<(ostream& out,const Complex<elemType>& cmplx)
{
	out << cmplx.real;
	out<< " + " ;
	out<<cmplx.imaginary << "i";
	return out;
}

//Overload + operator
template<class elemType>
Complex<elemType> Complex<elemType>::operator+(const Complex<elemType>& c) {
   Complex cmplx;
   cmplx.real = this->real + c.real;
   cmplx.imaginary = this->imaginary + c.imaginary;
   return cmplx;
}
//Overload - operator
template<class elemType>
Complex< elemType> Complex<elemType>::operator-(const Complex<elemType>& c) {
   Complex cmplx;
   cmplx.real = this->real - c.real;
   cmplx.imaginary = this->imaginary - c.imaginary;
   return cmplx;
}
//Overload * operator
template<class elemType>
Complex< elemType> Complex<elemType>::operator*(const Complex<elemType>& c) {
   Complex cmplx;
   cmplx.real = (this->real*c.real) - (this->imaginary*c.imaginary);
   cmplx.imaginary = (this->real*c.imaginary) + (this->imaginary*c.real);
   return cmplx;
}


template<class elemType>
elemType Complex<elemType>::getImaginary() {
   return imaginary;
}

template<class elemType>
void Complex<elemType>::setReal(elemType real) {
   this->real = real;
}
template <class elemType>
void Complex<elemType>::setImaginary(elemType imag) {
   imaginary = imag;
}

//void Complex::setOp(char op) {
//   this->op = op;
//}
//template<class elemType>
//
//Complex<elemType>::~Complex() {
//	// TODO Auto-generated destructor stub
//}

} /* namespace std */
