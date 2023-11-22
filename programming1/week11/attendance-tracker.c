/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 08/04/2022
DESCRIPTION: A program to keep data of 10 working days attendance
INPUT: attendance
OUTPUT: table, highest attendance
FORMULA: max = sortAscending [last index]
CONDITION: input == 0 || input == 1
*************************************************************/
#include <stdio.h>
#include <stdbool.h>
#define TRAINEE 1
#define DAY 10
int attend[TRAINEE][DAY], total[TRAINEE];

void getInput();
void printTable();
int getMax();
void linearSearch(int);

int main()
{
    getInput();
    printTable();
    int max = getMax();
    linearSearch(max);

    return 0;
}
void getInput()
{
    for (int i = 0; i < TRAINEE; i++)
    {
        printf("\nTrainee %d\n1: Attend 0: Absent\n", i + 1);
        // Input for attendance
        total[i] = 0;
        for (int j = 0; j < DAY; j++)
        {
            while (true)
            {
                int input = 0;
                printf("Day %d: ", j + 1);
                scanf("%d", &input);
                if (input == 0 || input == 1)
                {
                    attend[i][j] = 0;
                    attend[i][j] = input;
                    total[i] += input;
                    break;
                }
                printf("Invalid input!\n");
            }
        }
    }
}
void printTable()
{
    printf("\nTrainee\t\t\t\t\t\t\t\t\t\t\t\tTotal\n");
    for (int i = 0; i < TRAINEE; i++)
    {
        // Trainees
        printf("%d\t\t", i + 1);
        // Attendance
        for (int j = 0; j < DAY; j++)
            printf("%d\t", attend[i][j]);
        // Total
        printf("%d\n", total[i]);
    }
}
int getMax()
{
    // Copy total[] to sorted[]
    int sorted[TRAINEE];
    for (int i = 0; i < TRAINEE; i++)
        sorted[i] = total[i];
    // Bubble Sort
    for (int i = 0; i < TRAINEE; i++)
    {
        for (int j = 1; j < TRAINEE; j++)
        {
            if (sorted[j] < sorted[j - 1])
            {
                int temp = 0;
                temp = sorted[j];
                sorted[j] = sorted[j - 1];
                sorted[j - 1] = temp;
            }
        }
    }
    int max = sorted[TRAINEE - 1];
    return max;
}
void linearSearch(int max)
{
    for (int i = 0; i < TRAINEE; i++)
    {
        if (total[i] == max)
            printf("\nTrainee %d has the highest number of attendances of %d\n", i + 1, total[i]);
    }
}
/*
Trainee                                                                                         Total
1               1       1       1       1       1       0       0       1       1       1       8
2               1       0       1       1       1       1       0       1       1       1       8
3               1       1       1       1       1       1       1       1       1       1       10
4               1       0       1       1       1       1       1       1       0       0       7
5               1       1       1       1       0       0       1       1       1       1       8

Trainee 3 has the highest number of attendances of 10
 */