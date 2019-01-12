/*
 * stackQueue.cpp
 *
 *  Created on: Oct 23, 2018
 *      Author: prabj
 */

#include "stackQueue.h"

namespace std {

template<class elemType>
stackQueue<elemType>::stackQueue() {
	// TODO Auto-generated constructor stub

}
template<class elemType>
bool stackQueue<elemType>::isEmpty(){
	return(!size);
}

template<class elemType>
bool stackQueue<elemType>::isFull(){
	return false;
}

template<class elemType>
int stackQueue<elemType>::getSize(){
	return size;
}

template<class elemType>
void stackQueue<elemType>::enqueue(elemType block){
	input.push(block);
	size++;
}

template<class elemType>
elemType stackQueue<elemType>::dequeue(){
	if(input.empty()&&output.empty()){
		cout<<"Cannot dequeue as the queue is empty."<<endl;
		exit(0);
	}
	if(output.empty()){
		while(!input.empty()){
			output.push(input.top());
			input.pop();
		}
	}
	elemType x=output.top();
	output.pop();
	size--;
	return x;
}

template<class elemType>
elemType stackQueue<elemType>::front(){
	if(input.empty()&&output.empty()){
			cout<<"Nothing s at the front as the queue is empty."<<endl;
		//	exit(0);
		}
		if(output.empty()){
			while(!input.empty()){
				output.push(input.top());
				input.pop();
			}
		}
		elemType x=output.top();
		return x;
}



template<class elemType>
stackQueue<elemType>::~stackQueue() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
