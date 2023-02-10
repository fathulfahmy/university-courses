/*************************************************************
Date: 19/03/2022
Description: Prepare a complete program to print the following pattern
Input: N value
Output: pyramid pattern
Formula: 2 * i - 1
Condition: N > 0
*************************************************************/
#include <stdio.h>
int main()
{
    int i, j, k, nValue;
    char alphabet = 'A';

    // INPUT
    printf("Enter N value: ");
    scanf("%d", &nValue);
    if (nValue <= 0)
        printf("Invalid value!");

    for (i = 1; i <= nValue; i++)
    {
        // WHITESPACE
        for (j = 1; j <= nValue - i; j++)
            printf(" ");
        // ALPHABET
        for (k = 1; k <= (2 * i - 1); k++)
            printf("%c", alphabet);

        alphabet++;
        printf("\n");
    }
    return 0;
}