#include<iostream>
using namespace std;

class Circle {
private:
	int x, y, radius;

public :
	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	int getRadius() {
		return radius;
	}

	void setX(int xx) {
		if (xx < 0) {
	x = 1;
	cout << "You Cant Asign A negative value to X , it's value is 1 now :) " << endl;
		}
			
		else
			x = xx;
	}

	void setY(int yy) {
		if (yy < 0) {
			y = 1;
			cout << "You Cant Asign A negative value to Y , it's value is 1 now :) " << endl;
		}
		else
			y = yy ;
	}

	void setRadius(int r) {
		if (r < 0) {
			radius = 1;
			cout << "You Cant Asign A negative value to Radius , it's value is 1 now :) " << endl;
		}
			
		else
			radius = r;
	}



	float GetArea() {
		return radius*radius*3.14;
	}

	void PrintDetails() {
		cout << "Radius: " << radius << " , X: " << x << " , Y: " << y << " Area: " << GetArea() << endl;
	}

	void MoveUpDown(int dx) {
		x += dx;
	}
	void MoveLeftRight(int dy) {
		y += dy;
	}

};

int main() {

	Circle circle1;
	int x, y, radius;
	cout << "Please enter x,y cordinates and the radius " << endl; 
	cin >> x >> y >> radius;
	circle1.setRadius(radius);
	circle1.setX(x);
	circle1.setY(y);
	circle1.PrintDetails();

	Circle circle2;
	int x2, y2, radius2;
	cout << "Please enter x,y cordinates and the radius " << endl;
	cin >> x2 >> y2 >> radius2;
	circle2.setRadius(radius2);
	circle2.setX(x2);
	circle2.setY(y2);
	circle2.PrintDetails();

	cout << (circle1.GetArea() > circle2.GetArea() ? "C1 Area Is Larger Than C2" : "C1 Area Is Less Than C2") << endl;
	cout << (circle1.getX() > circle2.getX() ? "C1 is on the right of C2" : circle1.getX() < circle2.getX() ? "C1 is on the left of C2" : "C1 is on C2 exactly on x acces") << endl;
	cout << (circle1.getY() > circle2.getY() ? "C1 is on the top of C2" : circle1.getY() < circle2.getY() ? "C1 is on the Bottom of C2" : "C1 is on C2 exactly on y acces") << endl;
	return 0;
}