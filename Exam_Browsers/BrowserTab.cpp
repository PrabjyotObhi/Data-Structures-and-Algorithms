/*
 * BrowserTab.cpp
 *
 *  Created on: Nov 1, 2018
 *      Author: prabj
 */

#include "BrowserTab.h"
#include <iostream>


BrowserTab::BrowserTab() {
	histSize=-1;
}

void BrowserTab::visitPage(string block){
	histSize++;
	backStack.push(block);
	history[histSize]="Visited: "+block;
}

string BrowserTab:: getCurrentPage(){
	string temp=backStack.top();
	return temp;
}

void BrowserTab:: back(){
	histSize++;
	forwardStack.push(backStack.top());
	backStack.pop();
	string temp=backStack.top();
	history[histSize]="Back to: "+temp;
}

void BrowserTab:: forward(){
	histSize++;
	string temp= forwardStack.top();
	history[histSize]="Forwarded to: "+temp;
	forwardStack.pop();

}

void BrowserTab::printHistory(){
	for(int i=0;i<histSize; i++){
		cout<<history[i]<<endl;
	}
}
BrowserTab::~BrowserTab() {
	// TODO Auto-generated destructor stub
}

