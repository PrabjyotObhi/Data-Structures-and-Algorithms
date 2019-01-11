//============================================================================
// Name        : PO_LAB7.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "arrayQueue.h"
#include "arrayQueue.cpp"
using namespace std;

int main() {
	arrayQueue<int> p;
	cout<<p.isEmpty()<<endl;
	cout<<p.isFull()<<endl;
	cout<<"The current size of the Queue is ["<<p.getSize()<<"]"<<endl;

	p.enqueue(10);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(90);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(78);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(340);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(19);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(145);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(765);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(789);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(1213);
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;

	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;

	p.enqueue(5);
		cout<<"Enqueing a value"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(19);
		cout<<"Enqueing a value"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(20);
		cout<<"Enqueing a value"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(120);
		cout<<"Enqueing a value"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	p.enqueue(430);
		cout<<"Enqueing a value"<<endl;
		cout<<"\tThe index of front is ["<<p.getFrontLocation()<<"]"<<endl;
		cout<<"\tThe index of back is ["<<p.getBackLocation()<<"]"<<endl;
	if(p.isFull()){
		cout<<"The queue is full"<<endl;
	}
	p.enqueue(80);


	return 0;
}

/*1
0
The current size of the Queue is [0]
	The index of front is [0]
	The index of back is [1]
	The index of front is [0]
	The index of back is [2]
	The index of front is [0]
	The index of back is [3]
	The index of front is [0]
	The index of back is [4]
	The index of front is [0]
	The index of back is [5]
	The index of front is [0]
	The index of back is [6]
	The index of front is [0]
	The index of back is [7]
	The index of front is [0]
	The index of back is [8]
	The index of front is [0]
	The index of back is [9]
Dequeuing [10]
	The index of front is [1]
	The index of back is [9]
Dequeuing [90]
	The index of front is [2]
	The index of back is [9]
Dequeuing [78]
	The index of front is [3]
	The index of back is [9]
Dequeuing [340]
	The index of front is [4]
	The index of back is [9]
Dequeuing [19]
	The index of front is [5]
	The index of back is [9]
Enqueing a value
	The index of front is [5]
	The index of back is [0]
Enqueing a value
	The index of front is [5]
	The index of back is [1]
Enqueing a value
	The index of front is [5]
	The index of back is [2]
Enqueing a value
	The index of front is [5]
	The index of back is [3]
Enqueing a value
	The index of front is [5]
	The index of back is [4]
The queue is full
The queue is full
*/
