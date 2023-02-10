#include <stdio.h>
#define SIZE 16
void printArray(int array[]);
int getPlayer(int);
int getFront(int);

int main()
{
    // Default value
    int round = 1, player = 0;
    int array[SIZE] = {0, 7, 7, 7, 7, 7, 7, 9, 0, 7, 7, 7, 7, 7, 7, 7};
    int totalScore = array[0] + array[8];
    // Run game
    while (totalScore < 98)
    {
        printArray(array);

        // Set value to default
        int front = 0, rear = 0, bound = 0, turn = 0;
        player = getPlayer(round);

        // Get selection
        while (array[front] == 0)
        {
            front = getFront(player);
            if (array[front] == 0)
                printf("Invalid input!\n");
        }

        // Set turn
        bound = SIZE - front - 1;
        turn = array[front];
        array[front] = 0;

        // Move
        while (turn != 0)
        {
            if (player == 1)
            {
                // P1 No overflow
                if (turn < bound)
                {
                    rear = front + turn;
                    for (int i = front + 1; i <= rear; i++)
                    {
                        // Skip opponent's score
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
                else
                    printf("Out of bound!\n");

                // P1 Overflow
                if(turn >= bound)
                {
                    printf("turn > bound");
                    break;
                }
            }

            if (player == 2)
            {
                // P2 No overflow
                if (turn <= bound)
                {
                    rear = front + turn;
                    for (int i = front + 1; i <= rear; i++)
                    {
                        array[i]++;
                        turn--;
                    }
                }
                else
                    printf("Out of bound!\n");
                    
                // P2 Overflow
                if (turn > bound)
                {
                    printf("turn > bound");
                    break;
                }
            }

            if (rear != 0 && rear != 8)
            {
                printf("End of turn!\n");
                break;
            }

            if (turn == 0)
            {
                printf("Out of turn!");
                break;
            }
        }
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
    printf("\n\th\ti\tj\tk\tl\tm\tn\n");
}
int getPlayer(int round)
{
    int player = 0;
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
        if (player == 1)
        {
            printf("Player 1\n");
            printf("Enter selection (a - g): ");
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
            printf("Player 2\n");
            printf("Enter selection (h - n): ");
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