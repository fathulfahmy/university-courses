// author: fathul fahmy
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char userInput[50] = {"\0"};

    // request user input
    puts("Enter your sentence: ");
    fgets(userInput, 50, stdin);

    int alpha = 0, digit = 0, punct = 0;

    for (int i = 0; i < 50; i++)
    {
        // count symbol in user userInput
        if (isalpha(userInput[i]))
            alpha++;
        if (isdigit(userInput[i]))
            digit++;
        if (ispunct(userInput[i]))
            punct++;
    }

    // display counted symbols
    puts("\nYour sentence contains: ");
    printf("Alphabet: %d\n", alpha);
    printf("Digit: %d\n", digit);
    printf("Punctuation: %d\n", punct);

    return 0;
}
