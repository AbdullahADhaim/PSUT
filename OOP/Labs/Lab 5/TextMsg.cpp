#include <iostream>
#include "TextMsg.h"
#include <string>
using namespace std;



TextMsg::TextMsg(string from, string to , string date , string text) {
	this->from = from; 
	this->to = to;
	this->date = date;
	this->text = text;
}

TextMsg::TextMsg(const TextMsg &t) {
	cout << "Copy Constructor Called :) " << endl;
	this->from = t.from;
	this->to = t.to;
	this->date = t.date;
	this->text = t.text;

}
bool TextMsg::isEqualTo(TextMsg &t) {
	return date == t.date && text == t.text && from == t.from && to == t.to;
}
int TextMsg::compareTo(TextMsg t, char x ) {
	if (x == 'F' ) {
		return (from.size() == t.from.size()) ? 0 ? (from.size() > t.from.size()) : 1 : -1;
	}
	else if ( x == 'T' ) {
		return (to.size() == t.to.size()) ? 0 ? (to.size() > t.to.size()) : 1 : -1;
	}
	else if ( x == 'D') {
		return (date.size() == t.date.size()) ? 0 ? (date.size() > t.date.size()) : 1 : -1;
	}
	else {
		cout << "Error !!! you entered something else" << endl; 
		exit(1);
	}

}
void TextMsg::print() {
	cout << "From: "  << from << endl;
	cout << "To: "    << to << endl;
	cout << "Date: "  << date << endl;
	cout << "Text: "  << text << endl;
	cout << endl; 
}

void TextMsg::setFrom(string from ) {
	this->from = from;	
}
void TextMsg::setTo(string to) {
	this->to = to;
}
void TextMsg::setDate(string date) {
	this->date = date;
}
void TextMsg::setText(string text) {
	this->text = text;
}

TextMsg TextMsg::Hello() {
	return *this; 
}
