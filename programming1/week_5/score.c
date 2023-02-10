/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 02/03/2022
Description: 
Input: 
Output: 
Condition: 
Formula: 
*************************************************************/
#include <stdio.h>
#define MAX 3
int main(void)
{
    float labMark, labScore, quizScore, midTermScore, carryMark;

    // INITIALIZE count 1, CONDITION run if (count == 1 - 3), INCREMENT count after every loop
    for (int studentCount = 1; studentCount <= MAX; studentCount++)
    {
        printf("\nStudent number: %d\n", studentCount);
        // INPUT Lab mark
        printf("\nEnter lab mark: ");
        scanf("%f", &labMark);

        // VALIDATION Lab mark
        if (labMark < 0 || labMark > 100)
            printf("\nInvalid data entered. Try again.\n");

        else
        {
            // INPUT Quiz score
            printf("Enter quiz score: ");
            scanf("%f", &quizScore);

            // VALIDATION Quiz score
            if (quizScore < 0 || quizScore > 10)
                printf("\nInvalid data entered. Try again.\n");
            else
            {
                // INPUT Mid term score
                printf("Enter mid term score: ");
                scanf("%f", &midTermScore);

                // VALIDATION Mid term score
                if (midTermScore < 0 || midTermScore > 15)
                    printf("\nInvalid data entered. Try again.\n");
                else
                {
                    // CONVERT Lab mark to percentage
                    labScore = labMark * 0.15;

                    // DISPLAY All data
                    printf("\nLab Score\t Quiz Score\t Mid Term Score");
                    printf("\n%.2f\t\t %.2f\t\t %.2f\n", labScore, quizScore, midTermScore);

                    // COMPUTE Carry mark
                    carryMark = labScore + quizScore + midTermScore;
                    printf("\nMy Carry mark: %.2f", carryMark);

                    // DISPLAY Congratulatory or encouragement message
                    (labScore > 13 && quizScore > 8 && midTermScore >= 13) ? printf("\nWell done!\n") : printf("\n\nDon't be sad, do your best in your final exam.\n");
                    
                    // DISPLAY divider for every loop except for the last one
                    if (studentCount != MAX)
                        printf("----------------------------------------------");
                }
            }
        }
    }

    printf("\n[end-of-program]\n");
    return 0;
}
/*
Student number: 2

Enter lab mark: 90
Enter quiz score: 10
Enter mid term score: 9

Lab Score        Quiz Score      Mid Term Score
13.50            10.00           9.00

My Carry mark: 32.50

Don't be sad, do your best in your final exam.
----------------------------------------------
Student number: 3

Enter lab mark: 90
Enter quiz score: 10
Enter mid term score: 9

Lab Score        Quiz Score      Mid Term Score
13.50            10.00           9.00

My Carry mark: 32.50

Don't be sad, do your best in your final exam.

[end-of-program]
 */