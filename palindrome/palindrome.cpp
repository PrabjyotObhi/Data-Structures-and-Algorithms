//============================================================================
// Name        : palindrome.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool checkPalindrome( const string &s);

int main() {
	string test="taco Cat";
	if (checkPalindrome(test) == true)
	        cout << "The word "<<test<<" is a palindrome" << endl;
	    else
	        cout << "The word "<<test<<" is NOT a palindrome" << endl;
	return 0;

	/*Test this:
		The word ojadslkf is NOT a palindrome
		The word mom is a palindrome
		The word dad is a palindrome
		The word aksdfhjlkadsfhlkasdfhj is NOT a palindrome
		The word racecar is a palindrome
		The word utopia is NOT a palindrome
	Further Test Code to find bugs:
		The word Racecar is NOT a palindrome
		The word mOoom is NOT a palindrome
	*/
	//Should convert all letters to lower case to fix the bugs
}



bool checkPalindrome( const string &s){
	//Psuedocode from palindrome.txt
	string p= s;
	int length= p.length();
	string first = p.substr(0,1);
	string last = p.substr((length - 1), 1);

	if(first==last){
	    p = p.substr((0 + 1), (length - 2));
	    if (p.length() <= 1){
	    	return true;
	    	}
	    	return checkPalindrome(p);
	 	}

		else{
		return false;
		}
}
