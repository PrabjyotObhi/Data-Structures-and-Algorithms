/*
 * stackQueue.h
 *
 *  Created on: Oct 23, 2018
 *      Author: prabj
 */

#ifndef STACKQUEUE_H_
#define STACKQUEUE_H_
#include <stack>
#include <iostream>

namespace std {

template <class elemType>
class stackQueue {
private:
	stack<elemType> input;
	stack<elemType> output;
	int size=0;
public:
	stackQueue();
	void enqueue(elemType block);
	elemType dequeue();
	elemType front();
	int getSize();
	bool isEmpty();
	bool isFull();
	virtual ~stackQueue();
};

} /* namespace std */

#endif /* STACKQUEUE_H_ */
