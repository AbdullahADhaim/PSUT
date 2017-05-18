#include<iostream>
#include "MyDate.h"
using namespace std;

void MyDate::setDay(int x) {
	if (x >= 1 && x <= 31)
	day = x;
	else
		cout << "Day You entered is invalid ! " << endl;

}
void MyDate::setMonth(int x) {
	if (x >= 1 && x <= 12)
	month = x;
	else
		cout << "Month You entered is invalid ! " << endl;
}
void MyDate::setYear(int x) {
	if (x >= 1900)
		year = x;
	else
		cout << "Year You entered is invalid ! " << endl;
}
void MyDate::setHour(int x) {
	if (x >= 0 && x <= 23)
	hour = x;
	else
		cout << "Hour You entered is invalid ! " << endl;
}
void MyDate::setMinute(int x) {
	if(x>= 0 && x <= 59)
	minute = x;
	else
		cout << "Minute You entered is invalid ! " << endl;
}
int  MyDate::getDay()const {
	return day;
}
int  MyDate::getMonth() const {
	return month;
}
int  MyDate::getYear()const {
	return year;
}
int  MyDate::getHour()const {
	return hour;
}
int  MyDate::getMinute()const {
	return minute;
}

MyDate::MyDate() {
	day = 1;
	month = 1;
	year = 1900;
	hour = 0;
	minute = 0;
}

MyDate::MyDate(int d, int m, int y, int h, int min) {
	day = d;
	month = m;
	year = y;
	hour = h;
	minute = min;

}