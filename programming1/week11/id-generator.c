/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 14/04/2022
DESCRIPTION:
INPUT:
OUTPUT:
FORMULA:
CONDITION:
*************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[20], phoneNum[11], str1[20], str2[20];

    // request user input
    puts("Enter your name: ");
    fgets(name, 20, stdin);
    puts("Enter your phone number: ");
    fgets(phoneNum, 11, stdin);

    // copy up to 4 characters from initial characters and store into string
    strncpy(str1, name, 4);
    strncpy(str2, phoneNum, 4);

    // append string 2 to string
    strcat(str1, str2);

    puts(str1);

    return 0;
}