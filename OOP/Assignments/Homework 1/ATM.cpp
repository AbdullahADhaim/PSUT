#include <iostream>
#include "ATM.h"
using namespace std;

ATM::ATM() {
	fifties = 0;
	twenties = 0;
	tens = 0;
}
ATM::ATM(int f, int t, int te) {
	fifties = f;
	twenties = t;
	tens = te;
}
int ATM::getFifties() {
	return fifties; 
}
void ATM::deposit(int f, int t, int te) {
	fifties += f;
	twenties += t;
	tens += te;

}
int  ATM::getATMTotalCash() {
	return (fifties * 50) + (twenties * 20) + (tens *10);

}
bool ATM::HasMoreCash(ATM &a1) {
	return getATMTotalCash() > a1.getATMTotalCash(); 
}
bool ATM::Withdraw(int amount, int &fifties_count, int &twenties_count, int &tens_count) {
	if (amount <= getATMTotalCash()) {

		int x = 0 , y = 0 , z = 0 ; 
		if (fifties >=(amount / 50)) {
			x = amount / 50; 
			amount -= x * 50;
		}
		if (twenties >= (amount / 20) ) {
			y = amount / 20; 
			amount -= y * 20; 
		}
		if (tens >= (amount / 10) ) {
			z = amount / 10; 
			amount -= z * 10; 
		}

		if (amount != 0)
			return false; 

		fifties -= x;
		twenties -= y;
		tens -= z; 
		fifties_count =  x;
		twenties_count = y;
		tens_count =	 z;
		

		return true ; 


	}
}

