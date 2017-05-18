#pragma once
#include <string>
using namespace std; 
class Passenger {
private:
	string firstName, lastName, nationality;
	int id , age; 

public:
	Passenger(string firstName = "", string lastName = "", string nationality = "", int id = 0, int age = 18);
	Passenger(const Passenger &);
	void setFirstName(string);
	void setLastName(string); 
	void setNationality(string); 
	void setId(int);
	void setAge(int);

	string getFirstName();
	string getLastName();
	string getNationality();

	int getId();
	int getAge();
	void print();



};
