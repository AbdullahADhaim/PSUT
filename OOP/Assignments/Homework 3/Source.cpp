#include<iostream>
#include"Product.h"
#include"Clothes.h"
#include"Food.h"
#include<string>

using namespace std;

int main() {

	int n , type , quan , counterPrice=0 , mCounter = 0  , fCounter = 0 ;
	string desc;
	float price; 
	char *temp = NULL , sex;
	cout << "Enter number of products you want to create: ";
	cin >> n; 
	Product **products = new Product*[n];
	for (int i = 0; i < n; i++) {
		cout << "What do you like your product #" << i + 1 << " to be ? \n1)Food 2)Clothes ";
		cin >> type;

		if (type == 1) 
			products[i] = new Food();
		if (type == 2) {
			products[i] = new Clothes();
			cout << "Enter The Sex Of The Clothes(M,F): " << endl; 
			cin >> sex; 
			if (sex == 'M') mCounter++;
			else if (sex == 'F')fCounter++;
		}
			


			cout << "Enter Desscription (enter ; to terminate the string): ";
			getline(cin, desc, ';');
			//cin >> desc;
			temp = new char[desc.length()+1];
			for (int x = 0; desc[x] != '\0'; x++) 
				temp[x] = desc[x]; 
			temp[desc.length()] = '\0';
			
			products[i]->setDescription(temp, desc.length() + 1);
			//cout <<products[i]->getDescription() << endl;
			cout << "Enter Quantity , Unit Price: "; 
			cin >> quan >> price;
			products[i]->setQuantity(quan); 
			products[i]->setUnitPrice(price);

			if (price > 5 && type == 1) counterPrice++;

			products[i]->print();

		delete[] temp; 
	}

	cout << "The Number Of Food That Has Price Over Than 5 is: " << counterPrice << endl;
	cout << ((mCounter > fCounter) ? ("We Have More Male Clothes") : ("We Have More Female Clothes"))<< endl; 
	
	delete[] products; 

	return 0;
}