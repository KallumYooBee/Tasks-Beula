// RevisionForStudy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

class Shapes {
public:
	float height, width, side, diagonal, radius, area, perimeter;

	void read_rectangle() {
		do {
			cout << "Please enter height of rectangle ";
			cin >> height;
			if (height >= 1 && height <= 100000)
				break;
		} while (true);

		do {
			cout << "Please enter width of rectangle ";
			cin >> width;
			if (width >= 1 && width <= 100000)
				break;
		} while (true);
	}
	void read_square() {
		do {
			cout << "Enter the side of square ";
			cin >> side;
			if (side >= 1 && side <= 100000)
				break;
		} while (true);

	}
	void read_circle() {
		do {
			cout << "Enter the radius of circle: ";
			cin >> radius;
			if (radius >= 1 && radius <= 100)
				break;
		} while (true);
	}
	void read_rhombus() {
		do {
			cout << "Enter the diagonal of Rhombus: ";
			cin >> diagonal;
			if (diagonal >= 1 && diagonal <= 1000)
				break;
		} while (true);
	}
};

class Area : public Shapes {
public:
	void area_rectangle() {
		area = height * width;
		cout << "The area of rectangle is: " << area << endl;
	}
	void area_square() {
		area = side * 4;
		cout << "The area of square is: " << area << endl;
	}
	void area_circle() {
		area = 3.14 * pow(radius, 2);
		cout << "The area of circle is: " << area << endl;
	}
	void area_rhombus() {
		area = diagonal * diagonal / 2;
		cout << "The area of rhombus is: " << area << endl;
	}
};

class Perimeter : public Shapes {
public:
	void perimeter_rectangle() {
		perimeter = 2 * (height * width);
		cout << "The perimeter of rectangle is: " << perimeter << endl;
	}
	void perimeter_square() {
		perimeter = 4 * side;
		cout << "The perimeter of square is: " << perimeter << endl;
	}
	void perimeter_circle() {
		perimeter = 2 * 3.14 * radius;
		cout << "The perimeter of circle is: " << perimeter << endl;
	}
	void perimeter_rhombus() {
		perimeter = 4 * diagonal;
		cout << "The perimeter of rhombus is: " << perimeter << endl;
	}
};


int main() {

	int num;
	Area sqr, rec, crcl, rhom;
	Perimeter square, rectangle, circle, rhombus;

	cout << "How many times do you want to run the program? : ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		rec.read_rectangle();
		rec.area_rectangle();
		rectangle.read_rectangle();
		rectangle.perimeter_rectangle();

		sqr.read_square();
		sqr.area_square();
		square.read_square();
		square.perimeter_square();

		crcl.read_circle();
		crcl.area_circle();
		circle.read_circle();
		circle.perimeter_circle();

		rhom.read_rhombus();
		rhom.area_rhombus();
		rhombus.read_rhombus();
		rhombus.perimeter_rhombus();
	}
}