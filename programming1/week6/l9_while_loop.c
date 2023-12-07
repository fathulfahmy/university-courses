#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("\nPlease enter a number (0 - 10): ");
    scanf("%d", &num);

    while (num != -1)
    {
        printf("%d\n", num);
        num--;
    }
    return 0;
}