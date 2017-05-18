// Abdullah Yahya Abu Dhaim 20150889
#include<iostream>
#include <string>
#include "MyDate.h"
#include "Flight.h"
#include "Passenger.h"

using namespace std;

int main() {

	MyDate d1, d2; 
	d1.setDay(1);
	d1.setMonth(1);
	d1.setYear(1999);
	d1.setHour(1);
	d1.setMinute(1);
	d2.setDay(0);
	d2.setMonth(99);
	d2.setYear(99);
	d2.setHour(25);
	d2.setMinute(111);
	
	Flight f1("Amman" , "Dubai " , d1 , d2 , "10"), f2("Paris", "Maldives ", d1, d2, "10");
	f1.print();
	f2.print();

	Passenger p1("Khaleel" , "Qawas" , "Nabulsi" , 11 , d1), p2("Osama", "Karam", "Lebanease", 11, d1);
	p1.print();
	p2.print();

	


	return 0; 
}