#pragma once
#include <iostream>
#include <string>
#include "MyDate.h"
using namespace std; 
class Flight {
private: 
	string origin, destination , flightNumber;
	MyDate dateOfDeparture, dateOfArrival;
public:
	Flight(string , string , MyDate, MyDate , string );

	void setOrigin(string);
	void setDestination(string);
	void setFlightNumber(string);
	void setDateOfDeparture(MyDate);
	void setDateOfArrival(MyDate);

	string getOrigin()const;
	string getDestination()const;
	string getFlightNumber()const;
	MyDate getDateOfDeparture()const;
	MyDate getDateOfArrival()const;

	void print() const;


};