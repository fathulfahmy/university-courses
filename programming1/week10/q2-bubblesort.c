/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 30/03/2022
DESCRIPTION: a program to store input list of 10 numbers,
display largest element, average of the numbers
INPUT: elements of array
OUTPUT: largest element of array, average of all elements
FORMULA: avg = sum / SIZE
CONDITION: NA
*************************************************************/
#include <stdio.h>
#define SIZE 10

int i = 0, j = 0;
int main()
{
    float array[SIZE], sum = 0;
    // Input for elements of array
    printf("\nPlease enter %d numbers\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        array[i] = 0;
        printf("Enter number %d: ", i + 1);
        scanf("%f", &array[i]);
        sum += array[i];
    }
    // Bubble sort
    for (i = 0; i < SIZE; i++)
    {
        for (j = 1; j < SIZE; j++)
        {
            if (array[j] < array[j - 1])
            {
                int temp = 0;
                temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
    // Display last element of sorted array and average of all elements
    printf("\nLargest number is: %.2f", array[SIZE - 1]);
    printf("\nAverage is: %.2f", sum / SIZE);
    return 0;
}
/*
Please enter 10 numbers
Enter number 1: 12
Enter number 2: -45
Enter number 3: 36
Enter number 4: 78
Enter number 5: 47
Enter number 6: 10
Enter number 7: 24
Enter number 8: -36
Enter number 9: -79
Enter number 10: 15

Largest number is: 78.00
Average is: 6.20
 */