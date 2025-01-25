// SurfAreaAndVolumeSphere.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double radius;
    double pi = 3.14159265;
    cout << "Please enter the radius of the shpere: ";
    cin >> radius;
    cout << endl;

    double surfaceArea = 4.0*pi*pow(radius,2);
    double volumeSphere = (4.0/3.0)*pi*pow(radius,3);
    cout << setprecision(2) << fixed;

    cout << "The Surface Area of a sphere with a radius of " << radius << " is " << surfaceArea << "." << endl;
    cout << "The Volume of a sphere with a radius of " << radius << " is " << volumeSphere << "." << endl << endl;
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
