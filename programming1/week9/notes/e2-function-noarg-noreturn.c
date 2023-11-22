/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 21/03/2022
Description: 
Input: 
Output: 
Formula: 
Condition: 
*************************************************************/
#include <stdio.h>


void printStart()
{
    printf("\n/***** Multiplication *****/");
}

void getData()
{
    int num1, num2, total;
    printf("\nEnter 2 values: \n");
    scanf("%d %d", &num1, &num2);
    total = num1 * num2;
    printf("\nMultiplication of %d and %d is %d", num1, num2, total);
}

void printEndingMessage()
{
    printf("\n[end-of-program]");
}
int main()
{
    printStart();
    getData();
    printEndingMessage();
}