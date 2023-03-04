#include <iostream>
using namespace std;
int main()
{
    // declare column and row
    const int COLUMN = 10, ROW = 10;
    // declare array
    int array[ROW][COLUMN];
    // request input
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << "Enter element"
                 << "[" << i << "]"
                 << "[" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // display array
    cout << "\nDisplay array: \n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }
    // prompt 3 numbers

    // number 1 - element (1,1)
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if (i == 1 && j == 1)
            {
                cout << "\nEnter element"
                     << "[" << i << "]"
                     << "[" << j << "]: ";
                cin >> array[i][j];
            }
        }
    }
    // number 2 - arithmetic difference between rows in first column
    // j == 0 - first column
    int difference;
    for (int i = 0; i < ROW; i++)
    {
        // first element
        if (i == 0)
            difference = array[i][0];
        // other than first element, substract
        else
            difference = difference - array[i][0];
    }
    cout << "\nDifference between rows in first column: " << difference;
    // number 3 - geometric ratio between elements in different columns
    double ratio;
    for (int i = 0; i < ROW; i++)
    {
        ratio = 0;
        for (int j = 0; j < COLUMN; j++)
        {
            // first element
            if (j == 0)
                ratio = array[i][j];
            // other than first element, divide
            else
                ratio = ratio / array[i][j];
        }
        cout << "\nRatio row [" << i << "]: " << ratio;
    }
    // display array
    cout << "\nDisplay array: \n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }
    return 0;
}