/*
 * sortedarrayList.cpp
 *
 *  Created on: Nov 7, 2018
 *      Author: prabj
 */

#include "sortedarrayList.h"
#include <iostream>

namespace std {

template <class elemType>
sortedarrayList<elemType>::sortedarrayList() {
	size=0;
}

template<class elemType>
bool sortedarrayList<elemType>::isEmpty() const{
	return(size==0);
}

template<class elemType>
bool sortedarrayList<elemType>::isFull() const{
	return(size==20);
}

template<class elemType>
int sortedarrayList<elemType>::listSize()const{
	return size;
}

template<class elemType>
int sortedarrayList<elemType>::maxListSize() const{
	return 20;
}


template<class elemType>
void sortedarrayList<elemType>::print(){
	cout<<"The items in the array are ";
	for(int i=0; i<size; i++){
		cout<< "["<<array1[i]<<"]";
	}
}
template<class elemType>
void sortedarrayList<elemType>::insert(elemType block){
	int temp;
	array1[size]=block;
	size++;
	for(int i=0; i<size; i++){
		for(int j=0; j<i; j++){
			if(array1[j]>array1[j+1]){
				temp=array1[j];
				array1[j]=array1[j+1];
				array1[j+1]=temp;
			}
		}
	}
}

template<class elemType>
void sortedarrayList<elemType>::remove(elemType block){
	int index=0;
	while(index<size){
		if(array1[index]==block){
			break;
		}
		index++;
	}
	elemType temp[size];
	for(int i=0; i<size;i++){
		temp[i]=array1[i];
	}
	for(int i=0; i<index; i++){
		array1[i]=temp[i];
	}
	for(int i=index+1; i<size;i++){
		array1[i-1]=temp[i];
	}
	size--;
}

template<class elemType>
void sortedarrayList<elemType>::clearList(){
	for(int i=0; i<size; i++){
		array1[i]=0;
	}
}

template<class elemType>
unsigned int sortedarrayList<elemType>::seqSearchIter(elemType block){
	int first=0;
	int	last=size-1;
	int mid;
	bool found=false;
	while((first<=last)&&!found){
		mid=(first+last)/2;
		if(array1[mid]==block){
			return mid;
		}
		else if(array1[mid]>block){
			last=mid-1;
		}
		else{
			first=mid+1;
		}
	}

}

template<class elemType>
unsigned int sortedarrayList<elemType>::seqSearchRec(elemType block){
	if(size>=1){
		int first=0;
		int last=size-1;
		int mid=(first+last)/2;

		if(array1[mid]==block){
			return mid;
		}
		else if(array1[mid]>block){
			mid=mid+1;
			return seqSearchRec(block);
		}
		else{
			mid=mid-1;
			return seqSearchRec(block);
		}
	}
	return-1;
}

template <class elemType>
sortedarrayList<elemType>::~sortedarrayList() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
