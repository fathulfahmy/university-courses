/*************************************************************
AUTHOR: SW01081798 Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 29/09/2022
DESCRIPTION: a program that asks the user to enter marks for five array
INPUT: five temperature
OUTPUT: minimum, maximum, average temperature
FORMULA:
CONDITION:
*************************************************************/
#include <iostream>
using namespace std;

const int SIZE = 5;
void sortArray(float[]);

int main()
{
    float total = 0, array[SIZE] = {0};
    // INPUT temperature
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter temperature " << i + 1 << ": ";
        cin >> array[i];
        total += array[i];
    }
    
    // SORT
    sortArray(array);
    cout << endl;
    
    // OUTPUT minimum, maximum, average temperature
    cout << "Minimum: " << array[0] << endl;
    cout << "Maximum: " << array[4] << endl;
    cout << "Average temperature: " << total / 5 << endl;

    return 0;
}

// SORT temperature
void sortArray(float array[])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (int j = 1; j < SIZE; j++)
        {
            if (array[j] < array[j - 1])
            {
                float temp = 0;
                temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
}


/*
Enter temperature 1: -180.5
Enter temperature 2: 90
Enter temperature 3: 360
Enter temperature 4: -30.33
Enter temperature 5: 45

Minimum: -180.5
Maximum: 360
Average temperature: 56.834
*/