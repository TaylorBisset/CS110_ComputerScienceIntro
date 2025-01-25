// CreateVariables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> //same as #include <math.h>

using namespace std;

void printTwoDecimals(double printMe)
{
    printf("%.2f \n", printMe);
}

int main()
{
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

    int firstNumber = 2.99999;
    cout << firstNumber << endl;

    double secondNumber = sqrt(firstNumber);
    printTwoDecimals(secondNumber);

    system("pause");
    return 0;
}
