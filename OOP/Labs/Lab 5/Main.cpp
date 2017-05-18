#include <iostream>
#include "TextMsg.h"
using namespace std;

void sort(TextMsg t[], int size, char criteria) {

	

	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - i - 1; j++)
			if (t[j].compareTo(t[j + 1] , criteria) == 1)
			{
				TextMsg swap = t[j];
				t[j] = t[j + 1];
				t[j + 1] = swap;
			}

}

int main() {
	
	string from, to, date, text; 
	const int size = 5;
	TextMsg m[size];
	for (int i = 0; i < size; i++) {
		cout << "From: ";
		cin >> from;
		cout << "To: ";
		cin >> to;
		cout << "Date: ";
		cin >> date;
		cout << "Text: ";
		getline(cin, text, ';');
		m[i].setFrom(from);
		m[i].setTo(to);
		m[i].setDate(date);
		m[i].setText(text);
		
	}

	cout << "Sorting: " << endl; 
	sort(m, size, 'F');
	for (int i = 0; i < size; i++)
		m[i].print();
	
	cout << "Sorting: " << endl;
	sort(m, size, 'T');
	for (int i = 0; i < size; i++)
		m[i].print();

	cout << "Sorting: " << endl;
	sort(m, size, 'D');
	for (int i = 0; i < size; i++)
		m[i].print();

	// The copy constructor will be called in sorting part  
	// suppose we have "Hello()" function wich returns TextMsg in the class, when we initialize a new object to equal the Hello() fuction
	// the copy constructor will be called , ex: TextMsg a = b.Hello() ; 

	m[0] = m[1].Hello(); // just in case yo wanna test  :) 
	return  0;
}