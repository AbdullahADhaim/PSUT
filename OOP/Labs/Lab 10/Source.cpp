#include <iostream>
#include <string>
#include "Cake.h"
#include "CheeseCake.h"
#include "CupCake.h"
using namespace std;

int main() {
	Cake *cakePtr;
	int c; 
	cout << "Please Choose Type Of Cake: 1)Cup Cake 2)Cheese Cake " << endl;
	cin >> c;
	if (c == 1) {
		cakePtr = new CupCake("Cup Cake ");
		
	}
	if (c == 2) {
		cakePtr = new CupCake("Cheese Cake");
	}
	cakePtr->prepare();
	delete cakePtr; 
	return 0;
}