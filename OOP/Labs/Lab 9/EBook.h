#pragma once
#include<iostream>
#include "Book.h"
#include<string>
using namespace std;
class EBook : public Book {
private:
	int sizeInByte ;
	string fileType;
public:
	EBook(string, string, int, int, string, int);
	void setSizeInByte(int);
	void setFileType(string);
	string getFileType();
	int getSizeInByte();
	string getTitle();
	void printDetails();
};
