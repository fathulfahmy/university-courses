/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 02/03/2022
Description: e a C program to print all numbers in reverse from n to 1
Input:
Output:
Condition:
Formula:
*************************************************************/
#include <stdio.h>
int main(void)
{
    int num = 0;

    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("-------------------------\n");

    while (num != 0) 
    {
        printf("%d\n",num);
        num--;
    }
    return 0;
}