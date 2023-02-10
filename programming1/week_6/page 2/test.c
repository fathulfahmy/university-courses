/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 02/03/2022
Description: e C program to display an odd number from number 1 to 10
Input: NA
Output: odd number from number 1 to 10
Condition:
Formula: oddNum == num % 2 = 0
*************************************************************/
#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        if (j % 2 != 0)
            printf("%d ", j);
        
        printf("\n");
    }
    return 0;
}