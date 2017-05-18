#pragma once
#include <string>
#include "Passenger.h"
using namespace std;
class Flight {
private:
	string fromCity, toCity;
	const int flightNo;
	static int flightIncremental; 
	int numOfPassengers; 
	int maxPassengers; 
	Passenger *passengers;

public:
	Flight();
	Flight(string , string , Passenger * , int size ,int maxPassengers);
	~Flight();
	void setFromCity(string);
	void setToCity(string);
	int getFlightNumber();
	bool addPassenger(Passenger &p);
	Passenger getPassenger(int); 
	bool hasMorePassengers(Flight &f);
	int getNumPassengers(string N);
	int getNumberOfPassengers();

};
