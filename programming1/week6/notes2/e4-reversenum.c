#include <stdio.h>
int main(void)
{
    int num, reverse = 0, remark;
    printf("Enter a very long number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remark = num % 10;
        reverse = reverse * 10 + remark;
        num = num / 10;
    }
    printf("reversed number: %d", reverse);
    return 0;
}