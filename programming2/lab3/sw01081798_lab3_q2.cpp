/*************************************************************
AUTHOR: SW01081798 Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 29/09/2022
DESCRIPTION: The program will then total up all values and calculate the average
INPUT: { {2, 4}, {6, 8}, {10, 12} {13, 14} and {15, 16}}
OUTPUT: all values, total and average
FORMULA:
CONDITION:
*************************************************************/
#include <iostream>
using namespace std;

const int ROW = 5, COL = 2;

int main()
{
    int array[ROW][COL] = {{2, 4},
                           {6, 8},
                           {10, 12},
                           {13, 14},
                           {15, 16}};

    float total = 0;
    
    // OUTPUT array
    // COMPUTE total
    cout << "ROW " << endl;
    for (int i = 0; i < ROW; i++)
    {
        cout << "[" << i + 1 << "]\t";
        for (int j = 0; j < COL; j++)
        {
            cout << array[i][j] << "\t";
            total += array[i][j];
        }
        cout << endl;
    }
    
    // OUTPUT total & average
    cout << "\nTotal: " << total << endl;
    cout << "Average: " << total / (ROW * COL) << endl;

    return 0;
}

/*
ROW
[1]     2       4
[2]     6       8
[3]     10      12                                                                                                                                       rFile }
[4]     13      14
[5]     15      16

Total: 100
Average: 10
*/