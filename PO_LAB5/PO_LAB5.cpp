//============================================================================
// Name        : PO_LAB5.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "arrayList.h"
#include "arrayList.cpp"
using namespace std;

int main() {
	arrayList <int> p;
	p.insertEnd(5);
	p.insertEnd(7);
	//First getMin with 2 items in the arrayList
	cout<<"The minimum is: "<<p.getMin()<<endl;
		//Returns:The minimum is: 5
	p.insertEnd(8);
	p.insertEnd(9);
	p.insertEnd(111);
	p.insertEnd(0);
	//Second getMin with 6 items in the arrayList
	cout<<"The minimum is: "<<p.getMin()<<endl;
		//Returns:The minimum is: 0

	arrayList <int> q;
	//Third getMin with nothing in the list
	q.getMin();
		//Returns:The list is empty, so there is no minimum
	return 0;
}
