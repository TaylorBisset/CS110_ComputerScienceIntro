// ioLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ask name
    cout << "What is your name?\n";
    // storage space for the name you input
    string name;
    // get the name from the keyboard
    // store it in a name
    cin >> name;
    /*
    endl will send a return character
    to move to a new line
    */
    cout << "\nHello, " << name << endl;
    
    cout << "What is your favorite color?\n";
    cin >> name;
    cout << "\nOh! I like " << name << ", too!\n";

    // add the system pause so you can see the output
    system("pause");
        // for linux, use:
        // system("read -p 'Press Enter to continue...' var");

    return 0;
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