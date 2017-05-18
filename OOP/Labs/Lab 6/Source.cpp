#include <iostream>
#include <string>
#include "Enemy.h"
#include "Math.h"
using namespace std;
int main() {
	string  name; 
	int x, y, id;

	cout << "Enter Enemy Name , X , Y , ID" << endl; 
	cin >> name >> x >> y >> id; 
	Enemy a(name, x, y, id);

	cout << "Enter Enemy Name , X , Y , ID" << endl;
	cin >> name >> x >> y >> id;
	Enemy b(name, x, y, id);

	cout << "Enter Enemy Name , X , Y , ID" << endl;
	cin >> name >> x >> y >> id;
	Enemy c(name, x, y, id);

	cout << "Number of enemies are: " << Enemy::getnumOfEnemy() << endl; 
	cout << "Distance between two enemiesis  : " << computeDistance(a, b) << endl;

	// const Enemy ff("Abed" , 100 , 33 , 2398);
	// ff.setName("Osama !");  
	// This won't work and will show an error , because it's a constant object , so it won't change :) 

	cout << Math::PI << " " << " " << Math::areaOfTriangle(5, 6) << " " << Math::factorial(5)<<   " " << Math::fabs(-12) <<  " " << Math::round(1.4) << endl;

	system("pause");
	return 0;
}