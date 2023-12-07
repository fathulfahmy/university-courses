// author: fathul fahmy
#include <stdio.h>

// function 1
void printTitle()
{
    printf("\n/***** Multiplication *****/");
}

// function 2
void multiplyTwoNum()
{
    int num1, num2, total;

    printf("\nEnter 2 values: \n");
    scanf("%d %d", &num1, &num2);

    total = num1 * num2;

    printf("\nMultiplication of %d and %d is %d", num1, num2, total);
}

// function 3
void printEndMessage()
{
    printf("\n[end-of-program]");
}

int main()
{
    // call function 1
    printTitle();

    // call function 2
    multiplyTwoNum();

    // call function 3
    printEndMessage();
}