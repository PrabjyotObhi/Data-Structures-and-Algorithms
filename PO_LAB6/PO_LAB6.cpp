//============================================================================
// Name        : PO_LAB6.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "arrayStack.h"
#include "arrayStack.cpp"
using namespace std;

int main() {
	arrayStack <int> p;

	//The stack is empty
	if(p.isEmpty()){
		cout<<"The stack is empty"<<endl;
	}
	else{
		cout<<"The stack is not empty"<<endl;
	}
		//Returns:The stack is empty
	//The size is 0 as the stack is empty
	cout<<"The current size is: "<<p.size()<<endl;
		//The current size is: 0
	//Pushes 10 to the top of the stack
	p.push(10);
	//Should return 10
	cout<<p.top()<<endl;
		//Returns:10
	//Pushes 20 to the top
	p.push(20);
	//Pushes 30 to the top
	p.push(30);
	//Should return 30
	cout<<p.top()<<endl;
		//Returns:30
	//Pops 30, so the top should be 20
	p.pop();
	cout<<p.top()<<endl;
		//Returns:20
	//Pops 20, so the top should be 10
	p.pop();
	//Should return 10
	cout<<p.top()<<endl;
		//Returns:10
	//10 is the only thing in the stack, so it should return 1
	cout<<p.size()<<endl;
		//Returns:1
	//I set the max size to 100, so it should return 100
	cout<<p.maxSize()<<endl;
		//Returns:100

	//FURTHER TESTING

	//Pushes 4 values into the stack
	p.push(7);
	p.push(90);
	p.push(1000);
	p.push(11212);
	//Should return the last value we put in to the list, so 11212 should be returned
	cout<<p.top()<<endl;
		//Returns::11212
	//pops 11212
	p.pop();
	cout<<p.top()<<endl;
		//Returns: 1000
	//Pushes 98989 where the previous 11212 was, so 98989 should be returned
	p.push(98989);
	cout<<p.top()<<endl;
		//Returns:98989
	p.pop();
	cout<<"The current size is: "<<p.size()<<endl;
	p.pop();
	cout<<"The current size is: "<<p.size()<<endl;
	p.pop();
	cout<<"The current size is: "<<p.size()<<endl;
	p.pop();
	cout<<"The current size is: "<<p.size()<<endl;
	p.pop();
	cout<<"The current size is: "<<p.size()<<endl;
		//The block returns:
			/*The current size is: 4
			  The current size is: 3
			  The current size is: 2
		      The current size is: 1
			  The current size is: 0
			*/
	//Checks to see if the stack is empty
	if(p.isEmpty()){
			cout<<"The stack is empty"<<endl;
		}
		else{
			cout<<"The stack is not empty"<<endl;
		}
		//Returns:The stack is empty
	//Print out an empty top
	cout<<p.top();
		//Returns:The stack is empty, so the top value does not exist
	return 0;
}
