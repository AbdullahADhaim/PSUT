#include<iostream>
#include"Product.h"
#include"Clothes.h"
#include"Food.h"
#include<string>

using namespace std;

int main() {

	int n , type;
	cout << "Enter number of products you want to create: ";
	cin >> n; 
	Product **products = new Product*[n];
	for (int i = 0; i < n; i++) {
		cout << "What do you like your product #" << i + 1 << "to be ? \n1)Food 2)Clothes ";
		cin >> type;
		if (type == 1) {
			products[i] = new Food();
			cout << "Enter Desscription: "; 

		}
		if (type == 2) {
			products[i] = new Clothes();
		}



	}


	return 0;
}