/*
 * MyPoint.cpp
 *
 *  Created on: Sep 27, 2018
 *      Author: prabj
 */

#include "MyPoint.h"

namespace std {

MyPoint::MyPoint() {
	xCoordinate=0;
	yCoordinate=0;

}
MyPoint:: MyPoint(double x, double y){
	xCoordinate=x;
	yCoordinate=y;
}
//Overload the >> operator
istream& operator>> (istream& ist, MyPoint &p1){
	ist>>p1.xCoordinate;
	ist>>p1.yCoordinate;
	return ist;
}
//double MyPoint::getX(MyPoint p1){
//	return xCoordinate;
//}
//double MyPoint::getY(MyPoint p1){
//	return yCoordinate;
//}
//void MyPoint::setX(MyPoint p1){
//	yCoordinate=p1.xCoordinate;
//}
//void MyPoint::setY(MyPoint p1){
//	yCoordinate=p1.yCoordinate;
//}
MyPoint::~MyPoint() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
