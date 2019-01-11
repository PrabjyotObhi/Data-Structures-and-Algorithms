//============================================================================
// Name        : PO_LAB1.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "clockType.h"
using namespace std;

int main()
{
	//Declares a clocktype variable using the three different constructors
	clockType c1;
	clockType c2(10, 45);
	clockType c3(9, 43, 20);

	//tests the operators created in the cpp
	int sec = 10;
	cout << c1;
	cout << c2 << c3;
	cout << c1 + c2;
	c1 = c1 + sec;
	cout << c1;

	/*Returns:
	00:00:00
	10:45:00
	09:43:20
	10:45:00
	00:00:10
	*/
	return 0;
}
