//============================================================================
// Name        : PO_LAB3.cpp
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

	arrayList<int> p;
	//Checks if the array is empty, at this point it is

	//This checks to see if the array is empty
	p.isEmpty();
		//Returns:The array is empty

	//This checks to see if the array is full
	p.isFull();
		//Returns:The array is not full

	p.maxListSize();
		//Returns: The max list size is 20

	//This inserts 90 at the end of the array, which would be at position 0 as it is empty.
	p.insertEnd(90);
	//Prints to check if 90 is in the array
	p.print();
	//Prints the current size
	p.listSize();

	//This inserts the value of 71 at position 1
	p.insertAt(1, 78);
	//Print to verify
	p.print();
		//Returns:The items in the array are:  90 78

	//This checks the location provided and indicates whether or not the value provided is located
	//there. In this case, it should return true as 0 is currently in 90.
	p.isItemAtEqual(0, 90);
		//Returns:Yes 90 is at location 0

	//This checks whether the array is empty as when we last checked it, it was. However, we've added
	//values to it so it should print something else.
	p.isEmpty();
		//Returns:The array is not empty

	//This should insert 69 at the end, which is currently the third position in the array.
	p.insertEnd(69);
	p.print();
		//Returns:The items in the array are:  90 78 69

	//As arrays start at 0, this should insert 45 at the fourth location in the array
	p.insertAt(3, 45);
	p.print();
		//Returns:The items in the array are:  90 78 69 45

	//This should return the value located in 0, in this case 90
	p.retrieveAt(0);
		//Returns:The element at 0 is: 90

	//Test for other locations
	p.retrieveAt(1);
	p.retrieveAt(2);
	p.retrieveAt(30);
	p.retrieveAt(-1);
		//Returns:The element at 0 is: 90
		//		  The element at 1 is: 78
		//  	  The element at 2 is: 69
		// 		  Location provided is greater than max
		//		  Location provided is less than 0.


	//This should replace 90 at location 0 with the value of 80 while leaving everything else alone
	p.replaceAt(0, 80);
	p.replaceAt(3, 780);
	p.insertEnd(1234);
	p.print();
		//Returns:The items in the array are:  80 78 69 45

	//This should remove the 80 and leave a 0 in its place.
	p.removeAt(0);
	p.print();
		//Returns: The items in the array are:  0 78 69 780 1234

	//This should clear the array by putting 0s in all of its locations
	p.clearList();
	p.print();
		//Returns:The items in the array are:  0 0 0 0 0


	//Create a new arraylist q to test the assignment operator
	arrayList<int> q;

	q=p;
	//did not create a << overload, so i used multiple cout statements. there are all 0s in p,
	//so q should be all zeros.
	cout<<"This is from q- ";
	q.print();
	cout<<endl;
		//Returns:This is from q- The items in the array are:  0 0 0 0 0
	return 0;
}
