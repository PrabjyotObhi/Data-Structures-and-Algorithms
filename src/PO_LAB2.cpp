//============================================================================
// Name        : PO_LAB2.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Header files

#include <iostream>
#include <string>
#include <fstream>
#include "Complex.h"
using namespace std;
//Test method
int main(){
	//Input file object
	   ifstream in;
	   //Output file object
	   ofstream out;
	   //Stringd to read file
	   string c4="",c3="",operation="";
	   //for identifying symbol
	   char op;
	   //variables
	   int real, imag;
	   //I/p O/p file
	   in.open("C:/Users/prabj/eclipse-workspace/PO_LAB2/src/complexInput.txt");
	   out.open("C:/Users/prabj/eclipse-workspace/PO_LAB2/src/complexOutput.txt");
	   //If not open
	   if (!in) {
	       cout << "File not found!!" << endl;
	       exit(0);
	   }
	   //Otherwise
	   if(in) {
	       while (!in.eof()) {
	           //Read file data
	           in >> c4 >> operation >> c3;
	           //Dummy check
	           if (c4 != ""&& c3 != ""&& operation != "") {
	               //First Complex number
	               Complex c;
	               //Check the real and imaginary datas sign before setting values
	               if (isdigit(c4[1]) && c4[2] == '+') {
	                   real = c4[1] - '0';
	                   imag = c4[3] - '0';
	                   op = c4[2];
	                   c.setReal(real);
	                   c.setImaginary(imag);
	                   c.setOp(op);
	               }

	               else if (isdigit(c4[1]) && c4[2] == '-') {
	                   real = c4[1] - '0';
	                   imag = c4[3] - '0';
	                   op = c4[2];
	                   c.setReal(real);
	                   c.setImaginary(-imag);
	                   c.setOp(op);
	               }
	               else if (!isdigit(c4[1]) && c4[3] == '+') {
	                   real = c4[2] - '0';
	                   imag = c4[4] - '0';
	                   op = c4[3];
	                   c.setReal(-real);
	                   c.setImaginary(imag);
	                   c.setOp(op);
	               }
	               else if (!isdigit(c4[1]) && c4[3] == '-') {
	                   real = c4[2] - '0';
	                   imag = c4[4] - '0';
	                   op = c4[3];
	                   c.setReal(-real);
	                   c.setImaginary(-imag);
	                   c.setOp(op);
	               }

	               //Second Complex number
	               Complex c1;
	               //Check the real and imaginary datas sign before setting values
	               if (isdigit(c3[1]) && c3[2] == '+') {
	                   real = c3[1] - '0';
	                   imag = c3[3] - '0';
	                   op = c3[2];
	                   c1.setReal(real);
	                   c1.setImaginary(imag);
	                   c1.setOp(op);
	               }

	               else if (isdigit(c3[1]) && c3[2] == '-') {
	                   real = c3[1] - '0';
	                   imag = c3[3] - '0';
	                   op = c3[2];
	                   c1.setReal(real);
	                   c1.setImaginary(-imag);
	                   c1.setOp(op);
	               }
	               else if (!isdigit(c3[1]) && c3[3] == '+') {
	                   real = c3[2] - '0';
	                   imag = c3[4] - '0';
	                   op = c3[3];
	                   c1.setReal(-real);
	                   c1.setImaginary(imag);
	                   c1.setOp(op);
	               }
	               else if (!isdigit(c3[1]) && c3[3] == '-') {
	                   real = c3[2] - '0';
	                   imag = c3[4] - '0';
	                   op = c3[3];
	                   c1.setReal(-real);
	                   c1.setImaginary(-imag);
	                   c1.setOp(op);
	               }
	               //Result Complex number
	               Complex c2;
	               //Check the operation between Complex numbers
	               if (operation == "*") {
	                   c2 = c * c1;
	               }
	               else if (operation == "+") {
	                   c2 = c + c1;
	               }
	               else if (operation == "-") {
	                   c2 = c - c1;
	               }
	               //Write result in output file
	               if (!out) {
	                   cout << "File not found!!" << endl;
	                   exit(0);
	               }
	               else {
	                   out << c2;
	               }
	               //Cross check display on console
	               cout << c2;
	               //Read strings set default
	               c4 = "";
	               operation = "";
	               c3 = "";

	           }
	           //If dummy Complex write that into file and display console for crosscheck
	           else {
	               out << "Dummy" << endl;
	               cout << "Dummy" << endl;
	           }
	       }
	   }
	    return 0;
}
