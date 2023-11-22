/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 12/02/2022
Description: The differences of the output formats %d, %i, x, %o, %e, %E, %c, %f, and %s
Input: NA
Output: Output in different formats %d, %i, x, %o, %e, %E, %c, %f, and %s
*************************************************************/
#include <stdio.h>
void main()
{
    printf("The number is %d\n", 15);
    printf("The number is %i\n", 15);
    printf("The number is %x\n", 15);
    printf("The number is %o\n", 15);
    printf("The number is %e\n", 15.0);
    printf("The number is %E\n", 15.0);
    printf("The number is %c\n", 'A');
    printf("The number is %f\n", 15.0);
    printf("The number is %s\n", "Hi");
}

/*************************************************************
The number is 15
The number is 15
The number is f
The number is 17
The number is 1.500000e+01
The number is 1.500000E+01
The number is A
The number is 15.000000
The number is Hi
*************************************************************/