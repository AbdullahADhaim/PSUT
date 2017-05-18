/*
* Student Name: Abdullah Abu Dhaim 20150889
* Date: 02/05/2017
*/


#include <iostream>
#include <math.h>
using namespace std;

/* class Point represents a point that may be two or three-dimensional,
* depending on which constructor is used to create it.
* Coordinates are stored in a dynamically allocated array.
*/
class Point {
public:

	friend void print(Point &p);
	friend double computeDistance(Point &p1 , Point &p2); 

	// The default constructor creates a 2D point.
	Point();

	// This constructor creates a 2D point.
	Point(int x, int y);

	// This constructor creates a 3D point.
	Point(int x, int y, int z);

	~Point();

	Point(const Point &p);

	int getX() const;
	int getY() const;
	int getZ() const; // Works only if the point is a 3D point.

private:
	int dimensions_;	// Number of dimensions
	int *coordinates_;	// Values of the coordinates
};




/* A default constructor that creates a 2D point with
* coordinates x = 0, y = 0.
*/
Point::Point() {
	dimensions_ = 2;

	// Exercise 1: allocate memory for an array of two integers
	coordinates_ = new int[dimensions_]; 

	// Exercise 1: initialize the coordinates to 0s:
	coordinates_[0] = 0;
	coordinates_[1] = 0;
}





/* A constructor that creates a 2D point with
* coordinates x and y.
*/
Point::Point(int x, int y) {
	dimensions_ = 2;

	// Exercise 1: allocate memory for an array of two integers
	coordinates_ = new int[dimensions_];

	// Exercise 1: initialize the coordinates:
	coordinates_[0] = x;
	coordinates_[1] = y;
}




/* A constructor that creates a 3D point with
* coordinates x, y and z.
*/
Point::Point(int x, int y, int z) {
	dimensions_ = 3;

	// Exercise 1: allocate memory for an array of three integers
	coordinates_ = new int[dimensions_];

	// Exercise 1: initialize the coordinates:
	coordinates_[0] = x;
	coordinates_[1] = y;
	coordinates_[2] = z;
}




// A destructor that deallocates all the dynamically allocated memory.
Point::~Point() {
	// Exercise 1: deallocate memory for the array of coordinates
	delete[] coordinates_; 
}



// Returns the x-coordinate.
int Point::getX() const {
	// Exercise 1: Return the x coordinate.
	return coordinates_[0];

}



// Returns the y coordinate.
int Point::getY() const {
	// Exercise 1: Return the y coordinate.
	return coordinates_[1];

}



int Point::getZ() const {
	// Exercise 1: 	If this is a 3D point, then return the z coordinate.
	// 				If this is a 2D point, then output an error message and
	//				exit the program.

	if (dimensions_ == 2) {
		cout << "No Z coordinate in the 2D point " << endl;
		return 0;
	}

	return coordinates_[2];

}


Point::Point(const Point &p){
	cout << "Copy Constructor Called" << endl; 
	dimensions_ = p.dimensions_;
	coordinates_ = new int[dimensions_];

	for (int i = 0; i < dimensions_; i++) {
		coordinates_[i] = p.coordinates_[i]; 
	}

}


 void print(Point &p) {
	 if(p.dimensions_ == 3 )
	 cout << "X = " << p.coordinates_[0] << " Y= " << p.coordinates_[1] << " Z= " << p.coordinates_[2] << endl;
	 else 
		 cout << "X = " << p.coordinates_[0] << " Y= " << p.coordinates_[1] << endl;

}
 double computeDistance(Point &p1, Point &p2) {
	 if (p1.dimensions_ == 3)
		 return sqrt(pow(p1.coordinates_[0] - p2.coordinates_[0] , 2) + pow(p1.coordinates_[1] - p2.coordinates_[1], 2)) ;
	 else
		 return sqrt(pow(p1.coordinates_[0] - p2.coordinates_[0], 2) + pow(p1.coordinates_[1] - p2.coordinates_[1], 2) + pow(p1.coordinates_[2] - p2.coordinates_[2], 2));

}

int main() {
	Point p1(3,4,5);
	Point *p2 = new Point(p1);
	Point *p3=  new Point(p1);

	cout << "X = " << p1.getX() << " Y= " << p1.getY() << " Z= " << p1.getZ() <<  endl;
	cout << "X = " << p2->getX() << " Y= " << p2->getY() << " Z= " << p2->getZ() << endl;
	cout << "X = " << p3->getX() << " Y= " << p3->getY() << " Z= " << p3->getZ() << endl;

	delete p3; 

	cout << "X = " << p1.getX() << " Y= " << p1.getY() << " Z= " << p1.getZ() << endl;
	cout << "X = " << p2->getX() << " Y= " << p2->getY() << " Z= " << p2->getZ() << endl;

	Point poo(9, 6, 8);
	print(p1);
	cout << "Distance is: " << computeDistance(p1, poo) << endl;

	delete p2; 

	system("pause");
	return 0;
}


//int main() {
//	Point p1;
//	Point p2(3, 4, 5);
//
//	cout << "P1: x=" << p1.getX() << ", y=" << p1.getY() << endl;
//	cout << "P2: x=" << p2.getX() << ", y=" << p2.getY()
//		<< ", z=" << p2.getZ() << endl;
//
//	cout << p1.getZ();
//
//	system("pause");
//
//	return 0;
//}