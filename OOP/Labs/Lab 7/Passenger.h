#pragma once
#include <string>
#include "MyDate.h"
#include <iostream>
using namespace std; 

class Passenger {
private : 
	string firstName, lastName , nationality; 
	int id; 
	MyDate dateOfBirth; 
public: 
	Passenger(string, string , string ,int , MyDate);

	void setFirstName(string x);
    void setLastName(string x);
	void setNationality(string x);
	void setID(int x);
	void setDateOfBirth(MyDate x);
	 
	string getFirstName()const;
	string getLastName()const;
	string getNationality()const;
	int getID()const;
	MyDate getDateOfBirth()const;

	void print() const;
	


};