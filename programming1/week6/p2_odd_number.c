#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        // display i that returns a remainder if divided by 2
        // e.g. 5 divided by 2 returns 1 as a remainder
        if (i % 2 != 0)
            printf("%d ", i);
    }
    return 0;
}
