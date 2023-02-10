/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 02/03/2022
Description: Program allows user to enter as many as possible
            student data until the user enter -1 to end the program
Input: Lab mark, quiz score, mid term score
Output: Carry mark, message
Condition:  Valid lab mark 1 to 100
            quiz score 1 to 10
            mid term score 1 to 10
Formula: CarryMark = labScore + quizScore + midTermScore;
*************************************************************/
#include <stdio.h>
int main(void)
{
    float labMark, labScore, quizScore, midTermScore, carryMark;
    int count = 0;

    while (count != -1)
    {
        count++;
        // INPUT Lab mark
        printf("\nEnter lab mark (-1 to quit): ");
        scanf("%f", &labMark);

        // VALIDATION Lab mark
        if (labMark == -1)
            break;
        else if (labMark < 0 || labMark > 100)
            printf("\nInvalid data entered. Try again.\n");
        else
        {
            // INPUT Quiz score
            printf("Enter quiz score (-1 to quit): ");
            scanf("%f", &quizScore);

            // VALIDATION Quiz score
            if (quizScore == -1)
                break;
            else if (quizScore < 0 || quizScore > 10)
                printf("\nInvalid data entered. Try again.\n");
            else
            {
                // INPUT Mid term score
                printf("Enter mid term score (-1 to quit): ");
                scanf("%f", &midTermScore);

                // VALIDATION Mid term score
                if (midTermScore == -1)
                    break;
                else if (midTermScore < 0 || midTermScore > 15)
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
                    printf("----------------------------------------------");
                }
            }
        }
    }

    printf("\n[end-of-program]\n");
    return 0;
}