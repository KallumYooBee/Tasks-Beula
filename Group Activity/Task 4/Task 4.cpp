#include <iostream>
#include <cmath>
using namespace std;

class Student {
public:
	string name;
	int grade[5];

	void read() {
		do {
			cout << "Enter name of student: ";
			cin >> name;
			if (name.length() >= 1 && name.length() <= 100)
				break;
		} while (true);
		for (int i = 0; i < 5; i++) {
			do {
				cout << " Enter " << i + 1 << " grade: ";
				cin >> grade[i];

				if (grade[i] >= 1 && grade[i] <= 100)
					break;
			} while (true);
		}
	}
	char find_grade() {
		float average = 0;
		for (int i = 0; i < 5; i++) {
			average += grade[i];
		}
		average /= 5;

		if (average >= 80) return 'A';
		else if (average >= 60 && average < 80) return 'B';
		else if (average >= 50 && average < 60) return 'C';
		else return 'D';
	}
};

int main() {
	Student s;
	int num;

	cout << " How many times do you want to run the program: ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		s.read();
	}
	cout << " Student name: " << s.name << " Student grade: ";

	for (int i = 0; i < num; i++) {
		cout << s.grade[i];
	}
	cout << " Student average: " << s.find_grade();
	return 0;
}