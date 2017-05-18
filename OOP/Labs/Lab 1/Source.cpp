#include <iostream>
using namespace std;

// Abdullah Abu Dhaim 20150889

float Find_Max_Mark(float a[]) {
	float max = a[0];
	if (a[1] > max) max = a[1] ;
	if (a[2] > max) max = a[2];

	return max;
}

void swap_mark1(float mark, float newMark) {
	mark = newMark;
}
void swap_mark(float &mark, float newMark) {
	mark = newMark;
	}

void swap_mark(float *mark, float newMark) {
	*mark = newMark;
}

int main() {
	float marks[3];
	for (int i = 0; i < 3; i++) {
		cout << "Enter Student " << i + 1 << " Mark Please: " << endl;
		cin >> marks[i];
	}
	cout << "The Maximum mark is :  " << Find_Max_Mark(marks) << endl;

	swap_mark1(marks[0], (float) 90);
	swap_mark(marks[1], (float) 95);
	swap_mark(&marks[2], (float) 99);

	
	cout << "New Marks: " << endl;
	for (int i = 0; i < 3 ; i++) 
		cout << "Student " << i + 1 << " Mark: \n" << marks[i] << endl;
	cout << "The Maximum mark is :  " << Find_Max_Mark(marks) << endl;

	/*
	* This output is like that because in the first swap function we called by value so the the 
	* value won't be changed , but when we called by refrence and by pointer their valuses were changed .
	*/


	
}