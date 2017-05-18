#include "Enemy.h"
#include <iostream>
#include <math.h>
using namespace std;

int Enemy::numOfEnemy = 0; 

Enemy::Enemy(string n , int x , int y , int i) : id(i)  {
	this->name = n;
	this -> x = x;
	this->y = y; 
	this->numOfEnemy++;
}
Enemy:: ~Enemy() {
	this->numOfEnemy--;

}

string  Enemy::getName()const {
	return this->name;
}
int Enemy::getX()const {
	return this->x;
}
int Enemy::getY() const {
	return this->y;
}
int Enemy::getID() const {
	return this->id;
}
void Enemy::setName(string n) {
	this->name = n;
}
void Enemy::setX(int a) {
	this->x = a;
}
void Enemy::setY(int a) {
	this->y = a;
}
int Enemy::getnumOfEnemy() {
	return  numOfEnemy;
}

int computeDistance(Enemy &e1, Enemy &e2) {
	return sqrt(pow(e1.x - e2.x, 2) 
		+ pow(e1.x - e2.x, 2));
}