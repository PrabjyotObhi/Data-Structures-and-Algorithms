/*
 * myLine.h
 *
 *  Created on: Sep 27, 2018
 *      Author: prabj
 */

#ifndef MYLINE_H_
#define MYLINE_H_
#include <iostream>
#include "MyPoint.h"


#include  <cmath>

namespace std {

class myLine{
private:

public:
	MyPoint point1;
	MyPoint point2;
	double slope;
	double intercept;
	myLine();
	myLine(MyPoint p1, MyPoint p2);
	MyPoint getPoint1(myLine line);
	MyPoint getPoint2(myLine line);
	double getLength(myLine line);
	double getSlope(MyPoint p1, MyPoint p2);
	double getIntercept(MyPoint p1, MyPoint p2);
	bool operator <( myLine& rhs);
	bool operator <=(const myLine& rhs);
	bool operator >(const myLine& rhs);
	bool operator >=(const myLine& rhs);

	virtual ~myLine();
};

} /* namespace std */

#endif /* MYLINE_H_ */
