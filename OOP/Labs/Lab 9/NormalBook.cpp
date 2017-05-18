#include<iostream>
#include<string>
#include "NormalBook.h"
using namespace std;

NormalBook::NormalBook(string t, string a, int y, int p ,string pr, int w) 
	: Book(t,a,y,p) {
	printType = pr; weight = w;

}
void NormalBook::setPrintType(string p) {
	printType = p == "Hard-Cover" || p == "Paperback" ? p : "Undefined";
}
void NormalBook::setWeight(int w) {
	weight = w < 0 ? 0 : w ; 
}
string NormalBook::getPrintType() {
	return printType;
}
int NormalBook::getWeight() {
	return weight;
}

void NormalBook::printDetails() {
	Book::printDetails();
	cout << "PrintType: " << printType << " Weight: " << weight << endl;



}