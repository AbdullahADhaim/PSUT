#pragma once
#include<string>
#include<iostream>
using namespace std; 
class Transaction
{
public:
	Transaction();
	Transaction(double amount, string repcode);
	double GetAmount();
	string GetRepCode();
	void SetAmount(double a);
	void SetRepCode(string c);
	~Transaction();
private:
	double amount;
	string repcode;
};