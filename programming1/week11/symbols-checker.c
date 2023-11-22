/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 14/04/2022
DESCRIPTION:  a program that will count the number of alphabets, digits and punctuations
INPUT: a sentence
OUTPUT: count of alphabets, digits and punctuations
FORMULA: NA
CONDITION: strlen < 50
*************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char input[50] = {"\0"};
    puts("Enter your sentence: ");
    fgets(input, 50, stdin);
    int alpha = 0, digit = 0, punct = 0;

    for (int i = 0; i < 50; i++)
    {
        if (isalpha(input[i])) alpha++;
        if (isdigit(input[i])) digit++;
        if (ispunct(input[i])) punct++;
    }

    puts("\nYour sentence contains: ");
    printf("Alphabet: %d\n", alpha);
    printf("Digit: %d\n", digit);
    printf("Punctuation: %d\n", punct);

    return 0;
}