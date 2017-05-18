#include <string>
#include <iostream>
#include "Passenger.h"
using namespace std;
 
Passenger::Passenger(string firstName, string lastName, string nationality, int id, int age){
	this->firstName = firstName;
	this->lastName = lastName;
	this->nationality = nationality;
	this->id = id;
	this->age = age;
}
Passenger::Passenger(const Passenger &a ){
	cout << "Copy Constructor Called" << endl;
	firstName = a.firstName;
	lastName = a.lastName;
	nationality = a.nationality;
	id = a.id;
	age = a.age  ;

}
void Passenger::setFirstName(string x){
	firstName = x;
}
void Passenger::setLastName(string x) {
	lastName = x;
}
void Passenger::setNationality(string x){
	nationality = x;
}
void Passenger::setId(int x){
	id = x;
}
void Passenger::setAge(int x){
	age = x >= 18 ? x : 18;
}

string Passenger::getFirstName(){
	return firstName;
}
string Passenger::getLastName(){
	return lastName;
}
string Passenger::getNationality(){
	return nationality;
}

int Passenger::getId(){
	return id;
}
int Passenger::getAge(){
	return age;
}
void Passenger::print(){

	cout << "ID: " << id << " Name: " << firstName << " " << lastName << "\nNationality: "
		<< nationality << " " << "Age: " << age << endl; 

}
