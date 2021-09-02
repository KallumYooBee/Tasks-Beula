
#include <iostream>
using namespace std;

class Vehicle {
public:
	void display() {
		cout << "This is a Vehicle";
	}
};

class Car : public Vehicle { //taking parent class functions
public:
	void display() {
		cout << "This is a Car";
	}
};

class Bike : public Vehicle {
public:
	void display() {
		cout << "This is a Bike";
	}

};

int main() {
	int n;
	cout << "How many tyres in the Vehicle ?";
	cin >> n;
	if (n == 2)
	{
		Bike b; // creating bike object
		b.display();
	}
	else if (n == 4) {
		Car c; // creating car object
		c.display();
	}
	else if (1 <= n <= 100) {
		Vehicle v; // creating vehicle object
		v.display();
	}
}