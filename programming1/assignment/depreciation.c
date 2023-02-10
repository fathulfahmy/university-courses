/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 18/04/2022
DESCRIPTION: 
INPUT: 
OUTPUT: 
FORMULA: 2/5
CONDITION: 
*************************************************************/
#include <stdio.h>

int main()
{
    float undep = 0, dep = 0, n = 0;

    printf("Enter asset value: ");
    scanf("%f",& undep);
    printf("Enter n value: ");
    scanf("%f",&n);

    float factor = 2 / n;

    for (int i = 0; i < 2; i++)
    {
        printf("\nYear %d\n", i + 1);
        dep = undep * factor;
        undep -= dep;
        printf("Depreciated asset: %.0f\n", undep);
        printf("Depreciation: %.0f\n", dep);
    }

    return 0;
}