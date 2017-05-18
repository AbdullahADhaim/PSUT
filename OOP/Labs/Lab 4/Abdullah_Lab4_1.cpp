#include <iostream>
#include <string>
using namespace std; 

class Animal {
private:
	string name_ , stomach_;
public: 
	void greet() {
		cout << "Hello! my name is " << name_ << endl;
	}
	Animal(string n) {
		name_ = n; 
		stomach_ = ""; 
		greet();
	}

	~Animal() {
		cout << "Farewell ! I am an " << name_ << (isHungry() ? ("Dying Hungre :( ") : ("I am dying full :)")) << endl;;
	 }
	void eat(string food) {
		stomach_ = food;
		cout << name_ << " is eating " << stomach_ << endl; 

	}

	bool isHungry() {
		return stomach_ == "";
	}


};

int main() {
	Animal frog("Frog") , duck("Duck") , mouse("Mouse");
	frog.eat("flies");
	mouse.eat("cheese");

	return 0; 
}