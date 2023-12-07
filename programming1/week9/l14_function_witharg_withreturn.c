// author: fathul fahmy
#include <stdio.h>

// returnType functionName (argument1, argument2, ...)
// argument a and b will be duplicated to be used in this function
int addTwoNum(int a, int b)
{
    int result = 0;

    result = a + b;

    return result;
}

int main()
{
    int sum = 0;

    // pass 2 as argument a and 4 as argument b
    sum = addTwoNum(2, 4);

    printf("\nSum of 2 and 4: %d", sum);

    int firstNum = 5, secondNum = 10;

    // firstNum and secondNum in main() will be duplicated by addTwoNum() and
    // assigned to new variable named a and b
    sum = addTwoNum(firstNum, secondNum);

    printf("\nSum of firstNum and secondNum: %d", sum);
}