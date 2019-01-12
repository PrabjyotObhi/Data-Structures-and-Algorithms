/*
 * MyPoint.h
 *
 *  Created on: Sep 27, 2018
 *      Author: prabj
 */

#ifndef MYPOINT_H_
#define MYPOINT_H_
#include <iostream>

namespace std {

class MyPoint {
private:
public:
	//when the data fields were protected or private i would get errors and wasnt able to set the value of
	//the points in the line
	double xCoordinate;
	double yCoordinate;
	MyPoint();
	MyPoint(double x, double y);
	//Accessors
//	double getX(MyPoint p1);
//	double getY(MyPoint p1);
//	void setX(MyPoint p1);
//	void setY(MyPoint p1);
	friend istream& operator>> (istream& ist,  MyPoint &p1);
	virtual ~MyPoint();
};

} /* namespace std */

#endif /* MYPOINT_H_ */
