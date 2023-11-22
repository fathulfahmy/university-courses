/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 02/03/2022
Description: 
Input: 
Output: 
Condition: 
Formula: 
*************************************************************/
#include <stdio.h>
int main(void)
{
    int i, j;
    // Top loop
    // i <= 4 meaning 4 rows
    for (i = 1; i <= 4; i++)
    {
        // initialize 1 asterisk and increment
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Bottom loop
    // i <= 3 meaning 3 rows
    for (i = 1; i <= 3; i++)
    {
        // initialize 3 asterisks and decrement
        for (j = 3; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

*
**
***
****
***
**
*

 */