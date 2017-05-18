#include "Transaction.h"
#include<string>
#include<iostream>
using namespace std;

Transaction::Transaction()
{
	amount = 0; 
	repcode = "";
}

Transaction::Transaction(double amount, string repcode) {
	this->amount = amount; 
	this->repcode = repcode;
}

double Transaction::GetAmount() {
	return amount; 
}
string Transaction::Transaction::GetRepCode() {
	return repcode;
}
void Transaction::SetAmount(double a) {
	amount = a; 
}
void Transaction::SetRepCode(string c) {
	repcode = c;
}

Transaction::~Transaction()
{
}
