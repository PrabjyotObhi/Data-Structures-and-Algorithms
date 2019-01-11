//============================================================================
// Name        : PO_LAB9.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include "arrayList.h"
#include "arrayList.cpp"
#include "sortedarrayList.h"
#include "sortedarrayList.cpp"
#include "linkedListList.h"

using namespace std;

int main() {
	unsigned int choice = 0;
	int searchElement;
	arrayList<int> choiceOne;
	sortedarrayList<int> choiceTwo;
	LinkedListList<int> choice3;

	choiceTwo.insert(90);
	choiceTwo.insert(80);
	choiceTwo.insert(100);
	choiceTwo.insert(1000);
	choiceTwo.insert(9000);

	choice3.insertEnd(50);
	choice3.insertEnd(80);



	choiceOne.insertEnd(60);
	choiceOne.insertEnd(70);
	choiceOne.insertEnd(893470);
	choiceOne.insertEnd(80);
	choiceOne.insertEnd(90);
	choiceOne.insertEnd(40);
	choiceOne.insertEnd(30);
	choiceOne.insertEnd(20);
	choiceOne.insertEnd(10);
	choiceOne.insertEnd(700);



	do {
	        cout << "Choose your search type:" << endl;
	        cout << "1. Arrays: Sequential Search without recursion" << endl;
	        cout << "2. Arrays: Sequential Search with recursion" << endl;
	        cout << "3. Ordered Arrays: Binary Search without recursion" << endl;
	        cout << "4. Ordered Arrays: Binary Search with recursion" << endl;
	        cout << "5. Linked List: Search without recursion"  << endl;
	        cout << "6. Linked List: Search with recursion" << endl;
	        cout << "Enter 0 to exit" << endl;
	        cout << "Your choice: ";

	        cin >> choice;
	        cout<<"\nSpecify the element to be searched for: ";
	        cin>>searchElement;
	        if(choice==1){
	        	cout<<"Searching for "<<searchElement<<" using arrays without recursion"<<endl;
	        	if(choiceOne.seqSearchIter(searchElement)){
	        		cout<<"Found at: "<<choiceOne.seqSearchIter(searchElement)<<endl;
	        	}
	        	else{
	        		cout<<"Not found"<<endl;
	        	}
	        }

	        if(choice==2){
	        	cout<<"Searching for "<<searchElement<<" using arrays with recursion"<<endl;
	        	if(choiceOne.seqSearchRec(searchElement)){
	        		cout<<"Found at: "<<choiceOne.seqSearchRec(searchElement)<<endl;
	        	}
	        	else{
	        		cout<<"Not found"<<endl;
	        	}
	        }

	        if(choice==3){
	        	cout<<"Searching for "<<searchElement<<" using ordered arrays without recursion"<<endl;
	        	if(choiceTwo.seqSearchIter(searchElement)){
	        		cout<<"Found at: "<<choiceTwo.seqSearchIter(searchElement)<<endl;
	        	}
	        	else{
	        		cout<<"Not Found"<<endl;
	        	}
	        }

	        if(choice==4){
	        	cout<<"Searching for "<<searchElement<<" using ordered arrays with recursion"<<endl;
	        	if(choiceTwo.seqSearchRec(searchElement)){
	        		cout<<"Found at: "<<choiceTwo.seqSearchRec(searchElement)<<endl;
	        	}
	        	else{
	        		cout<<"Not found"<<endl;
	        	}
	        }

	        if(choice==5){
	        	cout<<"Searching for "<<searchElement<<" using linkedlists without recursion"<<endl;
	        	if(choice3.seqSearchIter(searchElement)){
	        		cout<<"Yes it is in the list"<<endl;
	        	}
	        	else{
	        		cout<<"Not found in the list"<<endl;
	        	}
	        }

	        if(choice==6){
	        	cout<<"Searching for "<<searchElement<<" using linkedlists with recursion"<<endl;
	        	if(choice3.seqSearchRec(searchElement)){
	        		cout<<"Yes it is in the list"<<endl;
	        	}
	        	else{
	        		cout<<"Not found in the list"<<endl;
	        	}
	        }
	 } while(choice!=0);
	return 0;
}

	/*
 * Your choice: 1

Specify the element to be searched for: 80
Searching for 80 using arrays without recursion
Found at: 3

Your choice: 3

Specify the element to be searched for: 1000
Searching for 1000 using ordered arrays without recursion
Found at: 3


Your choice: 2

Specify the element to be searched for: 20
Searching for 20 using arrays with recursion
Found at: 7

Your choice: 4

Specify the element to be searched for: 100
Searching for 100 using ordered arrays with recursion
Found at: 2


Your choice: 5

Specify the element to be searched for: 50
Searching for 50 using linkedlists without recursion
Yes it is in the list

Your choice: 5

Specify the element to be searched for: 9000
Searching for 9000 using linkedlists without recursion
Not found in the list


Your choice: 6

Specify the element to be searched for: 80
Searching for 80 using linkedlists with recursion
Yes it is in the list

Your choice: 6

Specify the element to be searched for: 9000
Searching for 9000 using linkedlists with recursion
Not found in the list

 */
