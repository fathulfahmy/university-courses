/*************************************************************
AUTHOR: SW01081798 Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 29/09/2022
DESCRIPTION: The program will then total up all values and calculate the average
INPUT: { {11, 12, 13}, {14, 15, 16}},{ {21, 22, 23}, {24, 25, 26}}, { {31, 32, 33} and {34, 35, 36}}
OUTPUT: all values, total and average
FORMULA:
CONDITION:
*************************************************************/
#include <iostream>
using namespace std;

const int TABLE = 3, ROW = 2, COL = 3;
int main()
{
    int my_threeArray[TABLE][ROW][COL] = {{{11, 12, 13}, {14, 15, 16}},
                                          {{21, 22, 23}, {24, 25, 26}},
                                          {{31, 32, 33}, {34, 35, 36}}};
    float total = 0;

    // OUTPUT array
    // COMPUTE total
    for (int i = 0; i < TABLE; i++)
    {
        cout << "------TABLE " << i + 1 << "------" << endl;
        for (int j = 0; j < ROW; j++)
        {
            for (int k = 0; k < COL; k++)
            {
                cout << my_threeArray[i][j][k] << "\t";
                total += my_threeArray[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    
    // OUTPUT total, average
    cout << "Total: " << total << endl;
    cout << "Average: " << total / (TABLE * ROW * COL) << endl;

    return 0;
}

/*
------TABLE 1------
11      12      13
14      15      16

------TABLE 2------
21      22      23
24      25      26

------TABLE 3------
31      32      33
34      35      36

Total: 423
Average: 23.5
*/