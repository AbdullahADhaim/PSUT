#include "SalesRep.h"
#include<string>
#include<iostream>
using namespace std;



SalesRep::SalesRep()
{
	transactions = NULL;
	num_tx = 0; 
	id = 0;
	name = "";
	code = "";
}

SalesRep::SalesRep(int id , string name , string code)
{
	transactions = NULL;
	num_tx = 0;
	this->id = id;
	this->name = name;
	this->code = code;
}


void SalesRep::setNum_tx(int n) {
	num_tx = n; 
}
void SalesRep::setId(int i) {
	id = i;
}
void SalesRep::setName(string n) {
	name = n;
}
void SalesRep::setCode(string c) {
	code = c;
}
int SalesRep::getNum_tx() {
	return num_tx;
}
int SalesRep::getId() {
	return id;
}
string SalesRep::getName() {
	return name;
}
string SalesRep::getCode() {
	return code;
}

void SalesRep::setTransactions(Transaction t[], int size) {
	if (num_tx > 0) delete[] transactions;
	if (size <= 0) return;
	transactions = new Transaction[size];
	for (int i = 0; i < size; i++)
		transactions[i] = t[i];
	num_tx = size;
}

Transaction *SalesRep::getTransactions() {
	return transactions;
}

SalesRep::SalesRep(const SalesRep &r) {
	if(r.num_tx <= 0 ) transactions = NULL;
	num_tx = r.num_tx;
	id = r.id;
	name = r.name;
	code = r.code;
	transactions = new Transaction[r.num_tx];
	for (int i = 0; i < r.num_tx; i++)
		transactions[i] = r.transactions[i];
}

void SalesRep::ExtractRepTransactions(Transaction data[], int n) {
	int c = 0; 
	for (int i = 0; i < n; i++)
	{
		if (code == data[i].GetRepCode())
			c++;
	}
	if (num_tx > 0) delete[] transactions;
	transactions = new Transaction[c];

	int i = 0;
	for (int x = 0; x < n; x++) {
		if (data[x].GetRepCode() == code) {
			transactions[i] = data[x];
			i++;
		}
	}
	num_tx = c;
}

int SalesRep::ExtractRepTransaction(float amount) {
	int c = 0; 
	for (int i = 0; i < num_tx; i++)
		if (transactions[i].GetAmount() >= amount)
			c++;
	return c; 
}

double SalesRep::GetSalesTotal() {
	double sum = 0;
	for (int i = 0; i < num_tx; i++)
		sum += transactions[i].GetAmount();

	return sum; 
}


SalesRep::~SalesRep()
{
	if (num_tx > 0)
		delete[] transactions;
}

Transaction SalesRep::getTransaction(int i) {

	return transactions[i]; 
}