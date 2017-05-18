#pragma once
#include<iostream>
#include "string"
#include "Product.h"
using namespace std;
class Clothes : public Product
{
private:
	int size;
	string color; 
	char sex; 
public:
	Clothes();
	~Clothes();
	void setSize(int);
	void setColor(string);
	void setSex(char);
	int getSize();
	string  getColor();
	char getSex();
	void print();

};

