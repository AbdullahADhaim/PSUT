#pragma once
#include<iostream>
#include "string"
#include "Product.h"
#include "Date.h"
using namespace std;
class Food : public Product
{
private:
	string  unit; 
	Date expDate; 
public:
	bool isExpired(Date date);
	void setExpDate(Date);
	void setUnit(string);
	Date getExpDate();
	string getUnit();
	void print();

};

