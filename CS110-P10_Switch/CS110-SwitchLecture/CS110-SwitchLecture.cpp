#include <iostream>

using namespace std;

int main()
{
	int age = 0;
	cout << "Please enter your age: ";
	cin >> age;
	switch (age) {
	case 1:
		cout << "You're one.";
		break;
	case 2:
		cout << "You're two.";
		break;
	case 3:
		cout << "You're three.";
		break;
	case 4:
		cout << "You're four.";
		break;
	default:
		cout << "You're older than four!";
		break;
	}

	cout << endl;

	char grd = 'z';
	cout << "Please enter your grade: ";
	cin >> grd;
	switch (grd) {
	case 'a':
		cout << "You're amazing.";
		break;
	case 'b':
		cout << "You're doing good.";
		break;
	case 'c':
		cout << "You're doing ok.";
		break;
	case 'd':
	case 'f':
		cout << "You're should come talk with me.";
		break;
	default:
		cout << "Your grade has a problem";
		break;
	}
	/*
	switch (switch_on)
	{
	default:
		break;
	}
	*/
}
