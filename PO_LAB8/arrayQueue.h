/*
 * arrayQueue.h
 *
 *  Created on: Oct 24, 2018
 *      Author: prabj
 */

#ifndef ARRAYQUEUE_H_
#define ARRAYQUEUE_H_

namespace std {
template <class elemType>
class arrayQueue {
	elemType* arrayQ;
	int f;
	int b;
	int maxSize;
	int size;
public:
	arrayQueue();
	void enqueue(elemType block);
	elemType dequeue();
	elemType front();
	bool isEmpty();
	bool isFull();
	int getSize();
	int getFrontLocation();
	int getBackLocation();
	virtual ~arrayQueue();
};

} /* namespace std */

#endif /* ARRAYQUEUE_H_ */
