#include <stdio.h>

void main()
{
    int day = 0, month = 0, year = 0;

    // request input of specified data type and store in a variable
    // %d int %f float %c char %s string
    printf("\nEnter the day: ");
    scanf("%d", &day);

    printf("\nEnter the month: ");
    scanf("%d", &month);

    printf("\nEnter the year: ");
    scanf("%d", &year);

    // display stored value of specified data type
    printf("\nYour birthday is on %d/", day);
    printf("%d/", month);
    printf("%d/", year);
}
