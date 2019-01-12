//============================================================================
// Name        : PO_LAB_EXAM3.cpp
// Author      : Prabjyot Obhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <fstream>
using namespace std;

#define MAXSTUDENTS 1024


int fibonacciSearch(int* students, int element, int num_students);
int min(int a, int b);
//ADDED &NUM_STUDENTS BECAUSE AFTER WE ADD A STUDENT, WE HAVE TO CHANGE THE TOTAL NUMBER OF STUDENTS IN MAIN AS WELL
void addStudent(int student, int* students, int &num_students);
void addStudents(int* Nstudent, int* students, int NSIZE, int &OSIZE); // Uncomment to implement bonus

/*****************************************************
 * last2f_under returns the last two fibonacci numbers
 * less than or equal to num
 * E.g., if num = 25, f2 = 21 and f1 = 13
 *****************************************************/
void last2f_under(int &f1, int &f2, const int num){
	f1 = 0; f2 = 1;
	while(f2 <= num){
		f2 = f1 + f2;
		f1 = f2 - f1;
	}
}

int read_n_count(string filename, int* students){
	ifstream fin(filename);
	int index = 0;
	while(!fin.eof() && index < MAXSTUDENTS){
		fin >> students[index];
		index++;
	}
	return index;
}

int main() {
	int* students = new int[MAXSTUDENTS];
	int num_students = read_n_count("students.txt", students);
	int* newStudents= new int[MAXSTUDENTS-num_students];
	int num_new_students=read_n_count("C:/Users/prabj/eclipse-workspace/PO_LAB_EXAM3/src/newstudents.txt", newStudents);

	int studentID;
	cout<<"Please input a student ID number:"<<endl;
	cin>>studentID;
	int location=fibonacciSearch(students, studentID, num_students);
	if(location!=-1){
		cout<<"Found the student in the list at location ["<<location<<"]"<<endl;
	}
	else if(location==-1){
		cout<<"The student is not in the list"<<endl;
	}


	int newStudent;
	cout<<"Insert a new student:"<<endl;
	cin>>newStudent;
	addStudent(newStudent, students, num_students);
	cout<<"Current number of students ["<<num_students<<"]";
	cout<<endl<<endl;

	for(int i=0; i<num_students; i++){
			cout<<i<< "["<<students[i]<<"]"<<endl;
		}


	//EXTRA CREDIT
//	for(int i=0; i<num_new_students; i++){
//		cout<<"Inserting ["<<newStudents[i]<<"]"<<endl;
//	}
//	addStudents(newStudents, students, num_new_students, num_students);
//	cout<<endl<<endl<<endl;
//
//	for(int i=0; i<num_students; i++){
//		cout<<i<< "["<<students[i]<<"]"<<endl;
//	}
//
//	cout<<"Current number of students ["<<num_students<<"]";
//	delete [] students;
//	return 0;
}

int min(int a, int b){
	if(a<b){
		return a;
	}
	if(b<a){
		return b;
	}
	if(b==a){
		//doesnt matter because they're equal;
		return a;
	}
}
int fibonacciSearch(int* students, int element, int num_students){
	int fibs2=0;
	int fibs1=1;
	int fib=fibs2+fibs1;
	int offset=-1;

	while(fib<=num_students){
		fibs2=fibs1;
		fibs1=fib;
		fib=fibs1+fibs2;
	}

	while(fib>1){
		int i= min(offset+fibs2, num_students-1);

		if(students[i]<element){
			fib=fibs1;
			fibs1=fibs2;
			fibs2=fib-fibs1;
			offset=i;
		}
		else if(students[i]>element){
			fib=fibs2;
			fibs1=fibs1-fibs2;
			fibs2=fib-fibs1;
		}
		else return i+1;
	}
	if(fibs1&&students[offset+1]==element){
		return offset+1;
	}
	//element not found
	return -1;
}
void addStudent(int student, int* students, int &num_students){
	int temp;
	students[num_students]=student;
	num_students++;
	for(int i=0; i<num_students; i++){
		for(int j=0; j<i; j++){
			if(students[j]>students[j+1]){
				temp=students[j];
				students[j]=students[j+1];
				students[j+1]=temp;
			}
		}
	}
}

void addStudents(int* Nstudent, int* students, int NSIZE, int &OSIZE){
	for(int i=0; i<NSIZE; i++){
		addStudent(Nstudent[i], students, OSIZE);
	}
}

/*
When student is in the list:
Please input a student ID number
1207200292
Found the student in the list at location [25]

when not in list:
Please input a student ID number:
0000000000
The student is not in the list


ADD STUDENT:
Please input a student ID number:
1208709895
Found the student in the list at location [30]
Current number of students [30]
Insert a new student:
1208709898
Current number of students [31]

0[1200000041]
1[1200308467]
2[1200606334]
3[1200906500]
4[1201209169]
5[1201505724]
6[1201801478]
7[1202109358]
8[1202406962]
9[1202704464]
10[1203005705]
11[1203308145]
12[1203603281]
13[1203906827]
14[1204209961]
15[1204500491]
16[1204802995]
17[1205101942]
18[1205404827]
19[1205705436]
20[1206002391]
21[1206304604]
22[1206603902]
23[1206900153]
24[1207200292]
25[1207502382]
26[1207807421]
27[1208108716]
28[1208409718]
29[1208709895]
30[1208709898]
Current number of students [31]



INSERT STUDENTS:

Inserting [1200008703]
Inserting [1200303811]
Inserting [1200601322]
Inserting [1200900333]
Inserting [1201207673]



0[1200000041]
1[1200008703]
2[1200308467]
3[1200606334]
4[1200906500]
5[1200303811]
6[1201209169]
7[1201505724]
8[1201801478]
9[1202109358]
10[1202406962]
11[1202704464]
12[1203005705]
13[1203308145]
14[1203603281]
15[1203906827]
16[1204209961]
17[1204500491]
18[1204802995]
19[1205101942]
20[1205404827]
21[1200601322]
22[1205705436]
23[1206002391]
24[1206304604]
25[1206603902]
26[1206900153]
27[1207200292]
28[1207502382]
29[1200900333]
30[1207807421]
31[1208108716]
32[1208409718]
33[1201207673]
34[1208709895]
Current number of students [35]



ALL OF THEM TOGETHER:
Please input a student ID number:
1202704464
Found the student in the list at location [10]
Insert a new student:
1202799999
Current number of students [31]

Inserting [1200008703]
Inserting [1200303811]
Inserting [1200601322]
Inserting [1200900333]
Inserting [1201207673]



0[1200000041]
1[1200008703]
2[1200308467]
3[1200606334]
4[1200906500]
5[1201209169]
6[1200303811]
7[1201505724]
8[1201801478]
9[1202109358]
10[1202406962]
11[1202704464]
12[1202799999]
13[1203005705]
14[1203308145]
15[1203603281]
16[1203906827]
17[1204209961]
18[1204500491]
19[1204802995]
20[1205101942]
21[1205404827]
22[1200601322]
23[1205705436]
24[1206002391]
25[1206304604]
26[1206603902]
27[1206900153]
28[1207200292]
29[1207502382]
30[1200900333]
31[1207807421]
32[1208108716]
33[1208409718]
34[1201207673]
35[1208709895]
Current number of students [36]
*/
