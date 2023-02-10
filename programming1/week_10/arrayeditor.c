/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 30/03/2022
DESCRIPTION:a program to determine array size, print array, reverse and sort
INPUT: elements of array, choice
OUTPUT: original array. reversed array, elements in ascending and descending order
FORMULA:
REVERSE
temp = array[start];
array[start] = array[end];
array[end] = temp;
start++;
end--;

BUBBLESORT
int temp = 0;
temp = array[j];
array[j] = array[j - 1];
array[j - 1] = temp;
CONDITION: size > 0, choice 0 - 4
*************************************************************/
#include <stdio.h>
int inputSize();
void printMenu();
void printArray(int array[]);
void reverseArray(int array[], int, int);
void ascendingArray(int array[]);
void descendingArray(int array[]);

int i = 0, j = 0, choice = 0, size = 0;
int main()
{
    printf("\nWelcome to Patui Array Editor\n");
    // Input for size of array
    size = inputSize();
    int array[size];
    // Input for elements of array
    for (int i = 0; i < size; i++)
    {
        array[i] = 0;
        printf("Enter number: ");
        scanf("%d", &array[i]);
    }
    do
    {
        printMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("\nThank you for using Patui Array Editor");
            break;
        case 1:
            printArray(array);
            break;
        case 2:
            reverseArray(array, 0, size - 1);
            break;
        case 3:
            ascendingArray(array);
            break;
        case 4:
            descendingArray(array);
            break;
        default:
            printf("Invalid input!\n");
        }
    } while (choice != 0);
    return 0;
}

// Input for array size
int inputSize()
{
    int input = 0;
    while (input <= 0)
    {
        printf("\nEnter size of array: ");
        scanf("%d", &input);
        if (input <= 0)
            printf("Invalid input!\n");
        else
            return input;
    }
}

// Display program menu
void printMenu()
{
    printf("\n(0): Exit");
    printf("\n(1): Print Array");
    printf("\n(2): Reverse Array");
    printf("\n(3): Ascending Array");
    printf("\n(4): Descending Array");
    printf("\nChoose an operation: ");
}

// Display array
void printArray(int array[])
{
    printf("\nPrinting array...\n");
    for (i = 0; i < size; i++)
        printf("%d\t", array[i]);
    printf("\n");
}

// Sort array in reverse order
void reverseArray(int array[], int start, int end)
{
    // Creates a temporary array
    int tempArray[size], temp = 0;
    for (int i = 0; i < size; i++)
        tempArray[i] = array[i];
    // Reverse
    while (start < end)
    {
        temp = tempArray[start];
        tempArray[start] = tempArray[end];
        tempArray[end] = temp;
        start++;
        end--;
    }
    printArray(tempArray);
}

// Sort array in ascending order
void ascendingArray(int array[])
{
    // Creates a temporary array
    int tempArray[size], temp = 0;
    for (i = 0; i < size; i++)
        tempArray[i] = array[i];
    // Bubble sort 
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size; j++)
        {
            if (tempArray[j] < tempArray[j - 1])
            {
                int temp = 0;
                temp = tempArray[j];
                tempArray[j] = tempArray[j - 1];
                tempArray[j - 1] = temp;
            }
        }
    }
    printArray(tempArray);
}

// Sort array in descending order
void descendingArray(int array[])
{
    // Creates a temporary array
    int tempArray[size], temp = 0;
    for (i = 0; i < size; i++)
        tempArray[i] = array[i];
    // Bubble sort
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size; j++)
        {
            if (tempArray[j] > tempArray[j - 1])
            {
                int temp = 0;
                temp = tempArray[j];
                tempArray[j] = tempArray[j - 1];
                tempArray[j - 1] = temp;
            }
        }
    }
    printArray(tempArray);
}
/*
(0): Exit
(1): Print Array
(2): Reverse Array
(3): Ascending Array
(4): Descending Array
Choose an operation: 4

Printing array...
44      32      25      16      2       -12

(0): Exit
(1): Print Array
(2): Reverse Array
(3): Ascending Array
(4): Descending Array
Choose an operation: 0

Thank you for using Patui Array Editor
 */
