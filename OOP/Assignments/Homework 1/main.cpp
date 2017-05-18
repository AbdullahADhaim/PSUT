#include <iostream>
#include "ATM.h"
#define size 100
using namespace std; 
int main() {
	ATM a1, a2(3, 3, 2);
	int fif, twe, ten; 
	int amount , x, y, z;
	long sum = 0; 
	cout << "Please enter amount you wish to deposit, Fifties, Twenties , Tens (Respectively) :" << endl; 
	cin >> fif >> twe >> ten; 
	a1.deposit(fif, twe, ten);
	cout << "Please enter the amount you want to withdraw: " << endl; 
	cin >> amount;
	if (a2.Withdraw(amount, x, y, z))
		cout << "You'll Get " << x << " Fifties , " << y << " Twenties , " << z << " Tens " << endl;
	else
		cout << "Sorry, Your transaction was not completed successfully :( " << endl; 

	cout << (a1.HasMoreCash(a2) ? "ATM 1 Has More Cash" : "ATM 2 Has More Cash ") << endl; 

	ATM atms[size];
	for (int i = 0; i < size; i++) {
		cout << "Please enter amount you wish to deposit, Fifties, Twenties , Tens (Respectively) ATM #" << i+1 << " :" << endl;
		cin >> fif >> twe >> ten;
		atms[i].deposit(fif, twe, ten);
		sum += atms[i].getATMTotalCash();
	}

	cout << "The Sum of the all cashes of the " << size << " ATMs is: " << sum << endl; 


	return 0; 
 }