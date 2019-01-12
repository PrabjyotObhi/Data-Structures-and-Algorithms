//============================================================================
// Name        : PO_LAB_EXAM2.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"LinkedList"
#include <string>
using namespace std;


string reverseWords(LinkedList<string> list);

int main() {
	LinkedList<string> list; //A quick brown fox jumps over the lazy dog
	list.insertBack("A");
	list.insertBack("quick");
	list.insertBack("brown");
	list.insertBack("fox");
	list.insertBack("jumps");
	list.insertBack("over");
	list.insertBack("the");
	list.insertBack("lazy");
	list.insertBack("dog");

	cout << "Original sentence: ";
	list.print();

	string s = reverseWords(list);
	cout << "Reversed sentence: ";
	cout << s << endl; // Expects: dog lazy the over jumps fox brown quick A

	list.clear();

	list.insertBack("Thursday"); //Thursday

	cout << "Original sentence: ";
	list.print();

	s = reverseWords(list);
	cout << "Reversed sentence: ";
	cout << s << endl; // Expects: Thursday
		//Commented out the above code (lazy dog) to test this one as the base case to make sure i was on the right track
		//Returns:Original sentence: Thursday
		//Reversed sentence: Thursday


	list.clear();

	list.insertBack("Algorithms"); //Algorithms and Data Structure Design
	list.insertBack("and");
	list.insertBack("Data");
	list.insertBack("Structure");
	list.insertBack("Design");

	cout << "Original sentence: ";
	list.print();

	 s = reverseWords(list);
	cout << "Reversed sentence: ";
	cout << s << endl; // Expects: Design Structure Data and Algorithms

	return 0;
}

string reverseWords(LinkedList<string> list){
	string reversed="";

	if(!list.head){
		cout<<"Cannot reverse an empty list, terminating program."<<endl;
		exit(0);
	}
	if(list.head==list.tail){
		reversed=reversed+ list.head->element;
	}
	if(list.head!=list.tail){
		list.head=list.head->next;
		reverseWords(list);

	}
	return reversed;

}

