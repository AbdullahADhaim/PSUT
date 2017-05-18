#include "CheeseCake.h"
#include "Cake.h"
#include <iostream>
#include <string>


CheeseCake::CheeseCake(string n) : Cake(n)
{
}



void CheeseCake::mix() {
	cout << "“Mixing eggs, cheese, cream, milk and sugar. Adding flower and baking powder."<< endl;

}

void CheeseCake::bake() {
	cout << "Baking the mixture at 300 degrees for 0.25 hours" << endl;

}
void CheeseCake::decorate() {
	cout << "- Adding strawberries.\n- Cutting the cake into slices.\n- Cooling the cake in the fridge"<< endl;


}
string CheeseCake::getIngredients() {
	return  "Eggs, flower, baking powder, milk, oil, cacao, cherries, sugar";
}