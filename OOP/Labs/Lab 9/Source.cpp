/*
	Name: Abdullah Abu Dhaim
	ID: 20150889
	OOP Lab 9 - Section 2
*/
#include <iostream>
#include "Book.h"
#include "EBook.h"
#include "NormalBook.h"
using namespace std;
int main() {

	Book b("How to Suicide", "Abdullah Lopez", 2017, 300);
	NormalBook n("How To Study", "Khaleel Washington", 2013, 213 , "Paperback" , 5 );
	EBook e("How To Swim", "Nizar Newton", 2018, 213, "pdf", 15);
	cout << "Title is: " << e.getTitle() << endl; 
	b.printDetails();
	n.printDetails();
	e.printDetails();


	return 0;
}