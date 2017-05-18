#include "Passenger.h"
#include <string>
#include <iostream>
using namespace std;


Passenger::Passenger(string firstName, string lastName, string nationality , int id , MyDate date) : dateOfBirth(date) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->nationality = nationality;
	this->id = id; 
}

void	Passenger::setFirstName(string x){
	firstName = x;
}
void     Passenger::setLastName(string x){
	lastName = x;
}
void  Passenger::setNationality(string x){
	nationality = x;
}
void              Passenger::setID(int x){
	id = x;
}
void  Passenger::setDateOfBirth(MyDate x){
}
										 
string    Passenger::getFirstName()const {
	return firstName; 
}
string     Passenger::getLastName()const {
	return lastName;
}
string  Passenger::getNationality()const {
	return nationality;
}
int              Passenger::getID()const {
	return id; 
}
MyDate  Passenger::getDateOfBirth()const {
	return dateOfBirth; 
}

void  Passenger::print() const{
	cout << "ID: " << id << " Name: " << firstName << " " << lastName << " Nationality: " << nationality <<  "\nBirth Date: " 
		<< dateOfBirth.getDay() << " - " << dateOfBirth.getMonth() << " - " << dateOfBirth.getYear() << " " << dateOfBirth.getHour() << ":" << dateOfBirth.getMinute() << endl;

}