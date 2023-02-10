#include <stdio.h>
int main(void)
{
    int num, reverse = 0, remark;
    printf("Enter a number ");
    scanf("%d", &num);

    while (num != 0)
    {
        remark = num % 10;
        reverse = reverse * 10 + remark;
        num = num / 10;
    }
    printf("reversed number is %d", reverse);
    return 0;
}