#include "Cake.h"
#include <string>
#include <iostream>
using namespace std;
Cake::Cake(string n)
{
	name = n;
}


string Cake::getName() const {
	return name; 
}
void Cake::setName(string n ) {
	name = n;
}
void Cake::prepare() {
	cout << "Preparing " << name << "..." << endl;
	cout << getIngredients() << endl ;
	mix();
	bake();
	decorate();
	cout << "Done !" << endl;
}