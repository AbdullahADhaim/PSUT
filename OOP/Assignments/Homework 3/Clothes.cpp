#include "Clothes.h"
#include<iostream>
#include "string"
using namespace std;


Clothes::Clothes()
{
	sex = 'M';
	size = 0;
	color = "";
	
}


Clothes::~Clothes()
{
}


void Clothes::setSize(int s) {
	size = s > 0 ? s : 0;
}
void Clothes::setColor(string c) {
	color = c;
}
void Clothes::setSex(char s) {
	sex = s == 'M' || s == 'F' ? s : 'M'; 
}
int Clothes::getSize() {
	return size;
}
string Clothes::getColor() {
	return color; 
}
char Clothes::getSex() {
	return sex; 
}
void Clothes::print() {
	Product::print();
	cout << "Size: " << size << " - Sex: " << sex << " Color: " << color << endl;
}