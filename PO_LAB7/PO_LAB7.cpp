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
using namespace std;

//Function Declarations
bool isOperator(char ch);
bool isOperand(char ch);
bool isLeftParenthesis(char ch);
bool isRightParenthesis(char ch);
bool flag(char ch);
int getOperatorWeight(char op);
bool hasHigherPrecedence(char op1, char op2);
string inFixToPostFix(string expression);

double evaluatePostFix(string expression);


int main() {
//TEST THE ISOPERATOR
	if(isOperator('9')){
		cout<<"So far "<<endl;
	}
	if(isOperator('~')){
		cout<<"This would be bad"<<endl;
	}
	else{
		cout<<"So good"<<endl;
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
		cout<<"Bat"<<endl;
	}
	else{
		cout<<"Fix isleftparenthesis, bat"<<endl;
	}
	if(isLeftParenthesis('6')){
		cout<<"Fix isleftparenthesis, 6"<<endl;
	}
	else{
		cout<<"man"<<endl;
	}
		//Returns: Bat
				 //man
//TEST THE ISRIGHTPARANTHESIS
	if(isRightParenthesis(')')){
		cout<<"Mac"<<endl;
	}
	else{
		cout<<"Fix isrightparenthesis, mac"<<endl;
	}
	if(isRightParenthesis('6')){
		cout<<"Fix isrightparenthesis, 6"<<endl;
	}
	else{
		cout<<"book"<<endl;
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
//TEST THE INFIXTOPOSTFIX
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


//DOES IT WORK WITH NUMBERS:
	string test6="( 9 + 8) * 10";
	cout<<"Test 6: "<<inFixToPostFix(test6)<<endl;
		//Returns: Test 6: 98+10*
	string test7="2 + 10 * 5";
	cout<<"Test 7: "<<inFixToPostFix(test7)<<endl;
		//Returns: Test 7: 2105*+
	//Yes it does, now make the evaluatepostfix function

//TEST THE EVALUATEPOSTFIX FUNCTION
	string test8="25+";
	cout<<"Evaluating \"25+\": "<<evaluatePostFix(test8)<<endl;
		//Returns:Evaluating "25+": 7

	string test9="98*";
	cout<<"Evaluating \"98*\": "<<evaluatePostFix(test9)<<endl;
		//Returns:Evaluating "98*": 72

	string test10="99/";
	cout<<"Evaluating \"99/\": "<<evaluatePostFix(test10)<<endl;
		//Returns:Evaluating "99/": 1

	string test11="99%";
	cout<<"Evaluating \"99%\": "<<evaluatePostFix(test11)<<endl;
		//Returns:Evaluating "99%": 0

	string test12="59%";
	cout<<"Evaluating \"59%\": "<<evaluatePostFix(test12)<<endl;
		//Evaluating "59%": 5

	string test13= "14-";
	cout<<"Evaluating \"14-\": "<<evaluatePostFix(test13)<<endl;
		//Returns:Evaluating "14-": -3





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
	stack<char> S;
	string postFix="";
	for(int i=0; i<expression.length(); i++){
		if((expression[i]==' ')||(expression[i]==',')){
			continue;
		}
		else if(isOperand(expression[i])){
			while((!S.empty())&&(S.top()!='(')&&(hasHigherPrecedence(S.top(), expression[i]))){
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
			while((!S.empty()) && (S.top() != '(')){
				 postFix += S.top();
				 S.pop();
			}
			S.pop();

		}
	}
	while(!S.empty()) {
	    postFix += S.top();
	    S.pop();
	}

	return postFix;
}
//Lab 7 Portion

double evaluatePostFix(string expression){
	stack<double> evaluate;
	int i=0;
	int length=expression.length();

	while(i<length){
		if(isOperator(expression[i])){
			double temp;
			temp=expression[i]-'0';
			evaluate.push(temp);
		}
		if(expression[i]=='+'){
			double operand1, operand2, result;
			operand2=evaluate.top();
			evaluate.pop();
			operand1=evaluate.top();
			evaluate.pop();
			result=operand1+operand2;
			evaluate.push(result);
		}
		if(expression[i]=='-'){
			double operand1, operand2, result;
			operand2=evaluate.top();
			evaluate.pop();
			operand1=evaluate.top();
			evaluate.pop();
			result=operand1-operand2;
			evaluate.push(result);
		}
		if(expression[i]=='*'){
			double operand1, operand2, result;
			operand2=evaluate.top();
			evaluate.pop();
			operand1=evaluate.top();
			evaluate.pop();
			result=operand1*operand2;
			evaluate.push(result);
		}
		if(expression[i]=='/'){
			double operand1, operand2, result;
			operand2=evaluate.top();
			evaluate.pop();
			operand1=evaluate.top();
			evaluate.pop();
			result=operand1/operand2;
			evaluate.push(result);
		}
		if(expression[i]=='%'){
			int operand1, operand2, result;
			operand2=evaluate.top();
			evaluate.pop();
			operand1=evaluate.top();
			evaluate.pop();
			result=operand1%operand2;
			evaluate.push(result);
		}
		i++;
	}
	return (evaluate.top());
}


