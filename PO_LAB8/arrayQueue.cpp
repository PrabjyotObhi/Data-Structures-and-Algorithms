/*
 * arrayQueue.cpp
 *
 *  Created on: Oct 24, 2018
 *      Author: prabj
 */
#include <iostream>
#include "arrayQueue.h"

namespace std {
template<class elemType>
arrayQueue<elemType>::arrayQueue() {
	f=0;
	b=0;
	maxSize=10;
	size=0;
	arrayQ=new elemType[maxSize];

}

template<class elemType>
int arrayQueue<elemType>::getFrontLocation(){
	return f;
}

template<class elemType>
int arrayQueue<elemType>::getBackLocation(){
	return b;
}

template <class elemType>
void arrayQueue<elemType>::enqueue(elemType block){
	if(!isFull()){
		arrayQ[b]=block;
		b=(b+1)%maxSize;
		size++;
	}
	else{
		cout<< "The queue is full";
	}
}

template<class elemType>
elemType arrayQueue<elemType>::dequeue(){
	if(!isEmpty()){
		elemType sendBack=arrayQ[f];
		f=(f+1)%maxSize;
		size--;
		return sendBack;
	}
	else{
		throw "The queue is empty";
	}
}

template<class elemType>
bool arrayQueue<elemType>::isFull(){
	if((b+1)%maxSize==f){
		return true;
	}
	else{
		return false;
	}
}

template<class elemType>
bool arrayQueue<elemType>::isEmpty(){
	return(f==b);
}

template<class elemType>
int arrayQueue<elemType>::getSize(){
	return size;
}

template<class elemType>
arrayQueue<elemType>::~arrayQueue() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
