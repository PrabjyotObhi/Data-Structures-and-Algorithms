//============================================================================
// Name        : decimalToBinary.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

int main() {
	//Create space, and take in a value
	int convert;
	cout<<"Enter a value to convert to binary: "<<endl;
	cin>>convert;
	if(convert==0){
		cout<<"In binary, the value is: 0000"<<endl;
	}
	else{
		stack<int> check;

		while(convert>0){
			check.push(convert%2);
			convert=convert/2;
		}

		cout<<"In binary, the value is: ";

		while(check.size()>0){
			cout<<check.top();
			check.pop();
		}

	}
//Test:
/* 	Enter a value to convert to binary
	12
	In binary, the value is: 1100

	Check edge of 0.
		Enter a value to convert to binary
		0
		In binary, the value is:

	Fix this with an if statement checking the initial value inputted

	Enter a value to convert to binary
	0
	In binary, the value is: 0000



*/

	return 0;
}
