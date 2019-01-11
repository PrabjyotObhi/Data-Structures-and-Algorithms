/*
 * clockType.cpp
 *
 *  Created on: Sep 11, 2018
 *      Author: prabj
 */
#include <iostream>
#include "clockType.h"
using namespace std;

clockType::clockType()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

clockType::clockType(int h, int m)
{
	hours = h;
	minutes = m;
	seconds = 0;
}

clockType::clockType(int h, int m, int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}

ostream& operator <<(ostream& ost, const clockType &c1)
{
	if (c1.hours < 10 && c1.minutes >= 10 && c1.seconds >= 10)
		ost << "0" << c1.hours << ":" << c1.minutes << ":" << c1.seconds << endl;
	if (c1.hours < 10 && c1.minutes < 10 && c1.seconds < 10)
		ost << "0" << c1.hours << ":0" << c1.minutes << ":0" << c1.seconds << endl;
	if (c1.hours >= 10 && c1.minutes >= 10 && c1.seconds < 10)
		ost << c1.hours << ":" << c1.minutes << ":0" << c1.seconds << endl;
	if (c1.hours < 10 && c1.minutes < 10 && c1.seconds >= 10)
		ost << "0" << c1.hours << ":0" << c1.minutes << ":" << c1.seconds << endl;
	return ost;
}

clockType operator +(const clockType &c1, const clockType &c2)
{
	clockType temp;
	temp.hours = (c1.hours + c2.hours) % 12;
	temp.minutes = (c1.minutes + c2.minutes);
	temp.seconds = (c1.seconds + c2.seconds);
	if (temp.minutes > 60)
	{
		temp.hours ++;
		temp.minutes = temp.minutes - 60;
	}
	if (temp.seconds > 60)
	{
		temp.minutes ++;
		temp.minutes = temp.minutes - 60;
	}
	return temp;
}

clockType operator +(const clockType &c1,int s)
{
	clockType temp;
	temp.hours = c1.hours;
	temp.minutes = c1.minutes;
	temp.seconds = c1.seconds + s;
	if (temp.seconds > 60)
	{
		temp.minutes ++;
		temp.minutes = temp.minutes - 60;
	}
	return temp;
}



