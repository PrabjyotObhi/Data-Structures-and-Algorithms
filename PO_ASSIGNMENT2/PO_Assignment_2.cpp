//============================================================================
// Name        : PO_Assignment_2.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "stackQueue.h"
#include "stackQueue.cpp"
using namespace std;

void MahimaMain();

int main() {
	stackQueue<int> p;
	if(p.isEmpty()){
		cout<<"The queue is empty"<<endl;
	}
		//Returns:The queue is empty
	if(!p.isFull()){
		cout<<"The queue is not full"<<endl;
	}
		//Returns:The queue is not full

	cout<<"The current size of the queue is ["<<p.getSize()<<"]"<<endl;
		//Returns:The current size of the queue is [0]

	p.enqueue(90);
	p.enqueue(100);
	p.enqueue(80);

	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		//Returns:First Dequeue: 90
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		//Returns:Second Dequeue: 100
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		//Returns:Third Dequeue: 80

	p.enqueue(342);
	p.enqueue(126);
	p.enqueue(0);

	if(!p.isFull()){
		cout<<"The current size of the queue is ["<<p.getSize()<<"]"<<endl;
	}
		//Returns:The current size of the queue is [3]

	//We should see 342
	cout<<"The item at the front of the queue is ["<<p.front()<<"]"<<endl;
		//Returns:The item at the front of the queue is [342]
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		//Returns:Dequeuing [342]
	cout<<"The item at the front of the queue is ["<<p.front()<<"]"<<endl;
		//Returns:The item at the front of the queue is [126]
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		//Returns:Dequeuing [126]
	cout<<"The item at the front of the queue is ["<<p.front()<<"]"<<endl;
		//Returns:The item at the front of the queue is [0]
	cout<<"Dequeuing ["<<p.dequeue()<<"]"<<endl;
		//Returns:Dequeuing [0]

	cout<<endl<<endl;

	cout<<"Using Professor Mahima's main code: "<<endl;
	MahimaMain();

/*
		Using Professor Mahima's main code:
		A
		B
		C
		D
		Cannot dequeue as the queue is empty.
 *
 */




	return 0;
}

void MahimaMain(){
	stackQueue<char> charQueue;
	charQueue.enqueue('A');
	charQueue.enqueue('B');
	cout << charQueue.dequeue() << endl;
	charQueue.enqueue('C');
	cout << charQueue.dequeue() << endl;
	charQueue.enqueue('D');
	cout << charQueue.dequeue() << endl;
	cout << charQueue.dequeue() << endl;
	cout << charQueue.dequeue() << endl;

}
