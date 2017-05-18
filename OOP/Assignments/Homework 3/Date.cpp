#include "Date.h"
#include <string>
#include<iostream>
using namespace std;


Date::Date()
{
	d = 1; m = 1; y = 1970; 
}
void Date::setDate(int day, int month, int year) {
	d = day; 
	m = month;
	y = year; 
}

bool Date::isBigger(const Date &da) {
	if (da.y > y)
		return true;

		if (da.y == y) {
			if (da.m > m)
				return true;
			else 
				if (m == da.m) 
					if (da.d > d) 
						return true;
		}
	

	return false; 
}

string Date::getDate() {
	return to_string(d) + "/" + to_string(m) + "/" + to_string(y);
}