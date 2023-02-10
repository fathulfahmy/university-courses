/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 12/02/2022
Description: Write, compile and execute the following code
Input: one letter, one word
Output: variable a, variable b, one letter, one word
*************************************************************/
#include <stdio.h>
void main()
{
    char letter;
    char word[20];
    int a;
    float b;
    a = 1024;
    b = 512;
    printf("Value of variable a is %2d\n", a);
    printf("Value of variable b is %f\n", b);
    printf("Type in one letter: ");
    scanf("%c", &letter);
    printf("Type in one word: ");
    scanf("%s", word);
    printf("Value of variable letter is %c\n", letter);
    printf("Value of variable word is %s\n", word);
}

/*************************************************************
Value of variable a is 1024
Value of variable b is 512.000000
Type in one letter: z
Type in one word: sleep
Value of variable letter is z
Value of variable word is sleep
*************************************************************/