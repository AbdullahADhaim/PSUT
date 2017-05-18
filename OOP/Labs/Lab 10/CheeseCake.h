#pragma once
#include "Cake.h"
class CheeseCake :public Cake
{
public:
	CheeseCake(string);
	void mix();
	void bake();
	void decorate();
	string getIngredients();
};

