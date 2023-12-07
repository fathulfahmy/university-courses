#include <stdio.h>

int main(void)
{
    // i is number of row
    // j is number of column
    int i, j;

    // outer loop
    for (i = 1; i <= 4; i++)
    {
        // inner loop

        // print 1 asterisk for first row
        // print 2 asterisk for second row
        // print 3 asterisk for third row
        // print 4 asterisk for fourth row
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
