#pragma once
#include "Cake.h"
#include <iostream>
#include <string>
using namespace std;

class CupCake : public Cake
{
public:
	CupCake(string n)  ;
	 void mix() ;
	 void bake() ;
	 void decorate() ;
	 string getIngredients() ;
};

