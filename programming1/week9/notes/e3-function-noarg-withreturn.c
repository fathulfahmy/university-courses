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

void calcArea()
{
    int area = 0, side = 0;
    printf("Enter side: ");
    scanf("%d", &side);
    area = side * side;
    return area;
}

int main()
{
    calcArea();
}