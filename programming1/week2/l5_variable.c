#include <stdio.h>

void main()
{
    // declare a character
    char letter;

    // declare a string
    char word[20];

    // declare variable a and b without initial value
    int a;
    float b;

    // assign value to variable a and b
    a = 1024;
    b = 512;

    // display variable a and b
    printf("Value of variable a is %2d\n", a);
    printf("Value of variable b is %f\n", b);

    // request input and store in variable letter
    printf("Type in one letter: ");
    scanf("%c", &letter);

    // request input and store in variable word
    printf("Type in one word: ");
    scanf("%s", word);

    // display stored value in letter and word
    printf("Value of variable letter is %c\n", letter);
    printf("Value of variable word is %s\n", word);
}
