#include <iostream>
using namespace std;
int main()
{
    // declare column and row
    const int COLUMN = 10, ROW = 10;
    // declare array
    // int array[ROW][COLUMN] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    //                           {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
    //                           {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
    //                           {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
    //                           {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
    //                           {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
    //                           {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
    //                           {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
    //                           {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
    //                           {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}};

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
    cout << "\nInitial array: \n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << array[i][j] << "\t";
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
    cout << "\nDifference between rows in first column: " << difference << endl;
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
    cout << "\n\nFinal array: \n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}