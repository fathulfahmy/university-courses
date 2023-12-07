#include <stdio.h>
#define CORRECT_PASSWORD 1111

int main(void)
{
    int password;

    // type casting is convert a data type to another data type
    // (char)1 convert int 1 to char

    // convert 1 to char and store in char variable color
    char color = (char)1;

    while (color != 0)
    {
        // request user input for password
        printf("\nEnter password: ");
        scanf("%d", &password);

        if (password != CORRECT_PASSWORD)
            printf("Wrong password!\n");
        else
        {
            printf("Olah, welcome to my system.\n");
            while (color != 0)
            {
                // request user input for color
                printf("\nWhat is the colour of the cylinder? (Orange, Brown, Yellow, Green): ");

                // store only the first character from user input to variable color
                scanf(" %c", &color);

                switch (color)
                {

                // if user input is orange
                case 'o':
                case 'O':
                    printf("You are dealing with Ammonia\n");
                    break;

                // if user input is brown
                case 'b':
                case 'B':
                    printf("You are dealing with Carbon monoxide\n");
                    break;

                // if user input is yellow
                case 'y':
                case 'Y':
                    printf("You are dealing with Hydrogen\n");
                    break;

                // if user input is green
                case 'g':
                case 'G':
                    printf("You are dealing with Oxygen\n");
                    break;

                // if user enter invalid input
                default:
                    printf("Unknown substance!\n");

                    // exit program
                    color = (char)0;
                }
            }
            printf("\nThank you.");
        }
    }
}