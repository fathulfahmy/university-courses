#include <stdio.h>

int main(void)
{
    // i is number of row
    // j is number of column
    int i, j;

    // top loop
    for (i = 1; i <= 4; i++)
    {
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

    // bottom loop
    for (i = 1; i <= 3; i++)
    {
        // print 3 asterisk for first row
        // print 2 asterisk for second row
        // print 1 asterisk for third row
        for (j = 3; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
