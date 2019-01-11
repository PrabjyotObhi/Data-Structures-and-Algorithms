/*
 * LinkedList.cpp
 *
 *  Created on: Sep 19, 2018
 *      Author: prabj
 */

#include "LinkedList.h"
#include <iostream>
namespace std{

template<class elemType>
LinkedList<elemType>::LinkedList() {
	head= 0;
	current=0;
	temp=0;
	size=0;

}
template<class elemType>
bool LinkedList<elemType> :: isEmpty() const {
	if(head==0){
		cout<<"The head points to nothing, the list is empty"<<endl;
		return true;
	}
	else{
		cout<<"The head points to something, so the list is not empty."<<endl;
		return false;
	}
}
template<class elemType>
bool LinkedList<elemType> :: isFull() const {
	if(size==20){
		cout<<"The list is full"<<endl;
		return true;
	}
	else{
		cout<<"The list is not full"<<endl;
		return false;
	}
}

template <class elemType>
bool LinkedList<elemType>::isItemAtEqual(int location, elemType block){
	current=head;
	for(int i =0; i<=location; i++){
		if (i==location){
			if(current->data==block){
			cout<<"Yes, "<<block<<" is at location "<<location<<endl;
			return true;
		}
		current=current->next;
		}
	}
	cout<<"No, "<<block<<" is not at location "<<location<<endl;
	return false;
}
template <class elemType>
void LinkedList<elemType>::insertEnd(elemType block){
	nodePtr n= new node;
	n->next=NULL;
	n->data=block;

	if(head!=NULL){
		current=head;
		while(current->next!= NULL){
			current= current->next;
		}
		current->data = block;
	}
	else{
		head = n;
	}
	size++;

}
template <class elemType>
void LinkedList<elemType>::insertAt(int location, elemType block){
	if(location<1){
		cout<<"This is not a valid position to insert a node"<<endl;
	}
	current=head;
	for(int i=1; i<location;i++){
		current=current->next;
	}
	current->data=block;
	//current->next;
	size++;

}
template<class elemType>
int LinkedList<elemType>:: listSize() const{
	cout<<"The current list size is "<<size<<endl;
	return size;
}

template <class elemType>
int LinkedList<elemType>::maxListSize()const{
	cout<<"The max list size is 20"<<endl;
}
template <class elemType>
void LinkedList<elemType>::removeAt(int location){
	nodePtr delPtr=NULL;
	temp=head;
	current=head;
	int i=0;
	while((current != NULL)&& (i!=location)){
		temp=current;
		current= current->next;
		i++;
	}
	if(current==NULL){
		cout<<"Location not found"<<endl;
		delete delPtr;
	}
	else{
		delPtr=current;
		current=current->next;
		temp->next=current;
		delete delPtr;
		cout<<"The value at the location: "<<location<<" was deleted"<<endl;
	}
	size--;
}

template<class elemType>
void LinkedList<elemType>::replaceAt(int location, elemType block){
	current=head;
	temp=NULL;
	int i=0;
	while(current!=NULL &&i!=location){
		i++;
		current=current->next;
	}
	current->data=block;

}

template <class elemType>
void LinkedList<elemType>::print(){
	if(head==NULL){
		return;
	}
	current=head;
	temp=0;
	while(current!=temp){
		cout<<current->data<<" ";
		current=current->next;
	}
}
template <class elemType>
elemType LinkedList<elemType>::retrieveAt(int location){
	if(head ==NULL){
		cout<<"there is no head"<<endl;
	}
	else{
		current= head;
		int i=0;
		while(i<location){
			if(current==NULL){
				cout<<"The current is out of scale"<<endl;
			}
			current=current->next;
			i++;
		}

	}
	cout<< current->data<<endl;
}
template<class elemType>
void LinkedList<elemType>::clearList(){
	head=0;
	current=0;
	cout<<"The head points to nothing, so the list is now cleared."<<endl;
}

template<class elemType>
void LinkedList<elemType>::operator= (const LinkedList &rhs){
	current=head;
	elemType x;
	while(current!=NULL){
		x= current->data;
	}
	return *this;
}
template <class elemType>
LinkedList<elemType>::~LinkedList() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
