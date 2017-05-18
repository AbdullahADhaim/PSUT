#include <iostream>
#include "Passenger.h"
#include "Flight.h"
using namespace std; 

void getFlightMaxNoJordanians(Flight f[], int size) {
	int flightNumberMax = f[0].getFlightNumber(), max = f[0].getNumPassengers("Jordanian");
	for(int i = 1 ; i< size; i++)
		if (f[i].getNumPassengers("Jordanian") > max) {
			max = f[i].getNumPassengers("Jordanian");
			flightNumberMax = f[i].getFlightNumber();
		}

	cout << "The Flight Number with max number of Jordanian Passengers is: " << flightNumberMax << endl;

}


void getFlightMaxNoPassengers(Flight f[], int size) {
	int flightNumberMax = f[0].getFlightNumber(), max = f[0].getNumberOfPassengers();
	for (int i = 1; i< size; i++)
		if (f[i].getNumberOfPassengers() > max) {
			max = f[i].getNumberOfPassengers();
			flightNumberMax = f[i].getFlightNumber();
		}

	cout << "The Flight Number with max number of Passengers is: " << flightNumberMax << endl;

}


int main() {
	Passenger a("Abdullah" , "Yahya" , "Jordanian" , 2 , 18);
	
	Passenger passengers[50];
	string firstName, lastName, nationality;
	int id, age;
	for (int i = 0; i < 50; i++)
	{
		cout << "Passenger #" << i + 1 << endl;
		cout << "Please Enter First Name: " << endl;
		cin >> firstName;
		cout << "Please Enter Last Name: " << endl;
		cin >> lastName;
		cout << "Please Enter Nationality : " << endl;
		cin >> nationality;
		cout << "Please Enter ID Number: " << endl;
		cin >> id;
		cout << "Please Enter Age: " << endl;
		cin >> age;

		passengers[i].setFirstName(firstName);
		passengers[i].setLastName(lastName);
		passengers[i].setAge(age);
		passengers[i].setId(id);
		passengers[i].setNationality(nationality);
	}

	Flight MyFlight[4]; 
	string fromCity, toCity;
	for (int i = 0; i < 4; i++) {
		cout << "Flight #" << i + 1 << endl; 
		cout << "Enter From City: " << endl;
		cin >> fromCity;
		cout << "ENter To Ciyt" << endl;
		cin >> toCity; 
		
		MyFlight[i].setFromCity(fromCity);
		MyFlight[i].setToCity(toCity);
	}

	
	for (int i = 0; i < 20; i++) 
		MyFlight[0].addPassenger(passengers[i]);
	for (int i = 20; i < 30; i++)
		MyFlight[1].addPassenger(passengers[i]);
	for (int i = 30; i < 40; i++)
		MyFlight[2].addPassenger(passengers[i]);
	for (int i = 40; i <50; i++)
		MyFlight[3].addPassenger(passengers[i]);
	
	getFlightMaxNoJordanians(MyFlight, 4);
	getFlightMaxNoPassengers(MyFlight, 4);

	Passenger copyPassenger = passengers[0]; // this line will call the copy constructor
	
	return 0;
}