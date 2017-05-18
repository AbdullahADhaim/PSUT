#pragma once
#include<iostream>
#include<string>
using namespace std; 
class Book {
private:
	string title, author;
	int issueYear, pages;
public:
	Book(string , string  ,int , int);
	void setTitle(string);
	void setAuthor(string);
	void setIssueYear(int);
	void setPages(int);
	string getTitle();
	string getAuthor();
	int getIssueYear();
	int getPages();
	void printDetails();
};
