/*
 * maxHeap.h
 *
 *  Created on: Dec 8, 2018
 *      Author: prabj
 */

#ifndef MAXHEAP_H_
#define MAXHEAP_H_

namespace std {

template<class elemType>
class maxHeap {
private:
	elemType *arrayH;
	int maxSize;
	int size;
public:
	maxHeap();
	void print();
	int insert(elemType block);
	int root(int location);
	int left(int location);
    int right(int location);
    void swap(int *x, int *y);
	int search(elemType block);
	void buildHeap();
	void heapify(int blockone, int blocktwo);
	virtual ~maxHeap();
};

} /* namespace std */

#endif /* MAXHEAP_H_ */
