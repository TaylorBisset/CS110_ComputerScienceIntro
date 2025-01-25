#include <iostream>

using namespace std;

int main()
{
	int month = 1;
	string monthString = "January";
	int year = 2000;

	cout << "Please input what month (as a number) you are checking? ";
	cin >> month;
	cout << endl;

	cout << "Please input what year you are checking? ";
	cin >> year;
	cout << endl;

	if (month == 1) { monthString = "January"; }
	if (month == 2) { monthString = "February"; }
	if (month == 3) { monthString = "Marh"; }
	if (month == 4) { monthString = "April"; }
	if (month == 5) { monthString = "May"; }
	if (month == 6) { monthString = "June"; }
	if (month == 7) { monthString = "July"; }
	if (month == 8) { monthString = "August"; }
	if (month == 9) { monthString = "September"; }
	if (month == 10) { monthString = "October"; }
	if (month == 11) { monthString = "November"; }
	if (month == 12) { monthString = "December"; }

	switch (month)
	{
/*
		case 1:
			cout << "January " << year << ", has 31 days.\n";
			break;

		// February, checking for leap year.
		case 2:

			if (year % 400 == 0.0)
			{
				cout << endl << "In the year " << year << ", February has 29 days.\n";
			}

			else if (year % 4 == 0.0 and year % 100 != 0.0)
			{
				cout << endl << "In the year " << year << ", February has 29 days.\n";
			}

			else
			{
				cout << endl << "In the year " << year << ", February has 28 days.\n";
			}
			break;
			// End leap year logic.
			
		case 3:
			cout << "March " << year << ", has 31 days.\n";
			break;

		case 4:
			cout << "April " << year << ", has 30 days.\n";
			break;

		case 5:
			cout << "May " << year << ", has 31 days.\n";
			break;

		case 6:
			cout << "June " << year << ", has 30 days.\n";
			break;

		case 7:
			cout << "July " << year << ", has 31 days.\n";
			break;

		case 8:
			cout << "August " << year << ", has 31 days.\n";
			break;

		case 9:
			cout << "September " << year << ", has 30 days.\n";
			break;

		case 10:
			cout << "October " << year << ", has 31 days.\n";
			break;

		case 11:
			cout << "November " << year << ", has 30 days.\n";
			break;

		case 12:
			cout << "December " << year << ", has 31 days.\n";
			break;
*/
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << monthString << " " << year << ", has 31 days.";
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			cout << monthString << " " << year << ", has 30 days.";
			break;

		case 2:
			if (year % 400 == 0.0)
			{
				cout << endl << "February " << year << ", has 29 days.\n";
			}

			else if (year % 4 == 0.0 and year % 100 != 0.0)
			{
				cout << endl << "February " << year << ", has 29 days.\n";
			}

			else
			{
				cout << endl << "February " << year << ", has 28 days.\n";
			}
			break;

	}
	cout << endl;
}
