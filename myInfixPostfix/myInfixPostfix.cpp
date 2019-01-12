//============================================================================
// Name        : myInfixPostfix.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <string>
#include "arrayStack.cpp"
#include "arrayStack.h"
using namespace std;

bool isOperator(char ch);
bool isOperand(char ch);
bool isLeftParenthesis(char ch);
bool isRightParenthesis(char ch);
bool flag(char ch);
int getOperatorWeight(char op);
bool hasHigherPrecedence(char op1, char op2);
string inFixToPostFix(string expression);
int main() {
//TEST THE ISOPERATOR
	if(isOperator('9')){
		cout<<"SO FAR "<<endl;
	}
	if(isOperator('~')){
		cout<<"This would be bad"<<endl;
	}
	else{
		cout<<"SO GOOD"<<endl;
	}
		//Returns:so far
				//so good
//TEST THE ISOPERAND
	if(isOperand('+')){
		cout<<"HAKUNA"<<endl;
	}
	else{
		cout<<"Fix the isOperator function"<<endl;
	}
	if(isOperand('$')){
		cout<<"Fix the isOperator function, in the dollar sign"<<endl;
	}
	else{
		cout<<"MATATA"<<endl;
	}
		//Returns: HAKUNA
				 //MATATA

//TEST THE ISLEFTPARANTHESIS
	if(isLeftParenthesis('(')){
		cout<<"BAT"<<endl;
	}
	else{
		cout<<"Fix isleftparenthesis, bat"<<endl;
	}
	if(isLeftParenthesis('6')){
		cout<<"Fix isleftparenthesis, 6"<<endl;
	}
	else{
		cout<<"MAN"<<endl;
	}
		//Returns: Bat
				 //man
//TEST THE ISRIGHTPARANTHESIS
	if(isRightParenthesis(')')){
		cout<<"MAC"<<endl;
	}
	else{
		cout<<"Fix isrightparenthesis, mac"<<endl;
	}
	if(isRightParenthesis('6')){
		cout<<"Fix isrightparenthesis, 6"<<endl;
	}
	else{
		cout<<"BOOK"<<endl;
	}
		//Returns: Mac
				 //book
//TEST GET WEIGHT
	char plus='+';
	char minus= '-';
	char multiply= '*';
	char divide = '/';

	cout<<"Weight for ["<<plus<<"] is: "<<getOperatorWeight(plus)<<endl;
	cout<<"Weight for ["<<minus<<"] is: "<<getOperatorWeight(minus)<<endl;
	cout<<"Weight for ["<<multiply<<"] is: "<<getOperatorWeight(multiply)<<endl;
	cout<<"Weight for ["<<divide<<"] is: "<<getOperatorWeight(divide)<<endl;
		/*Returns:
		 * 		Weight for [+] is: 1
				Weight for [-] is: 1
				Weight for [*] is: 2
				Weight for [/] is: 2
		 */
//TEST THE INFIXTOPOSTFIX WITH MY STACK FUNCTION
	string test="A + B - C";
	cout<<"Test 1: "<<inFixToPostFix(test)<<endl;
		//Returns: AB+C-

	string test2="(A + B) * C";
	cout<<"Test 2: "<<inFixToPostFix(test2)<<endl;
		//Returns: AB+C*

	string test3="(A + B) * (C - D)";
	cout<<"Test 3: "<<inFixToPostFix(test3)<<endl;
		//Returns: AB+CD-*

	string test4="A + ((B + C) * (E - F) - G) / (H - I)";
	cout<<"Test 4: "<<inFixToPostFix(test4)<<endl;
		//Returns: ABC+EF-*G-HI-/+

	string test5="A + B * (C + D) - E / F * G + H";
	cout<<"Test 5: "<<inFixToPostFix(test5)<<endl;
		//Returns: ABCD+*+EF/G*-H+

//USING MY STACK DEFINITION RETURNS THE SAME VALUES AS THE STANDARD C++ STACK FROM THEIR LIBRARY



	//End of main function
	return 0;
}


//************************************************************************************************************//
//Define isOperator
bool isOperator(char ch){
	//All possible characters
	if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		return true;
	}
	else{
		return false;
	}

}
//Define isOperand
bool isOperand(char ch){
	if((ch=='+')||(ch=='-')||(ch=='/')||(ch=='*')||(ch=='^')){
		return true;
	}
	else{
		return false;
	}
}
//Define isLeftParanthesis
bool isLeftParenthesis(char ch){
	if(ch=='('){
		return true;
	}
	else{
		return false;
	}
}
//Define isRightParanthesis
bool isRightParenthesis(char ch){
	if(ch==')'){
		return true;
	}
	else{
		return false;
	}
}
//Defines Flag for things that are nothing
bool flag(char ch){
	if (!isOperand(ch) || isOperator(ch) || !isLeftParenthesis(ch) || !isRightParenthesis(ch)) {
		return false;
	}
	else{
		return true;
	}
}
//Defines getOperatorWeight
int getOperatorWeight(char op){
	int weight=-1;
	switch(op){
		case'+':
		case'-':
			weight=1;
		break;
		case'*':
		case'/':
			weight=2;
		break;
	}
	return weight;
}
//Defines hasHigherPrecedence
bool hasHigherPrecedence(char op1, char op2){
	int opWeight1=getOperatorWeight(op1);
	int opWeight2=getOperatorWeight(op2);
	if(opWeight1==opWeight2){
		return true;
	}
	if(opWeight1>opWeight2){
		return true;
	}
	else{
		//Ff op2 has a higher precedence than op1, it returns false
		return false;
	}
}
//Defines inFixToPostFix
string inFixToPostFix(string expression){
	arrayStack<char> S;
	string postFix="";
	for(int i=0; i<expression.length(); i++){
		if((expression[i]==' ')||(expression[i]==',')){
			continue;
		}
		else if(isOperand(expression[i])){
			while((!S.isEmpty())&&(S.top()!='(')&&(hasHigherPrecedence(S.top(), expression[i]))){
				postFix+=S.top();
				S.pop();
			}
			S.push(expression[i]);
		}
		else if(isOperator(expression[i])){
			postFix +=expression[i];
		}
		else if((expression[i] == '(')){
			S.push(expression[i]);
		}
		else if(expression[i] == ')'){
			while((!S.isEmpty()) && (S.top() != '(')){
				 postFix += S.top();
				 S.pop();
			}
			S.pop();

		}
	}
	while(!S.isEmpty()) {
	    postFix += S.top();
	    S.pop();
	}

	return postFix;
}
