#include <iostream>

using namespace std;

int main()
{
	char onVacation = 'n';
	int dayOfWeek = 1;
	while (true)
	{
		cout << "Are you on vacation? (y/n) : ";
		cin >> onVacation;
		if (onVacation == 'n')
		{
			cout << "\nWhat day of the week is it?\n";
			cout << "1 = Sunday\n2 = Monday\n3 = Tuesday\n4 = Wednesday\n5 = Thursday\n6 = Friday\n7 = Saturday\n";
			cout << "\nDay? ";

			cin >> dayOfWeek;
			if (dayOfWeek > 1 && dayOfWeek < 7)
			{
				cout << "\nGot to work, sleepy-head!\n";
			}
			else
			{
				cout << "\nYou can sleep in!\n";
			}
		}
		else if (onVacation == 'y')
		{
			cout << "\nYou can sleep in!\n";
		}
		else if (onVacation != 'n' && onVacation != 'y')
		{
			cout << "\nPlease play by the rules next time...\n";
		}
	}
}
