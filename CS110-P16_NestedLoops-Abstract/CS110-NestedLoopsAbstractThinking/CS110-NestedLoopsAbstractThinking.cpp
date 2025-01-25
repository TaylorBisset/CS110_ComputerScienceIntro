#include <iostream>

using namespace std;

int main()
{
    char horLn = 196, verLn = 179;
    for (int row = 0; row < 10; row++)
    {
        // Prints horizontal lines.
        for (int row = 0; row <= 10 * 4; row++)
        {
            cout << horLn;
        }
        cout << endl;

        // Prints "| X |" at each row and column interval.
        for (int column = 0; column < 10; column++)
        {
            cout << verLn;

            // Grid print logic here. Comment out sections not currently being used.
//----------------------------------------
            //// 1: Print " $ " in even rows.
            //if (row % 2 == 0)
            //{
            //    cout << " $ ";
            //}
            //else
            //    cout << "   ";
//----------------------------------------
            //// 2: Print " # " in even columns.
            //if (column % 2 == 0)
            //{
            //    cout << " # ";
            //}
            //else
            //    cout << "   ";
//----------------------------------------
            //// 3: Print " X " in diagonal line from upper right to lower left.
            //if (row + column == 9)
            //{
            //    cout << " X ";
            //}
            //else
            //    cout << "   ";
//----------------------------------------
            // 4: Print " X " in diagonal line from upper right to lower left and from upper left to lower right.
            if (row + column == 9 || row == column)
            {
                cout << " X ";
            }
            else
                cout << "   ";
//----------------------------------------
        }

        cout << verLn << endl;

    }
    cout << "\n\n";
}
