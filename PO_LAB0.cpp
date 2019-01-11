//============================================================================
// Name        : PO_LAB0.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "myRectangle.h"
using namespace std;

int main() {
	double tall;
	double fat;
	int input;

	cout<<"Insert a width: "<<endl;
	cin>>fat;
	cout<<"Insert a length: "<<endl;
	cin>>tall;
	myRectangle box(tall, fat);
	cout<<box.getArea()<<endl;
	cout<<box.printArea()<<endl;
	cout<<"The length of box is: "<<box.getLength()<<endl;
	cout<<"The width of box is: "<<box.getWidth()<<endl;


//	myRectangle bloop;
//	bloop.setLength(8);
//	bloop.setWidth(90);
//	cout<<bloop.getArea()<<endl;
//	cout<<bloop.printArea()<<endl;
//	cout<<"The length of bloop is: "<<bloop.getLength()<<endl;
//	cout<<"The width of bloop is "<<bloop.getWidth()<<endl;

	return 0;
}
