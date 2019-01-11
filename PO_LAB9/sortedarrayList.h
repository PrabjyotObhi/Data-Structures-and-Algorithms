/*
 * sortedarrayList.h
 *
 *  Created on: Nov 7, 2018
 *      Author: prabj
 */

#ifndef SORTEDARRAYLIST_H_
#define SORTEDARRAYLIST_H_

namespace std {
template <class elemType>

class sortedarrayList {
private:
	int size;
	elemType array1[20];
public:
	sortedarrayList();
	bool isEmpty() const;
	bool isFull() const;
	int listSize() const;
	int maxListSize()const;
	void print();
	void insert(elemType block);
	void remove(elemType block);
	void clearList();
	unsigned int seqSearchIter(elemType block);
	unsigned int seqSearchRec(elemType block);
	virtual ~sortedarrayList();
};

} /* namespace std */

#endif /* SORTEDARRAYLIST_H_ */
