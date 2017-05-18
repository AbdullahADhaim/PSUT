#pragma once
#include <string>
using namespace std;

class Cake
{
private:
	string name;
public:
	Cake(string);
	string getName() const;
	void setName(string); 
	virtual void mix() = 0;
	virtual void bake() = 0;
	virtual void decorate() = 0;
	virtual string getIngredients() = 0;
	virtual void prepare() ;

};

