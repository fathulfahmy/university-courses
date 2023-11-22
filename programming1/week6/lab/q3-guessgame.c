/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 02/03/2022
Description: Identify whether the integer value entered by the 
            user is matched to the value 666
Input: Integer
Output: Ccorrect, Wrong, Goodbye)
Condition: count <= 3
Formula: NA
*************************************************************/
#include <stdio.h>
int main(void)
{
    int input, count;

    // DISPLAY Titlebar
    printf("\n---------------------Basic Guess Game---------------------");
    printf("\nInstruction: You have 3 chances to guess the correct value");
    printf("\n----------------------------------------------------------");

    // INITIALIZE count, CONDITION run if count <= 3, INCREMENT count after every iteration
    for (count = 1; count <= 3; count++)
    {
        // INPUT guessed value
        printf("\nEnter your guess: ");
        scanf("%d", &input);

        // CORRECT guess
        if (input == 666)
        {
            printf("Good guess!\n");
            break;
        }
        // WRONG guess end message
        else if (count == 3)
        {
            printf("Bye-bye\n");
            break;
        }
        // WRONG guess
        else
            printf("Oh no, try again!\n");
    }
    printf("----------------------------------------------------------");
    return 0;
}
/*
---------------------Basic Guess Game---------------------
Instruction: You have 3 chances to guess the correct value
----------------------------------------------------------
Enter your guess: 45
Oh no, try again!

Enter your guess: 666
Good guess!
----------------------------------------------------------
 */