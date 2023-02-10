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
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    return 0;
}

/*

1 3 5 7 9

 */