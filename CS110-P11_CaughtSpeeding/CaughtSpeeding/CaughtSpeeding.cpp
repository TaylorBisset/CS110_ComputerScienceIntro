#include <iostream>

using namespace std;

int main()
{
	int userSpeed = 60;

	while (true)
	{
		cout << "You are driving a little too fast, and a police officer stops you.\n";
		cout << "How fast were you going? \n";
		cout << "Your speed in mph: ";

		cin >> userSpeed;
		cout << endl;

		if (userSpeed <= 60)
		{
			cout << "You are free to go. No speeding ticket this time...\n";
		}
		else if (userSpeed > 60 && userSpeed <= 80)
		{
			cout << "You're getting a small ticket. Please slow down.\n";
		}
		else if (userSpeed > 80 && userSpeed <= 100)
		{
			cout << "You are getting a big ticket for your speeding. You better watch your speed!\n";
		}
		else if (userSpeed > 100)
		{
			cout << "Alright buddy. Your car is being impounded... And you're off to the slammer!\n";
		}
	}
}
