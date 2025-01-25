#include <iostream>

using namespace std;

int main()
{
    char isSummer = 'n';
    int temperature = 70;
    while (true)
    {
        cout << "Is it Summer?\n(y/n) : ";
        cin >> isSummer;

        cout << "What is the temperature in degrees Fahrenheit? ";
        cin >> temperature;
        if (temperature > 60)
        {
            if ((isSummer == 'n' && temperature <= 90) || (isSummer == 'y' && temperature <= 100))
            {
                cout << endl << "The squirrels are out playing!\n";
            }
            else
            {
                cout << endl << "The squirrels are playing inside.\n";
            }
        }
        else
        {
            cout << endl << "The squirrels are playing inside.\n";
        }
    }
}
