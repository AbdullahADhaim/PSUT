#pragma once
#include<iostream>
#include "Book.h"
#include<string>
using namespace std;
class NormalBook : public Book{
private:
	string printType;
	int weight;
public:
	NormalBook(string, string, int, int,string, int);
	void setPrintType(string);
	void setWeight(int);
	string getPrintType();
	int getWeight();
	void printDetails();
};
