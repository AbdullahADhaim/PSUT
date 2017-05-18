#include<iostream>
#include<stdlib.h>
using namespace std;

const int MAX_SIZE = 20;

void Fill_Odd(int a[] , int size) {
	for (int i = 1; i < size; i += 2)
		a[i] = rand() % 51 + 50;
}
void Fill_Even(int a[], int size) {
	int g;
	for (int i = 0; i < size; i += 2) {
		cout << "Enter Mark of student number "  << i + 1 << endl;
		cin >> g;
		a[i] = g;
	}

}

void Print_Array(int a[], int size) {
	for (int i = 0; i < size; i++)
		cout << "Student "<< i + 1 << " marks " << a[i]  << endl;
}

void Sort_Array(int a[], int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j]=a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int Find_Student_In_Range(int a[], int size , int startRange , int MaximumRange) {
	int c = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] >= startRange && a[i] <= MaximumRange)
		c++;
	}
			return c;
}

int BelowAvg(int a[], int size) {
	int sum = 0;
	int c = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	int avg = sum / size;

	for(int i = 0 ; i<size ; i++)
	if(a[i] < avg)
		c++;

	return c;
}

void Min_Max(int a[], int size, int &min, int &max) {
	for (int i = 0; i < size; i++) {
	if (a[i] > max) max = a[i];
	if (a[i] < min) min = a[i];
}
}

void Copy_Add(int a[],  int size) {
	int b[MAX_SIZE];
	for (int i = 0; i < size; i++)
		b[i] = a[i] +50;
	Print_Array(b, size);

}

int main() {
	
	int a[MAX_SIZE];
	int min = 100 , max = 0; 

	Fill_Odd(a, MAX_SIZE);
	Fill_Even(a, MAX_SIZE);
	cout << "Before Sorting " << endl;
	Print_Array(a, MAX_SIZE);
	Min_Max(a, MAX_SIZE, min, max);
	Sort_Array(a, MAX_SIZE);
	cout << "After Sorting " << endl;
	Print_Array(a, MAX_SIZE);

	int mi, ma;
	cout << "Enter Minimum mark range" << endl;
	cin >> mi;
	cout << "Enter Max mark range" << endl;
	cin >> ma;
	cout << "Number of students in range " << mi << "-" << ma << " = " << Find_Student_In_Range(a , MAX_SIZE , mi ,ma) << endl;
	cout << "Number of students below average "<< BelowAvg(a, MAX_SIZE) << endl;
	cout << "Min " << min << endl;
	cout << "Max " << max << endl;

	cout << "After copying and adding 50 "  << endl;
	Copy_Add(a, MAX_SIZE);


	system("pause");
}