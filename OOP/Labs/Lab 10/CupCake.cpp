#include "CupCake.h"



CupCake::CupCake(string n) : Cake(n)
{
}

 void CupCake::mix() {
	 cout << "Mixing eggs with oil, sugar and milk.\n" << "Adding Cacao, baking powder and flower." << endl;

 }

 void CupCake::bake() {
	 cout << "Pouring the mixture into cups.\nBaking the cups at 250 degrees for 0.5 hours." << endl;

 }
 void CupCake::decorate() {
	 cout << "Adding chocolate sauce on top of each cup.\nAdding a cherry on top of each cup." << endl; 


 }
 string CupCake::getIngredients() {
	 return  "Eggs, flower, baking powder, milk, oil, cacao, cherries, sugar.";
 }