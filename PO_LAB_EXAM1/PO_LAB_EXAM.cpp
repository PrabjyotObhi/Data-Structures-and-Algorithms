//============================================================================
// Name        : PO_LAB_EXAM.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "MyPoint.h"
#include "myLine.h"
#include "myLine.cpp"
using namespace std;

int main() {
	ifstream inFile;
	ofstream outFile;
	MyPoint point1;
	MyPoint point2;
	MyPoint point3;
	MyPoint point4;
	MyPoint point5;
	MyPoint point6;
	MyPoint point7;
	MyPoint point8;
	inFile.open("C:/Users/prabj/eclipse-workspace/PO_LAB_EXAM/src/lines");
	outFile.open("C:/Users/prabj/eclipse-workspace/PO_LAB_EXAM/output");
	if(!inFile){
		cout<<"File not found"<<endl;
		exit(1);
	}
	else{
		inFile>>point1>>point2>>point3>>point4>>point5>>point6>>point7>>point8;
	}
	myLine line1=myLine(point1, point2);
	myLine line2=myLine(point3, point4);
	myLine line3=myLine(point5, point6);
	myLine line4=myLine(point7, point8);
	double length1=getLength(line1);
	double length1=getLength(line1);
	double length1=getLength(line1);
	double length1=getLength(line1);
	//ran out of time
	return 0;
}
