/*
 * Complex.h
 *
 *  Created on: Sep 16, 2018
 *      Author: prabj
 */

#ifndef Complex_H_
#define Complex_H_
#include <iostream>
namespace std{
class Complex {
private:
   int real;
   int imaginary;
   char op;
//Member functions
public:
   //Default constructor
   Complex();
   //Parameterised constructor
   Complex(int real, int imag,char op);
   //Mutators
   void setReal(int real);
   void setImaginary(int imag);
   void setOp(char op);
   //Accessors
   int getReal();
   int getImaginary();
   char getOp();
   //Overload << and >>
   friend ostream &operator << (ostream &output, Complex &cmplx);
   friend istream &operator >> (istream &input, Complex &cmplx);
   //Overload + , - and *
   Complex operator+(const Complex& c);
   Complex operator-(const Complex& c);
   Complex operator*(const Complex& c);
	virtual ~Complex();
};

} /* namespace std */

#endif /* Complex_H_ */
