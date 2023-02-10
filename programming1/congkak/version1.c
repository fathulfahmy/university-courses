/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 06/04/2022
DESCRIPTION:
INPUT:
OUTPUT:
FORMULA:
CONDITION:
*************************************************************/
#include <stdio.h>
#define SIZE 16

void printArray(int array[]);
int getFront(int);
int getPlayer(int);

int player = 0, array[SIZE] = {0, 7, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 7};
;
int main()
{
    int round = 1;
    int totalScore = array[0] + array[8];
    printArray(array);

    while (totalScore < 98)
    {
        int rear = 0, front = 0, bound = 0, turn = 0;
        // Display Congkak
        player = getPlayer(round);
        // Initial value
        while (array[front] == 0)
        {
            front = getFront(player);
            if (array[front] == 0)
                printf("Invalid input!\n");
        }
        bound = SIZE - front - 1;
        turn = array[front];
        array[front] = 0;

        // To move
        do
        {
            // No overflow
            if (turn <= bound)
            {
                rear = front + turn;
                for (int i = front + 1; i <= rear; i++)
                {
                    if (player == 1 && i == 0)
                    {
                        rear++;
                        turn++;
                    }
                    else if (player == 2 && i == 8)
                    {
                        rear++;
                        turn++;
                    }
                    else
                    {
                        array[i]++;
                        turn--;
                    }
                }

                // Next value
                if (array[rear] != 1 && rear != 0 && rear != 8)
                {
                    turn = array[rear];
                    array[rear] = 0;
                    front = rear;
                    bound = SIZE - front - 1;
                }
            }
            // Overflow
            else
            {
                // Front to bound
                for (int i = front + 1; i < SIZE; i++)
                {
                    array[i]++;
                    turn--;
                }
                // 0 to bound
                while (turn > SIZE)
                {
                    for (int i = 0; i < SIZE; i++)
                    {
                        if (player == 1 && i == 0)
                        {
                            rear++;
                            turn++;
                        }
                        else if (player == 2 && i == 8)
                        {
                            rear++;
                            turn++;
                        }
                        else
                        {
                            array[i]++;
                            turn--;
                        }
                    }
                }
                rear = turn - 1;
                // 0 to rear
                for (int i = 0; i <= rear; i++)
                    array[i]++;

                // Next value
                if (array[rear] != 1 && rear != 0 && rear != 8)
                {
                    turn = array[rear];
                    array[rear] = 0;
                    front = rear;
                    bound = SIZE - front - 1;
                }
            }
        } while (array[rear] != 1 && rear != 0 && rear != 8);

        printArray(array);

        if (player == 1 && rear != 8 || player == 2 && rear != 0)
            round++;
    }

    return 0;
}

void printArray(int array[])
{
    printf("\nP2\ta\tb\tc\td\te\tf\tg\tP1\n");
    for (int i = 0; i < 9; i++)
        printf("%d\t", array[i]);
    printf("\n\t");
    for (int i = 15; i > 8; i--)
        printf("%d\t", array[i]);
    printf("\n\th\ti\tj\tk\tl\tm\tn");
}
int getPlayer(int round)
{
    if (round % 2 != 0)
        player = 1;
    else
        player = 2;
    return player;
}

int getFront(int player)
{
    char input = 0;
    int selection = 0;
    while (selection == 0)
    {
        selection = 0;
        if (player == 1)
        {
            printf("\nPlayer 1");
            printf("\nEnter selection (a - g): ");
            fflush(stdin);
            scanf("%c", &input);

            switch (input)
            {
            case 'a':
                selection = 1;
                break;
            case 'b':
                selection = 2;
                break;
            case 'c':
                selection = 3;
                break;
            case 'd':
                selection = 4;
                break;
            case 'e':
                selection = 5;
                break;
            case 'f':
                selection = 6;
                break;
            case 'g':
                selection = 7;
                break;
            default:
                printf("Invalid input!\n");
            }
        }

        else
        {
            printf("\nPlayer 2");
            printf("\nEnter selection (h - n): ");
            fflush(stdin);
            scanf("%c", &input);

            switch (input)
            {
            case 'h':
                selection = 15;
                break;
            case 'i':
                selection = 14;
                break;
            case 'j':
                selection = 13;
                break;
            case 'k':
                selection = 12;
                break;
            case 'l':
                selection = 11;
                break;
            case 'm':
                selection = 10;
                break;
            case 'n':
                selection = 9;
                break;
            default:
                printf("Invalid input!\n");
            }
        }
    }

    return selection;
}