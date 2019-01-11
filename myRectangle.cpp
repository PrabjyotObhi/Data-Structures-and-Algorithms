/*
 * myRectangle.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: prabj
 */

#include "myRectangle.h"
#include <iostream>
using namespace std;

myRectangle::myRectangle(){
	length=0;
	width=0;
}
myRectangle::myRectangle(double l, double w){
	length=l;
	width=w;

}

double myRectangle::getLength( ){
	return length;
}

double myRectangle:: getWidth( ){
	return width;
}

//Mutators
void myRectangle::setLength(double l){
	length=l;
}

void myRectangle::setWidth(double w){
	width=w;
}

//Calculation
double myRectangle::getArea( ){
	return (length*width);
}

double myRectangle::printArea(){
	cout<<"The area is: ";
	double area= length*width;
	return(area);

}


myRectangle::~myRectangle() {
	// TODO Auto-generated destructor stub
}

