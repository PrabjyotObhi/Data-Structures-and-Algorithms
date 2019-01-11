/*
 * myRectangle.h
 *
 *  Created on: Sep 6, 2018
 *      Author: prabj
 */

#ifndef MYRECTANGLE_H_
#define MYRECTANGLE_H_

class myRectangle {

private:
	double length;
	double width;
public:
	//Constructors
	myRectangle();
	myRectangle(double l, double w);

	//Accessors
	double getLength( );
	double getWidth( );

	//Mutators
	void setLength(double l);
	void setWidth(double w);

	//Calculation
	double getArea( );

	double printArea();



	virtual ~myRectangle();
};

#endif /* MYRECTANGLE_H_ */
