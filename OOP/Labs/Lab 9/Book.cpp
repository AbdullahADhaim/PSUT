#include "Book.h"
#include<iostream>
#include<string>
using namespace std;

Book::Book(string t, string a , int y , int p) {
	title = t;
	author = a; 
	issueYear = y;
	pages = p;
}
void Book::setTitle(string t){
	title = t == "" ? "Unknown"  :t ;
}
void Book::setAuthor(string a){ author = a == "" ? "Unknown" : a; }
void Book::setIssueYear(int y) { issueYear = y < 1900 ? 1900 : y;  }
void Book::setPages(int p) { pages = p < 0 ? 0 : p; }
string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }
int Book::getIssueYear() { return issueYear; }
int Book::getPages() { return pages; }
void Book::printDetails() {
	cout << "Book: " << title << " Author: " << author << " Issue Year: " 
		<< issueYear << " Pages: " << pages << endl;	 }

