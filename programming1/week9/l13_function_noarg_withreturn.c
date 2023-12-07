// author: fathul fahmy
#include <stdio.h>

// returnType functionName()
int calcAreaOfSquare()
{
    int area = 0, side = 0;

    printf("Enter side length of a square (cm): ");
    scanf("%d", &side);

    area = side * side;

    // return an int
    return area;
}

int main()
{
    // this program has 2 local variables named area
    // area in main()
    // area in calcAreaOfSquare()
    int area = 0;

    // call function and function will return a value
    // assign returned value to area
    area = calcAreaOfSquare();

    printf("Calculated area of square: %dcm", area);

    return 0;
}