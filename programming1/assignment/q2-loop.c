/*************************************************************
Date: 19/03/2022
Description: a complete C program to translate the following flowchart into its equivalent executable
Input: score
Output: average, error message
Formula: avg = sum / num
Condition: score > 20
*************************************************************/

#include <stdio.h>

int main()
{
    int num = 0, score = 0, avg = 0, sum = 0;

    while(num <= 10)
    {
        // Input
        printf("Enter score [%d]: ", num);
        scanf("%d", &score);

        // Sum loop
        if (score > 20)
        {
            sum += score;
            num++;
        }

        // Error message
        else
            printf("Invalid data!\n");   
    }
    
    avg = sum / num;
    printf("Average score: %d ", avg);
    return 0;
}