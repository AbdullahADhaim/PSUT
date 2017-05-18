#include <string>
#include <iostream>
#include "Flight.h"
using namespace std; 

int Flight::flightIncremental = 500;


Flight::Flight():flightNo(++flightIncremental){
	this->fromCity = "";
	this->toCity = "";
	this->numOfPassengers = 0;
	this->maxPassengers = 60;
	passengers = new Passenger[0];

}
Flight::Flight(string fromCity, string toCity, Passenger *p , int size, int maxPassengers) 
	: flightNo(++flightIncremental) {
	this->fromCity = fromCity; 
	this->toCity = toCity; 
	this->numOfPassengers = size; 
	this->maxPassengers = maxPassengers; 

	this->passengers = new Passenger[size];
	for (int i = 0; i < size; i++) {
		this->passengers[i].setFirstName(p[i].getFirstName());
		this->passengers[i].setLastName(p[i].getLastName());
		this->passengers[i].setAge(p[i].getAge());
		this->passengers[i].setId(p[i].getId());
		this->passengers[i].setNationality(p[i].getNationality());
	}
}
Flight::~Flight(){
	delete[] passengers; 
}
void Flight::setFromCity(string x){
	fromCity = x;
}
void Flight::setToCity(string x ){
	toCity = x;
}
int Flight::getFlightNumber(){
	return flightNo; 
}
bool Flight::addPassenger(Passenger &p){
	if (numOfPassengers < maxPassengers) {

		Passenger *x = new Passenger[numOfPassengers + 1];

		for (int i = 0; i < numOfPassengers; i++) {
			x[i].setFirstName(passengers[i].getFirstName());
			x[i].setLastName(passengers[i].getLastName());
			x[i].setAge(passengers[i].getAge());
			x[i].setId(passengers[i].getId());
			x[i].setNationality(passengers[i].getNationality());
		}

		x[numOfPassengers].setFirstName(p.getFirstName());
		x[numOfPassengers].setLastName(p.getLastName());
		x[numOfPassengers].setAge(p.getAge());
		x[numOfPassengers].setId(p.getId());
		x[numOfPassengers].setNationality(p.getNationality());
		delete[] passengers;
		passengers = new Passenger[numOfPassengers + 1];

		for (int i = 0; i < numOfPassengers+1; i++) {
			passengers[i].setFirstName(x[i].getFirstName());
			passengers[i].setLastName(x[i].getLastName());
			passengers[i].setAge(x[i].getAge());
			passengers[i].setId(x[i].getId());
			passengers[i].setNationality(x[i].getNationality());
		}
		delete [] x;
		numOfPassengers++;
		return true; 
	}
	return false;

}
Passenger Flight::getPassenger(int id){

	Passenger p;
	for (int i = 0; i < numOfPassengers; i++) {
		if (passengers[i].getId() == id)
			return  passengers[i];
	}
	return p;
	 
}

bool Flight::hasMorePassengers(Flight &f) {
	return this->numOfPassengers > f.numOfPassengers;
}

int Flight::getNumPassengers(string N) {
	int count = 0;
	for (int i = 0; i < numOfPassengers; i++)
		if (passengers[i].getNationality() == N)
			count++;

	return count;

}

int Flight::getNumberOfPassengers() {
	return numOfPassengers;
}