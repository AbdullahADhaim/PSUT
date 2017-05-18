#include <string>
using namespace std; 
class Enemy {
private:
	string name; 
	int x, y;
	const int id;
	static int numOfEnemy;

public:
	Enemy(string , int , int , int);
	~Enemy();
	string  getName()const;
	int getX()const;
	int getY()const;
	int getID() const;
	void setName(string);
	void setX(int);
	void setY(int);
	static int getnumOfEnemy();
	friend int computeDistance(Enemy &e1, Enemy &e2);


};