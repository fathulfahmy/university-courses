#include <stdio.h>
#define SIZE 16
// User defined function
void printArray();
void getPlayer();
void getFront();
void moveForward(int);
void overflowFalse();
void overflowTrue();
void getNextValue();    

// Global variable
int array[SIZE]  = {0, 7, 7, 7, 7, 7, 7, 9, 0, 7, 7, 7, 7, 7, 7, 7};
int totalScore = 0;
int cycle, player, rear, front, bound, turn;

int main()
{
    // Default value
    totalScore = 0, cycle = 1;
    // Run game
    while (totalScore < 98)
    {
        printArray();
        // Set value to default
        front = 0, rear = 0, bound = 0, turn = 0;
        getPlayer(cycle);
        getFront(player);

        // Set turn
        bound = SIZE - front - 1;
        turn = array[front];
        array[front] = 0;

        // Move
        do
        {
            if (player == 1)
            {
                if (turn < bound)
                    overflowFalse();
                else if (turn >= bound)
                    overflowTrue();
                else
                    printf("Error: player 1 move!\n");
            }

            if (player == 2)
            {
                if (turn <= bound)
                    overflowFalse();
                else if (turn > bound)
                    overflowTrue();
                else
                    printf("Error: player 2 move\n");
            }
            if (player == 1 && rear == 0 || player == 2 && rear == 8)
                break;
        } while (array[rear] != 1);
        cycle++;
        totalScore = array[0] + array[8];
    }
    return 0;
}
// 1. Display congkak
void printArray()
{
    printf("\nP2\ta\tb\tc\td\te\tf\tg\tP1\n");
    for (int i = 0; i < 9; i++)
        printf("%d\t", array[i]);
    printf("\n\t");
    for (int i = 15; i > 8; i--)
        printf("%d\t", array[i]);
    printf("\n\th\ti\tj\tk\tl\tm\tn\n");
}
// 2. Get player
void getPlayer()
{
    player = 0;
    if (cycle % 2 != 0)
        player = 1;
    else
        player = 2;
}
// 3. Get front
void getFront()
{
    char input = 0;
    front = 0;
    do
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
                front = 1;
                break;
            case 'b':
                front = 2;
                break;
            case 'c':
                front = 3;
                break;
            case 'd':
                front = 4;
                break;
            case 'e':
                front = 5;
                break;
            case 'f':
                front = 6;
                break;
            case 'g':
                front = 7;
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
                front = 15;
                break;
            case 'i':
                front = 14;
                break;
            case 'j':
                front = 13;
                break;
            case 'k':
                front = 12;
                break;
            case 'l':
                front = 11;
                break;
            case 'm':
                front = 10;
                break;
            case 'n':
                front = 9;
                break;
            default:
                printf("Invalid input!\n");
            }
        }
    } while (array[front] == 0);
}
// 4. Move forward
void moveForward(int i)
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
// 7. Next value
void getNextValue()
{
    if (array[rear] != 1 && rear != 0 && rear != 8)
    {
        turn = array[rear];
        array[rear] = 0;
        front = rear;
        bound = SIZE - front - 1;
    }
}
// 5. No overflow
void overflowFalse()
{
    rear = front + turn;
    for (int i = front + 1; i <= rear; i++)
        moveForward(i);
    getNextValue();
}
// 6. Overflow
void overflowTrue()
{
    // Front to bound
    for (int i = front + 1; i < SIZE; i++)
        moveForward(i);
    // 0 to bound
    while (turn > SIZE)
    {
        for (int i = 0; i < SIZE; i++)
            moveForward(i);
    }
    rear = turn - 1;
    // 0 to rear
    for (int i = 0; i <= rear; i++)
        moveForward(i);
    getNextValue();
}
