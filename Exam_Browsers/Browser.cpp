/*
 * Browser.cpp
 *
 *  Created on: Nov 1, 2018
 *      Author: prabj
 */

#include "Browser.h"
#include <iostream>


Browser::Browser() {
	num_tabs=0;
	current_tab_index=-1;
}
void Browser::switchToTab(unsigned int location){
	if(location<0||location>current_tab_index){
		cout<<"Invalid location"<<endl;
	}
	else{
	   current_tab_index=location;
	}
}

void Browser::openTab(BrowserTab block){
	num_tabs++;
	current_tab_index++;
	tabs[current_tab_index]=block;
}
unsigned int Browser:: getCurrentTabIndex(){
	return current_tab_index;
}

unsigned int Browser:: getNumTabs(){
	return num_tabs;
}

BrowserTab* Browser::getCurrentTab(){
	return tabs;
}
void Browser::closeCurrentTab(){
	BrowserTab temp[32];
	int i=0;
	while(i!=current_tab_index){
		temp[i]=tabs[i];
		i++;
	}
	for(int j=0;j<current_tab_index-1;j++){
		tabs[j]=temp[j];
	}
}
Browser::~Browser() {
	// TODO Auto-generated destructor stub
}
