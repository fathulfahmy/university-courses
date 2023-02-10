/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 02/03/2022
Description: a program that reports the contents of a compressed-gas
            cylinder based on the first letter of the cylinder’s colour
Input: Letter
Output: Content of cylinder
Condition:  Password == 1111
            valid letter
Formula: NA
*************************************************************/
#include <stdio.h>

int main(void)
{
    int password;
    char color = (char)1;

    while (color != 0)
    {
        // INPUT password
        printf("\nEnter password: ");
        scanf("%d", &password);

        // WRONG password
        if (password != 1111)
            printf("Wrong password!\n");
        else
        {
            printf("Olah, welcome to my system.\n");
            while (color != 0)
            {
                // INPUT color
                printf("\nWhat is the colour of the cylinder? <Orange, Brown, Yellow, Green>: ");
                scanf(" %c", &color);

                /*
                Orange  = Ammonia
                Brown   = Carbon monoxide
                Yellow  = Hydrogen
                Green   = Oxygen
                */
               
                switch (color)
                {
                // Orange
                case 'o':
                case 'O':
                    printf("You are dealing with Ammonia\n");
                    break;
                // Brown
                case 'b':
                case 'B':
                    printf("You are dealing with Carbon monoxide\n");
                    break;
                // Yellow
                case 'y':
                case 'Y':
                    printf("You are dealing with Hydrogen\n");
                    break;
                // Green
                case 'g':
                case 'G':
                    printf("You are dealing with Oxygen\n");
                    break;
                // Default
                default:
                    printf("Unknown substance!\n");
                    color = (char)0;
                }
            }
            printf("\nThank you.");
        }
    }
}