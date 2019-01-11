/*
 * arrayList.h
 *
 *  Created on: Sep 13, 2018
 *      Author: prabj
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

namespace std {
template <class elemType> class arrayList {
private:
	int *array1= new elemType[20];
	int size=0;

public:
	arrayList();
	bool isEmpty()const;
	bool isFull()const;
	int listSize()const;
	int maxListSize() const;
	void print();
	bool isItemAtEqual(int location, elemType block);
	void insertAt(int location, elemType block);
	void insertEnd(elemType block);
	void removeAt(int location);
	elemType retrieveAt(int location);
	void replaceAt(int location, elemType block);
	void clearList();
	void operator=(const arrayList &rhs);


	virtual ~arrayList();
};

} /* namespace std */

#endif /* ARRAYLIST_H_ */
