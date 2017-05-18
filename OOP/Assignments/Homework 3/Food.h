#pragma once
#include<iostream>
#include "string"
#include "Product.h"
using namespace std;
class Food : public Product
{
private:
	string expDate , unit; 
public:
	Food();
	~Food();
	bool isExpired(string date);
	void setExpDate(string);
	void setUnit(string);
	string getExpDate();
	string getUnit();
	void print();

};

