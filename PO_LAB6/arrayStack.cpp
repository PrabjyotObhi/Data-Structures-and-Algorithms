/*
 * arrayStack.cpp
 *
 *  Created on: Oct 10, 2018
 *      Author: prabj
 */

#include "arrayStack.h"
#include <iostream>

namespace std {
template<class elemType>
arrayStack<elemType>::arrayStack() {

}
template <class elemType>
void arrayStack<elemType>::push(elemType block){
	pot=pot+1;
	array[pot]=block;
}
template <class elemType>
void arrayStack<elemType>::pop(){
	pot=pot-1;
}
template <class elemType>
elemType arrayStack<elemType>::top(){
	if(pot<0){
		cout<<"The stack is empty, so the top value does not exist"<<endl;
		//Terminate the program, so it doesn't break future code
		exit(1);
	}
	else{
	return array[pot];
	}
}
template <class elemType>
int arrayStack<elemType>::size(){
	return pot+1;
}
template <class elemType>
int arrayStack<elemType>::maxSize(){
	return 100;
}
template<class elemType>
bool arrayStack<elemType>::isEmpty(){
	if(pot<0){
		return true;
	}
	else{
		return false;
	}
}
template<class elemType>
arrayStack<elemType>::~arrayStack() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
