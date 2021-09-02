#include <iostream>
#include <cmath> // for 10^3
using namespace std;


class Rectangle {
protected:
	int width = 0;
	int height = 0;
public:
	void display() {
		cout << width << " " << height << endl;
	}
};

class RectangleArea : public Rectangle {
public:
	void read_input() {
		do {
			cout << "Please enter width of rectangle : ";
			cin >> width;
			if (width >= 1 && width <= pow(10, 3))
				break; // keep asking the user for width until the if statement becomes true, then it will break loop
		} while (true);

		do {
			cout << "Please enter height of rectangle : ";
			cin >> height;
			if (height >= 1 && height <= pow(10, 3))
				break; // keep asking the user for height until the if statement becomes true, then it will break loop
		} while (true);


	}

	void display() {
		cout << width * height;
	}

};


int main() {

	//this was not the greatest way of outputting 
	RectangleArea r; // Created a object of RectangleArea
	r.read_input();
	Rectangle d;
	d.display(); // doesnt know what width and height are
	r.display(); // displaying output

	return 0;