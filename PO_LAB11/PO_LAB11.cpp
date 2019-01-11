//============================================================================
// Name        : PO_LAB11.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "maxHeap.h"
#include "maxHeap.cpp"
using namespace std;

int main() {
	maxHeap <int> p;
	p.insert(7);
	p.insert(9);
	p.print();
	cout<<endl;
	p.insert(90);
	p.insert(80);
	p.insert(4);
	p.print();
	cout<<endl;
	cout<<p.search(4)<<endl;
	cout<<p.search(0)<<endl;
	p.print();
	return 0;
}
/*9 7
90 80 9 7 4
4
-1
90 80 9 7 4 */
