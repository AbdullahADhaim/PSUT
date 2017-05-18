#include "Food.h"
#include<iostream>
#include "string"
using namespace std;


Food::Food()
{
}


Food::~Food()
{
}

bool Food::isExpired(string date) {
	return false; //Note this is not completed 
}
void Food::print() {
	Product::print();
	cout << "Expiry Date: " << expDate << " Unit: " << unit << endl;
}
void Food::setExpDate(string d) {
	expDate = d;
}
void Food::setUnit(string u) {
	unit = u;
}
string Food::getExpDate() {
	return expDate;

}
string Food::getUnit() {
	return unit;
}
