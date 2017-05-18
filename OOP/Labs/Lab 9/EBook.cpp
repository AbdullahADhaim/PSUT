#include<iostream>
#include<string>
#include "EBook.h"
using namespace std;

EBook::EBook(string t, string a, int y, int p, string f, int s)
	: Book(t, a, y, p) {
	sizeInByte = s; fileType = f;

}
void EBook::setFileType(string p) {
	fileType = p == "pdf" || p == "epub" || p == "chm"|| p == "azw" ? p : "txt";
}
void EBook::setSizeInByte(int w) {
	sizeInByte  = w < 0 ? 0 : w;
}
string EBook::getFileType() {
	return fileType;
}
int EBook::getSizeInByte() {
	return sizeInByte;
}
string EBook::getTitle() {
	return Book::getTitle() + " (E-Book)"; 
}

void EBook::printDetails() {
	Book::printDetails();
	cout << "FileType: " << fileType << " SizeInByte: " << sizeInByte << endl;
}