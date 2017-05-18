#pragma once
#include "Transaction.h"
#include<string>
#include<iostream>

using namespace std;

class SalesRep
{
private:
	Transaction *transactions;
	int num_tx , id;
	string name, code;
public:
	SalesRep();
	SalesRep(int id, string name, string code);
	void setNum_tx(int n);
	void setId(int i);
	void setName(string n);
	void setCode(string c);
	int getNum_tx();
	int getId();
	string getName();
	string getCode();
	void setTransactions(Transaction t[], int size);
	Transaction *getTransactions();
	SalesRep(const SalesRep &r);
	void ExtractRepTransactions(Transaction data[], int n);
	int ExtractRepTransaction(float amount);
	double GetSalesTotal();	
	~SalesRep();
	Transaction getTransaction(int i);

};

