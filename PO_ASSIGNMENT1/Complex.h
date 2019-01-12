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

template <class elemType>
class Complex {
private:
   elemType real;
   elemType imaginary;
//Member functions
public:
   //Default constructor
   Complex();
   //Parameterised constructor
   Complex(elemType real, elemType imag);
   //Mutators
   void setReal(elemType real);
   void setImaginary(elemType imag);
   //Accessors
   elemType getReal();
   elemType getImaginary();
   char getOp();
   //Overload << and >>
   template<class U>
   friend ostream& operator <<(ostream& out, const Complex<U>& c1);
   template<class U>
   friend istream &operator >> (istream &input, Complex<U> &cmplx);
   //Overload + , - and *
   Complex operator+(const Complex<elemType>& c);
   Complex operator-(const Complex<elemType>& c);
   Complex operator*(const Complex<elemType>& c);

	virtual ~Complex();
};

}

#endif /* Complex_H_ */
