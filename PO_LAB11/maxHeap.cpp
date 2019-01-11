/*
 * maxHeap.cpp
 *
 *  Created on: Dec 8, 2018
 *      Author: prabj
 */

#include "maxHeap.h"
#include <iostream>

namespace std {

template<class elemType>
maxHeap<elemType>::maxHeap() {
	size=0;
	maxSize=70;
	arrayH=new elemType[maxSize];

}

template<class elemType>
void maxHeap<elemType>::swap(int *x, int*y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

template<class elemType>
int maxHeap<elemType>:: root(int location){
	return (location-1)/2;
}

template<class elemType>
int maxHeap<elemType>::left(int location){
	return (2*location + 1);
}

template<class elemType>
int maxHeap<elemType>::right(int location){
    return (2*location + 2);
}

template <class elemType>
int maxHeap<elemType>:: insert(elemType block){
	if (size==maxSize){
		cout<<"Cannot insert-the heap is full"<<endl;
		return -1;
	}
	else{
		size++;
		int i=size-1;
		arrayH[i]=block;
		while(i!=0 && arrayH[root(i)]<arrayH[i]){
			swap(&arrayH[i],&arrayH[root(i)]);
			i=root(i);
		}
	}

}
template <class elemType>
void maxHeap<elemType>::heapify(int blockone, int blocktwo) {

	int check = blockone;
	int leftroot = 1 + 2*blockone;
	int rightroot = 2 + 2*blockone;

	if (rightroot < blocktwo && arrayH[rightroot] > arrayH[check]) {
		check = rightroot;
	}
	if (left < blocktwo && arrayH[left] > arrayH[check]) {
		check = leftroot;
	}
	if (check != blockone) {
		swap(arrayH[blockone], arrayH[check]);
		heapify(check, blocktwo);
	}
}

template<class elemType>
int maxHeap<elemType>::search(elemType block){
	for(int i=0; i<size; i++){
		if(arrayH[i]==block){
			return i;
		}
	}
	return -1;
}

template <class elemType>
void maxHeap<elemType>::buildHeap() {
	for (int i = size/2; i > 0; i--) {
		elemType temp = maxHeap(i);
		int j, k;
		for(k = j; 2*k <= size; k++){
			j = 2*k;

			if (j != size && (maxHeap(j) == maxHeap(j+1)) > 0) {
				j++;
			}

			if (temp == maxHeap(j) > 0) {
				maxHeap(k) = maxHeap(j);
			}
		}

	}
}


template<class elemType>
void maxHeap<elemType>:: print(){
	for(int i=0; i<size; i++){
		cout<<arrayH[i]<<" ";
	}
}




template<class elemType>
maxHeap<elemType>::~maxHeap() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
