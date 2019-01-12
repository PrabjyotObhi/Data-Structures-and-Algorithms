
#ifndef SORTING_H_
#define SORTING_H_

typedef unsigned int uint;

void swap (int &a, int &b);
void bubbleSort(int* Array, const uint size);
void selectionSort(int* Array, const uint size);
void insertionSort(int* Array, const uint size);
void merge(int* Array, int lowerBound, int upperBound, int mid);
void mergeSort(int* Array, int lowerBound, const uint size);
int partition(int* Array, int lowerBound, int upperBound);
void quickSort(int* Array, int lowerBound, const uint size);
void shellSort(int* Array, const uint size);



void swap (int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void bubbleSort(int* Array, const uint size){
	for(uint i=0; i<size; i++){
		for(uint j=0; j<size-1; j++){
			if(Array[j]>Array[j+1]){
				swap(Array[j], Array[j+1]);
			}
		}
	}
}

void selectionSort(int* Array, const uint size){
	for(uint i=0; i<size; i++){
		for(uint j=i+1; j<size;j++){
			if(Array[j]<Array[i]){
				swap(Array[j], Array[i]);
			}
		}
	}
}

void insertionSort(int* Array, const int size){
	int i, temp,j;
	for(i=1; i<size; i++){
		if(Array[i]<Array[i-1]){
			temp=Array[i];
			j=i-1;

			do{
				Array[j+1]=Array[j];
				j=j-1;
			}while(j>0 &&Array[j-1]>temp);
		}
		Array[j]=temp;
	}
}

void merge(int *Array, int lowerBound, int upperBound, int mid) {
	int i = lowerBound;
	int j = mid + 1;
	int k = 0;
	int temp[upperBound+1-lowerBound];

	while (i <= mid && j <= upperBound) {
		if (Array[i] < Array[j]) {
			temp[k] = Array[i];
			i=i+1;
			k=k+1;
		}
		else {
			temp[k] = Array[j];
			j=j+1;
			k=k+1;
		}
	}

	while (i <= mid) {
		temp[k] = Array[i];
		i=i+1;
		k=k+1;
	}

	while (j <= upperBound) {
		temp[k] = Array[j];
		j=j+1;
		k=k+1;
	}

	for(i = lowerBound; i <= upperBound; i++) {
		Array[i] = temp[i - lowerBound];
	}
}

void mergeSort(int* Array, int lowerBound, const int size) {
	int mid = 0;
	if (lowerBound < size) {
		mid = (size + lowerBound)/2;
		mergeSort(Array, lowerBound, mid);
		mergeSort(Array, mid+1, size);
		merge(Array, lowerBound, size, mid);
	}
}


int partition(int* Array, int lowerBound, int upperBound) {
	int partitioned = Array[upperBound];
	int j = lowerBound;

	for (int i = lowerBound; i < upperBound; i++) {
		if (Array[i] < partitioned) {
			j++;
			int temp = Array[j];
			Array[j] = Array[i];
			Array[i] = temp;
		}
	}
	int temp = Array[j+1];
	Array[j+1] = Array[upperBound];
	Array[upperBound] = temp;
	return j+1;
}

void quickSort(int* Array, int lowerBound, const int size) {
	if (lowerBound < size) {
		int partitioned = partition(Array, lowerBound, size);

		quickSort(Array, lowerBound, partitioned-1);
		quickSort(Array, partitioned+1, size);
	}
}

void shellSort(int* Array, const int size){
	for(int mid=size/2; mid>0; mid=mid/2){
		for(int i=mid; i<size; i++){
			int temp=Array[i];
			int j;
			for(j=i; j>=mid && Array[j-mid]>temp; j-=mid){
				Array[j]=Array[j-mid];
			}
			Array[j]=temp;
		}

	}
}



#endif /* SORTING_H_ */
