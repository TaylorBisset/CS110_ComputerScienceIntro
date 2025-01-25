#include <iostream>

using namespace std;

int main()
{
    char horLn = 196, verLn = 179;
    for (int row = 0; row < 10; row++) {
        for (int row = 0; row <= 10 * 4; row++) {
            cout << horLn;
        }
        cout << endl;
        for (int column = 0; column < 10; column++) {
            cout << verLn << row << ':' << column;
        }
        cout << verLn << endl;
    }
    cout << "\n\n";
}
