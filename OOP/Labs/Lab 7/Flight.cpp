#include "Flight.h"
#include<iostream>
#include<string>
using namespace std;

Flight::Flight(string origin , string destination , MyDate dofa, MyDate dofd, string flightN ) : dateOfArrival(dofa) , dateOfDeparture(dofd) {
	this->origin = origin; 
	this->destination = destination; 
	this->flightNumber = flightN;
	dateOfArrival = dofa;
	dateOfDeparture = dofd; 
}

void          Flight::setOrigin(string x ) {
	origin = x; 
}
void     Flight::setDestination(string x) {
	destination = x;
}
void    Flight::setFlightNumber(string x) {
	flightNumber = x;
}
void Flight::setDateOfDeparture(MyDate x) {
	dateOfDeparture = x;
}
void   Flight::setDateOfArrival(MyDate x) {
	dateOfArrival = x;
}

string          Flight::getOrigin() const {
	return origin; 
}
string     Flight::getDestination()const {
	return destination; 
}
string    Flight::getFlightNumber()const {
	return flightNumber; 
}
MyDate Flight::getDateOfDeparture() const {
	return dateOfDeparture; 
}
MyDate   Flight::getDateOfArrival()const
{
	return dateOfArrival; 
}

void Flight::print() const {

	cout << "Flight Number " << flightNumber << " From " << origin << " To " << destination << " \nDepatrure At: "
		<< dateOfDeparture.getDay() << " - " << dateOfDeparture.getMonth() << " - " << dateOfDeparture.getYear() << " " << dateOfDeparture.getHour() << ":" << dateOfDeparture.getMinute()
		<< " \nArrival At: "
		<< dateOfArrival.getDay() << " - " << dateOfArrival.getMonth() << " - " << dateOfArrival.getYear() << " " << dateOfArrival.getHour() << ":" << dateOfArrival.getMinute() << endl; 
}