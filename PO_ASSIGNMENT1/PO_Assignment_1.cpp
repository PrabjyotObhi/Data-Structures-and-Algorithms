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
#include "Complex.cpp"
using namespace std;


template <class elemType>
Complex<elemType> getComplex(ifstream &ifs)
{
	elemType real;
	elemType imag;
	char sign;
	char i;
	Complex<elemType> ref;
	while (ifs >> real >> sign >> imag >> i)
	{
		if (sign == '-')
			imag = -imag;
		Complex<elemType> cmplx(real, imag);
		ref = ref + cmplx;
		break;
	}
	return ref;
}

char getOperation(ifstream &ifs)
{
	char operation;
	while (ifs >> operation)
	{
		if (operation == '+' || operation == '-' ||operation == '*')
			break;
	}
	return operation;
}

template <class elemType>
void performOperation(ofstream& ofs, char op, Complex<elemType>& a, Complex<elemType>& b)
{
	if (op == '+'){
		ofs << (a + b);
	}
	if (op == '-'){
		ofs << a - b;
	}
	if (op == '*'){
		ofs << a * b;
	}

}

int main()
{
	//Declare input output file streams
	ifstream ifs;
	ofstream ofs;
	//opens the file
	ifs.open("complexInput2.txt");
	ofs.open("complexOutput2.txt");
	if (!ifs) {
		       cout << "File not found!!" << endl;
		       exit(0);
	}
	Complex<double> complexValue;
	Complex<double> complexValueTwo;
	complexValue = getComplex<double>(ifs);
	char op = getOperation(ifs);
	complexValueTwo = getComplex<double>(ifs);
	performOperation<double>(ofs, op, complexValue, complexValueTwo);
	//I do not know what these errors are, I worked with a group, but they did not get errors with similar code.
	return 0;
}
