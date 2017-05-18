#include "Product.h"
#include <iostream>
using namespace std;
int Product::productNum = 0;

Product::Product()
{
	productNum = productNum++;
	description = NULL;
	quantity = 0;
	unitPrice = 0;
}

Product::Product(char d[], int size , int q , float up)
{
	productNum = productNum++;
	setDescription(d, size);
	quantity = q;
	unitPrice = up;
}



Product::~Product()
{
	delete[] description; 
}


void Product::setDescription(char d[] , int size) {
	description = new char[size + 1]; 
	for (int i = 0; i < size; i++) 
		description[i] = d[i];
	description[size] = '\0';
	
}
void Product::setQuantity(int q ) {
	quantity = q; 
}
void Product::setUnitPrice(float u) {
	unitPrice = u;
}
int  Product::getProductNum() {
	return productNum; 
}
char *Product::getDescription() {
	return description; 
}
int Product::getQuantity() {
	return quantity;
}
float Product::getUnitPrice() {
	return unitPrice;
}
void Product::print() {
	cout << "Product #" << productNum << " - Price: " << unitPrice << " Quantity: " << quantity << endl;
	cout << "Description: " << *description << endl;
}
