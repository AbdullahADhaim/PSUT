#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
	string name_, stomach_;
public:
	void greet() {
		if (name_ == "")
			cout << "Hello! I still don't have a name !" << endl;
		else
			cout << "Hello! my name is " << name_ << endl;

	}
	Animal(string n = "" , string f = "") {
		name_ = n;
		stomach_ = f;
		greet();
	}

	~Animal() {
		if(name_ == "")
		cout << "Farewell ! I dont have a name and I'm  " << (isHungry() ? ( "Dying Hungre :( ") : (" I am dying full :)")) << endl;
		else
			cout << "Farewell ! I am an " << name_ << (isHungry() ? (" Dying Hungre :( ") : (" I am dying full :)")) << endl;
	}
	void eat(string food) {
		stomach_ = food;
		if (name_ == "")
			cout << " someone is eating " << stomach_ << endl;
		else
		cout << name_ << " is eating " << stomach_ << endl;

	}

	bool isHungry() {
		return stomach_ == "";
	}

	bool isHapierThan(Animal &a) {
		return !isHungry() && a.isHungry();
	}

	string getName() { return name_; }

};

int main() {
	//Animal frog("Frog", "flies"), duck("Duck"), mouse("Mouse" , "cheese");
	//Animal arr[4]; 
	//arr[0].eat("Pizza");
	//arr[1].eat("Burger");

	Animal frog("Frog", "flies");
	Animal duck("Duck");

	if (frog.isHapierThan(duck))
		cout << frog.getName() << " is Happier than " << duck.getName() << endl; 

	return 0;
}

/*

the constructor calls the great function which prints name if it's found  and will print I still don't have name 
if the name is not assigned.
then the eat function will print what the animal is eating then prints it's name if it's found and someone is eating the food if it's not
assigned.
finally when the object dies it'll call the destructor , last object declared will be the first object to be killed
so the info printed in the destructor will be printed from last object created to the first object 

*/