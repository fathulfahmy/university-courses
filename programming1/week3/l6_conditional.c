#include <stdio.h>
#define MAX 3

int main(void)
{
    float labMark, labScore, quizScore, midTermScore, carryMark;

    // for(initial value, loop condition, increment or decrement)
    for (int studentCount = 1; studentCount <= MAX; studentCount++)
    {
        printf("\nStudent ID: %d\n", studentCount);

        // request user input for lab mark
        printf("\nEnter lab mark (0 - 100): ");
        scanf("%f", &labMark);

        // display error message if user input is out of range
        if (labMark < 0 || labMark > 100)
            printf("\nInvalid input!\n");

        // continue request user input if input is within range
        else
        {
            printf("Enter quiz score (0 - 10): ");
            scanf("%f", &quizScore);

            // display error message if user input is out of range
            if (quizScore < 0 || quizScore > 10)
                printf("\nInvalid input!\n");

            // continue request user input if input is within range
            else
            {
                printf("Enter mid term score (0 - 15): ");
                scanf("%f", &midTermScore);

                // display error message if user input is out of range
                if (midTermScore < 0 || midTermScore > 15)
                    printf("\nInvalid data entered. Try again.\n");

                // continue display total score for all exam
                else
                {
                    // convert lab mark to percentage
                    labScore = labMark * 0.15;

                    // \n to print newline \t to print tab
                    printf("\nLab Score\t Quiz Score\t Mid Term Score");
                    printf("\n%.2f\t\t %.2f\t\t %.2f\n", labScore, quizScore, midTermScore);

                    // carryMark is sum of all exam score
                    carryMark = labScore + quizScore + midTermScore;
                    printf("\nMy Carry mark: %.2f", carryMark);

                    // if else shorthand
                    // (condition) ? run this if true : run this if false
                    (labScore > 13 && quizScore > 8 && midTermScore >= 13) ? printf("\nWell done!\n") : printf("\nDon't be sad, do your best in your final exam.\n");

                    // display a divider for every loop except for last loop
                    if (studentCount != MAX)
                        printf("----------------------------------------------");
                }
            }
        }
    }

    printf("\n[end-of-program]\n");
    return 0;
}
