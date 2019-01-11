/*
 * LinkedList.h
 *
 *  Created on: Sep 19, 2018
 *      Author: prabj
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

namespace std {

template <class elemType>
class LinkedList {
public:
	LinkedList();
	bool isEmpty() const;
	bool isFull() const;
	int listSize() const;
	int maxListSize() const;
	void print();
	bool isItemAtEqual (int location, elemType block);
	void insertAt(int location, elemType block);
	void insertEnd(elemType block);
	void removeAt(int location);
	elemType retrieveAt(int location);
	void replaceAt(int location, elemType block);
	void clearList();
	void operator =(const LinkedList &rhs);
	virtual ~LinkedList();
private:
	struct node{
		elemType data;
		node* next;
	};
	typedef struct node* nodePtr;
	nodePtr head;
	nodePtr current;
	nodePtr temp;
	int size;


};

} /* namespace std */

#endif /* LINKEDLIST_H_ */
