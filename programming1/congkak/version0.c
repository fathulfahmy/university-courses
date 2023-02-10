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
int player = 0, turn = 0, front = 0, bound = 0, rear = 0, array[SIZE] = {0, 7, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 7};
void printArray(int array[]);
int getFront();
int getPlayer(int);

int main()
{
    int round = 1;
    while (array[0] + array[8] <= 98)
    {
        player = getPlayer(round);
        printf("\nPlayer %d ", player);
        printArray(array);
        front = getFront();
        bound = SIZE - front - 1;
        turn = array[front];
        array[front] = 0;
        do
        {
            if (turn <= bound)
            {
                rear = front + turn;
                for (int i = front + 1; i <= rear; i++)
                {
                    if (player == 1 && i == 0)
                        rear++;
                    else if (player == 2 && i == 8)
                        rear++;
                    else
                        array[i]++;
                }
                if (array[rear] != 1 && rear != 0 && rear != 8)
                {
                    turn = array[rear];
                    array[rear] = 0;
                    front = rear;
                    bound = SIZE - front - 1;
                }
            }

            else if (turn > bound)
            {
                for (int i = front + 1; i < SIZE; i++)
                {
                    array[i]++;
                    turn--;
                }
                while (turn > SIZE)
                {
                    for (int i = 0; i < SIZE; i++)
                    {
                        if (player == 1 && i == 0)
                            continue;
                        else if (player == 2 && i == 8)
                            continue;
                        else
                        {
                            array[i]++;
                            turn--;
                        }
                    }
                }
                rear = turn - 1;
                for (int i = 0; i <= rear; i++)
                {
                    if (player == 1 && i == 0)
                        rear++;
                    else if (player == 2 && i == 8)
                        rear++;
                    else
                        array[i]++;
                }
                if (array[rear] != 1 && rear != 0 && rear != 8)
                {
                    turn = array[rear];
                    array[rear] = 0;
                    front = rear;
                    bound = SIZE - front - 1;
                }
            }

        } while (array[rear] != 1);
        printArray(array);

        round++;
    }
    return 0;
}

int getPlayer(int round)
{
    if (round % 2 != 0)
        player = 1;
    if (round % 2 == 0)
        player = 2;
    return player;
}
void printArray(int array[])
{
    printf("\n\n\ta\tb\tc\td\te\tf\tg\n");
    for (int i = 0; i < 9; i++)
        printf("%d\t", array[i]);
    printf("\n\t");
    for (int i = 15; i > 8; i--)
        printf("%d\t", array[i]);
    printf("\n\th\ti\tj\tk\tl\tm\tn");
}

int getFront()
{
    char input = 0;
    int selection = 0;
    fflush(stdin);
    printf("\nEnter selection: ");
    scanf("%c", &input);
    if (player == 1)
    {
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
            printf("\nInvalid input!");
        }
    }

    if (player == 2)
    {
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
            printf("\nInvalid input!");
        }
    }
    return selection;
}