// author: fathul fahmy
#include <stdio.h>
#define MAX 3

int main(void)
{
    int studentCount = 0;
    float labMark, labScore, quizScore, midTermScore, carryMark;

    // initialize sentinel value
    int exitProgram = 0;

    // while sentinel value is not equal -1, loop infinitely
    while (exitProgram != -1)
    {
        studentCount++;
        printf("\nStudent ID: %d\n", studentCount);

        printf("\nEnter lab mark (0 - 100 or -1 to quit): ");
        scanf("%f", &labMark);
        exitProgram = labMark;

        if (labMark < 0 || labMark > 100)
            printf("\nInvalid input!\n");

        else
        {
            printf("Enter quiz score (0 - 10 or -1 to quit): ");
            scanf("%f", &quizScore);
            exitProgram = quizScore;

            if (quizScore < 0 || quizScore > 10)
                printf("\nInvalid input!\n");

            else
            {
                printf("Enter mid term score (0 - 15 or -1 to quit): ");
                scanf("%f", &midTermScore);
                exitProgram = midTermScore;

                if (midTermScore < 0 || midTermScore > 15)
                    printf("\nInvalid data entered. Try again.\n");

                else
                {
                    labScore = labMark * 0.15;

                    printf("\nLab Score\t Quiz Score\t Mid Term Score");
                    printf("\n%.2f\t\t %.2f\t\t %.2f\n", labScore, quizScore, midTermScore);

                    carryMark = labScore + quizScore + midTermScore;
                    printf("\nMy Carry mark: %.2f", carryMark);

                    (labScore > 13 && quizScore > 8 && midTermScore >= 13) ? printf("\nWell done!\n") : printf("\nDon't be sad, do your best in your final exam.\n");

                    if (studentCount != MAX)
                        printf("----------------------------------------------");
                }
            }
        }
    }

    printf("\n[end-of-program]\n");
    return 0;
}