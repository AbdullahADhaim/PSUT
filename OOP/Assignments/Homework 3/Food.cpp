#include "Food.h"
#include<iostream>
#include "string"

using namespace std;


bool Food::isExpired(Date date) {
	return expDate.isBigger(date); //Note this is not completed 
}
void Food::print() {
	Product::print();
	cout << "Expiry Date: " << expDate.getDate() << " Unit: " << unit << endl;
}
void Food::setExpDate(Date d) {
	expDate = d;
}
void Food::setUnit(string u) {
	unit = u;
}
Date Food::getExpDate() {
	return expDate;

}
string Food::getUnit() {
	return unit;
}
