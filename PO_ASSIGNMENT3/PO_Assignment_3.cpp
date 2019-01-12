//============================================================================
// Name        : PO_Assignment_3.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "helper.h"
#include "sorting.h"
using namespace std;

int main() {
	int size;
	cout<<"How big is your array"<<endl;
	cin>>size;
	int* Array= new int[size];

	int choice;
	do{
		fillRandom(Array, size);
		cout << "Choose your sorting algorithm:" << endl;
		cout << "1. Bubble Sort" << endl;
		cout << "2. Selection Sort" << endl;
		cout << "3. Insertion Sort" << endl;
		cout << "4. Merge Sort"  << endl;
		cout << "5. Quick Sort"  << endl;
		cout << "6. Shell Sort" << endl; //Optional
		cout << "Enter 0 to exit" << endl;
		cout << "Your choice: ";
		cin >> choice;

		cout<<"Unsorted Array: ";
		print(Array, size);

		if(choice==1){
			bubbleSort(Array, size);
		}
		if(choice==2){
			selectionSort(Array, size);
		}
		if(choice==3){
			insertionSort(Array, size);
		}
		if(choice==4){
			mergeSort(Array, 0, size);
		}
		if(choice==5){
			quickSort(Array, 0, size);
		}
		if(choice==6){
			shellSort(Array, size);
		}
		cout<<"Sorted Array: ";
		print(Array, size);

	}while(choice!=0);
	delete [] Array;
	return 0;
}
/*How big is your array
6
Choose your sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Shell Sort
Enter 0 to exit
Your choice: 1
Unsorted Array: 41, 18467, 6334, 26500, 19169, 15724,
Sorted Array: 41, 6334, 15724, 18467, 19169, 26500,
Choose your sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Shell Sort
Enter 0 to exit
Your choice: 2
Unsorted Array: 11478, 29358, 26962, 24464, 5705, 28145,
Sorted Array: 5705, 11478, 24464, 26962, 28145, 29358,
Choose your sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Shell Sort
Enter 0 to exit
Your choice: 3
Unsorted Array: 23281, 16827, 9961, 491, 2995, 11942,
Sorted Array: 491, 2995, 11942, 23281, 23281, 23281,
Choose your sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Shell Sort
Enter 0 to exit
Your choice: 4
Unsorted Array: 4827, 5436, 32391, 14604, 3902, 153,
Sorted Array: 153, 3902, 4827, 5436, 14604, 32391,
Choose your sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Shell Sort
Enter 0 to exit
Your choice: 5
Unsorted Array: 292, 12382, 17421, 18716, 19718, 19895,
Sorted Array: 17421, 292, 19718, 18716, 15406992, 19895,
Choose your sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Shell Sort
Enter 0 to exit
Your choice: 6
Unsorted Array: 5447, 21726, 14771, 11538, 1869, 19912,
Sorted Array: 1869, 5447, 11538, 14771, 19912, 21726,
Choose your sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Shell Sort
Enter 0 to exit
Your choice: 0
*/

