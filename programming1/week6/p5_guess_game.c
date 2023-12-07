#include <stdio.h>
#define CORRECT_GUESS 888

int main(void)
{
    int input, count;

    // display game name and instruction
    printf("\n---------------------Basic Guess Game---------------------");
    printf("\nInstruction: You have 3 chances to guess the correct value");
    printf("\n----------------------------------------------------------");

    // for(initial value, loop condition, increment or decrement)
    for (count = 1; count <= 3; count++)
    {
        // request user input
        printf("\nEnter your guess: ");
        scanf("%d", &input);

        // display victory message if user guessed correct number
        if (input == CORRECT_GUESS)
        {
            printf("Good guess!\n");
            // end game
            break;
        }

        // user has guessed 3 times
        else if (count == 3)
        {
            printf("Bye-bye\n");
            // end game
            break;
        }

        // display defeat message if user enter wrong number
        else
            printf("Oh no, try again!\n");
    }
    return 0;
}