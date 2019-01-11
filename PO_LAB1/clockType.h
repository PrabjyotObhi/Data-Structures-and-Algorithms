/*
 * clockType.h
 *
 *  Created on: Sep 11, 2018
 *      Author: prabj
 */

#ifndef CLOCKTYPE_H_
#define CLOCKTYPE_H_
#include <iostream>
using namespace std;

class clockType
{
public:
	clockType();
	clockType(int h, int m);
	clockType(int h, int m, int s);
	friend ostream& operator <<(ostream& ost, const clockType &c1);
	friend clockType operator +(const clockType &c1, const clockType &c2);
	friend clockType operator +(const clockType &c1, int s);

private:
	int hours;
	int minutes;
	int seconds;
};

#endif /* CLOCKTYPE_H_ */

