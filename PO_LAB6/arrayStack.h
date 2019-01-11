/*
 * arrayStack.h
 *
 *  Created on: Oct 10, 2018
 *      Author: prabj
 */

#ifndef ARRAYSTACK_H_
#define ARRAYSTACK_H_

namespace std {
template<class elemType>
class arrayStack {
private:
	elemType array[100];
	int pot=-1;
public:

	arrayStack();
	void push(elemType block);
	void pop();
	elemType top();
	int maxSize();
	int size();
	bool isEmpty();

	virtual ~arrayStack();
};

} /* namespace std */

#endif /* ARRAYSTACK_H_ */
