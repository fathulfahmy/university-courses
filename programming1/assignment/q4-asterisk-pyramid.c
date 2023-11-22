/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 19/03/2022
Description: Prepare a complete program to print the following pattern
Input: N value
Output: pyramid pattern
Formula: NA
Condition: N > 0
*************************************************************/
#include <stdio.h>
int main()
{
    int nValue, i, j ;

    // INPUT
    printf("Enter N value: ");
    scanf("%d", &nValue);
    if (nValue <= 0)
        printf("Invalid value!");

    // TOP
    for (i = 1; i <= nValue; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
    
        printf("\n");
    }
    // BOTTOM
    for (i = 1; i <= nValue - 1; i++)
    {
        for (j = nValue - 1; j >= i; j--)
            printf("*");

        printf("\n");
    }
    
    return 0;    

}