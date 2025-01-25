// DistanceRateAndTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double dist = 1;  // dist = rate * time
double rate = 1;  // rate = dist / time
double hours = 1; // time = dist / rate

int main()
{
    cout << setprecision(2) << fixed;

    /*
    Part 1: Calculate and print time based on distance and speed input.
    */
    cout << "How many kilometers did you travel?\n";
    cin >> dist;
    cout << "How fast (km/h) did you travel?\n";
    cin >> rate;
    hours = dist / rate;
    cout << "You travelled for " << hours << " hours.\n";

    /*
    Part 2: Calculate and print speed based on distance and time input.
    */
    cout << endl;
    cout << "How many kilometers did you travel?\n";
    cin >> dist;
    cout << "How many hours did you travel for? \n";
    cin >> hours;
    rate = dist / hours;
    cout << "You travelled at " << rate << "km/h.\n";

    /*
    Part 3: Calculate and print distance based on time and speed input.
    */
    cout << endl;
    cout << "How many hours did you travel for?\n";
    cin >> dist;
    cout << "How fast (km/h) did you travel? \n";
    cin >> hours;
    dist = rate * hours;
    cout << "You travelled at " << rate << "km/h.\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
