/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 12/02/2022
Description: a program to print out a birth date in one specific format
Input: day, month, year
Output: birth date in one specific format
*************************************************************/
#include <stdio.h>
void main()
{
    int day = 0, month = 0, year = 0;

    // Get info
    printf("\nEnter the day: ");
    scanf("%d", &day);

    printf("\nEnter the month: ");
    scanf("%d", &month);

    printf("\nEnter the year: ");
    scanf("%d", &year);

    // Print birthdate
    printf("\nYour birthday is on %d/", day);
    printf("%d/", month);
    printf("%d/", year);
}

/*************************************************************
Enter the day: 7

Enter the month: 10

Enter the year: 2001

Your birthday is on 7/10/2001/
*************************************************************/