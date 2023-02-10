/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 14/04/2022
DESCRIPTION: a program to construct a user ID code
INPUT: name and phone number
OUTPUT: user ID code
FORMULA: 1 letter from the name and 3 digits from the phone number
CONDITION: strlen < 20
*************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[20], number[20], str1[20], str2[20];
    puts("Enter your first name: ");
    fgets(name, 20, stdin);
    puts("Enter your phone number: ");
    fgets(number, 20, stdin);

    strncpy(str1, name, 1);
    strncpy(str2, number, 3);
    strcat(str1, str2);
    printf("Your user ID code: %s\n", str1);
    
    return 0;
}