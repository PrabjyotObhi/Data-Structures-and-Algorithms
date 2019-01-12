/*
 * myLine.cpp
 *
 *  Created on: Sep 27, 2018
 *      Author: prabj
 */

#include "myLine.h"
#include "MyPoint.h"
#include "MyPoint.cpp"
#include <iostream>
#include  <cmath>
namespace std {

myLine::myLine() {
	point1.xCoordinate=0;
	point1.yCoordinate=0;
	point2.xCoordinate=0;
	point2.yCoordinate=0;
	slope=0;
	intercept=0;
}
myLine::myLine(MyPoint p1, MyPoint p2){
	point1.xCoordinate=p1.xCoordinate;
	point1.yCoordinate=p1.yCoordinate;
	point2.xCoordinate=p2.xCoordinate;
	point2.yCoordinate=p2.yCoordinate;
	slope=0;
	intercept=0;
}

double getLength(myLine line) {
	double x=line.point1.xCoordinate-line.point2.xCoordinate;
	double y=line.point1.yCoordinate-line.point2.yCoordinate;
	x=x*x;
	y=y*y;
	double root=x+y;
	root= sqrt(root);
	return root;
}
double getSlope(MyPoint p1, MyPoint p2){
	double numerator=p2.yCoordinate-p1.yCoordinate;
	double denominator=p2.xCoordinate-p1.xCoordinate;
	double slope=numerator/denominator;
	return slope;
}
double getIntercept(MyPoint p1, MyPoint p2){
	double slope= getSlope(p1, p2);
	double intercept= p2.yCoordinate-(slope*p2.xCoordinate);
	return intercept;

}
MyPoint myLine:: getPoint1(myLine line){
	return line.point1;
}
MyPoint myLine:: getPoint2(myLine line){
	return line.point2;
}
bool operator <( myLine &lhs,  myLine& rhs){
	bool lessThan=false;
	double length1=getLength(rhs);
	double length2=getLength(lhs);
	if(length2<length1){
		lessThan=true;
	}
	return lessThan;
}
bool operator <=(const myLine &lhs, const myLine& rhs){
	bool lessThanOrEqualTo=false;
	double length1=getLength(rhs);
	double length2= getLength(lhs);
	if((length1>length2)||(length1==length2)){
		lessThanOrEqualTo=true;
	}

	return lessThanOrEqualTo;
}
bool operator >(const myLine &lhs, const myLine& rhs){
	bool greaterThan=false;
	double length1=getLength(rhs);
	double length2= getLength(lhs);
	if(length2>length1){
		greaterThan=true;
	}
	return greaterThan;
}
bool operator >=(const myLine &lhs, const myLine& rhs){
	bool greaterThanOrEqualTo=false;
	double length1= getLength(rhs);
	double length2=getLength(lhs);
	if((length2>length1)||(length2==length1)){
		greaterThanOrEqualTo=true;
	}
	return greaterThanOrEqualTo;
//	if((lhs.getLength()>rhs.getLength())||(lhs.getLength()==rhs.getLength())){
//		greaterThan=true;
//	}
//	return greaterThan;
}

myLine::~myLine() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
