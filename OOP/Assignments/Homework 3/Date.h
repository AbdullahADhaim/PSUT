#pragma once
#include <string>
#include<iostream>
using namespace std;
class Date
{
private:
	int d, m, y;
public:
	Date();
	void setDate(int, int, int);
	bool isBigger(const Date &da);
	string getDate();
};

