
#ifndef HELPER_H_
#define HELPER_H_

#include <iostream>
using namespace std;

void fillRandom(int *Array, const unsigned int size){
	for(unsigned int i = 0; i < size; i++){
		int x = rand();
		Array[i]=x;
	}
}

void print(int *Array, const unsigned int size){
	for(unsigned int i = 0; i < size; i++){
		cout << Array[i] << ", ";
	}
	cout << endl;
}

#endif /* HELPER_H_ */
