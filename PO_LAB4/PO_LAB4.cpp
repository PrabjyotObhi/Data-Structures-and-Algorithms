//============================================================================
// Name        : PO_LAB4.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main() {
	LinkedList<int> a;
	//This should show the current list size.
	a.listSize();
		//Returned:The current list size is 0
	//This checks to see whether the list is empty or not
	a.isEmpty();
		//Retured:The head points to nothing, the list is empty
	//Checks to see if the list is full
	a.isFull();
		//Returned:The list is not full.
	//This should insert a value of 6 at the end, to check this we print it out.
	a.insertEnd(6);
	a.print();
	cout<<endl;
		//Returned:6
	//This should return the current size of the list
	a.maxListSize();
		//Returns:The max list size is 20
	//This should check whether the value 6 is at location 0, which it is.
	a.isItemAtEqual(0, 6);
		//Returned:Yes, 6 is at location 0

	//This should remove the value at location 0.
	a.removeAt(0);
		//Returned:The value at the location: 0 was deleted
	//Currently, there is no location 1, so this should return an error
	a.removeAt(1);
		//Returned:location not found
	//This should insert a value of 7 at location 1, and this is checked
	//with the isItemAtEqual function
	a.insertAt(1, 7);
	a.isItemAtEqual(1, 7);
		//Returned:Yes, 7 is at location 1

	//Checks to see whether or not retrieve at works
	cout<<"This uses retrieveAt, and element at the location provided is: ";
	a.retrieveAt(0);
		//Returned:This uses retrieveAt, and element at the location provided is: 7

	//This replaces the value at 0 with 10, and to check if this is true, we call
	//isItemAtEqual with location of 0 and block type of 10.
	a.replaceAt(0, 10);
	a.isItemAtEqual(0,10);
		//Returned:Yes, 10 is at location 0
	//To make sure the previous code works, test with different values in the block
	a.replaceAt(0, 20);
	a.isItemAtEqual(0, 21);
	a.replaceAt(2, 20);
		//Returned:No, 21 is not at location 0
	//Checks to see if the list is empty
	a.isEmpty();
		//Returned:The head points to something, so the list is not empty.
	//Checks to see if clearList works.
	a.clearList();
		//Returned:The head points to nothing, so the list is now cleared.

	cout<<"ello worl"<<endl;
	return 0;
}
