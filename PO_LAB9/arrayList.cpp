/*
 * arrayList.cpp
 *
 *  Created on: Nov 7, 2018
 *      Author: prabj
 */

#include "arrayList.h"
#include <iostream>
namespace std {
template <class elemType>
arrayList<elemType>::arrayList() {
	size=0;

}
template <class elemType>
unsigned int arrayList<elemType>:: seqSearchIter (elemType element){
	int i=0;
	for(i=0;i<size; i++){
		if(array1[i]==element){
			return i;
		}
	}

}
template<class elemType>
unsigned int arrayList<elemType>:: seqSearchRec (elemType element){
	if(size==1){
		return -1;
	}
	if(array1[0]==element){
		return 0;
	}
	if(array1[size-1]==element){
		return size-1;
	}
	arrayList<elemType> temp;
	for(int i=0; i<this->size-1; i++){
		temp.array1[i]=this->array1[i];
	}
	temp.size=this->size-1;
	return temp.seqSearchRec(element);
}
template <class elemType>
bool arrayList<elemType>::isEmpty() const{
	if(size==0){
		return true;
	}
	if(size!=0){
		return false;
	}
}
template <class elemType>
bool arrayList<elemType>::isFull() const{
	if(size==20){
		return true;
	}
	if(size<20){
		return false;
	}
}

template <class elemType>
int arrayList<elemType>::listSize() const{
	return size;
}

template <class elemType>
int arrayList<elemType>::maxListSize()const{
	return 20;
}

template <class elemType>
void arrayList<elemType>::print(){
	cout<<"The items in the array are: ";
	for(int i=0; i<size; i++){
		cout<< " "<< array1[i];
	}
	cout<<endl;
}

template <class elemType>
bool arrayList<elemType>::isItemAtEqual(int location, elemType block){
	if(location>size){
		cout<<"Location provided is greater than max"<<endl;
	}
	if(location<0){
		cout<<"Location provided is less than 0."<<endl;
	}
	if(array1[location]==block){
		return true;

	}
	else{
		return false;

	}

}

template <class elemType>
void arrayList<elemType>::insertAt(int location, elemType block){
	if(location>size){
		cout<<"Location provided is greater than max"<<endl;
		}
	if(location<0){
		cout<<"Location provided is less than 0."<<endl;
		}
	array1[location]=block;
	for(int i=location; location<size;i++){
		array1[i++]=array1[i];
	}
	size++;
}

template <class elemType>
void arrayList<elemType>::insertEnd(elemType block){
	array1[size]=block;
	size++;
}

template <class elemType>
void arrayList<elemType>::removeAt(int location){
	if(location>size){
		cout<<"Location provided is greater than max"<<endl;
			}
	if(location<0){
		cout<<"Location provided is less than 0."<<endl;
			}
	array1[location]=0;


}

template <class elemType>
elemType arrayList<elemType>::retrieveAt(int location){
	if(location>size){
		cout<<"Location provided is greater than max"<<endl;
		return -1;
			}
	if(location<0){
		cout<<"Location provided is less than 0."<<endl;
		return -1;
			}
	cout<<"The element at "<< location<<" is: "<< array1[location]<<endl;
}

template <class elemType>
void arrayList<elemType>::replaceAt(int location, elemType block){
	if(location>size){
		cout<<"Location provided is greater than max"<<endl;
	}
	if(location<0){
		cout<<"Location provided is less than 0."<<endl;
	}
	array1[location]=block;
}
template <class elemType>
void arrayList<elemType>::clearList(){
	for(int i=0; i<size; i++){
		array1[i]=0;
	}
}
template <class elemType>
void arrayList<elemType>::operator = (const arrayList &rhs){
	this->array1= new elemType[rhs.size];
	for (int i=0; i<rhs.size;i++){
		this->array1[i]=rhs.array1[i];
	}
	this->size=rhs.size;
}

template <class elemType>
arrayList<elemType>::~arrayList() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
