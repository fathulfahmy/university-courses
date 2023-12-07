// author: fathul fahmy
#include <stdio.h>
#include <stdbool.h>

#define NUM_OF_TRAINEE 3
#define NUM_OF_DAY 5

void setAttendance();
void getAttendanceTable();
int getHighestTotalAttendance();
void searchForHighestTotalAttendance(int);

// global variable
int g_individualAttendance[NUM_OF_TRAINEE][NUM_OF_DAY];
int g_totalAttendance[NUM_OF_TRAINEE];

int main()
{
    setAttendance();
    getAttendanceTable();
    int highestTotalAttendance = getHighestTotalAttendance();
    searchForHighestTotalAttendance(highestTotalAttendance);

    return 0;
}

// function 1: mark attendance of each trainee
void setAttendance()
{

    for (int i = 0; i < NUM_OF_TRAINEE; i++)
    {
        printf("\nTrainee %d\n[1] Attend [0] Absent\n", i + 1);

        // initialize total attendance for each trainee to 0
        g_totalAttendance[i] = 0;
        int input = 0;

        for (int j = 0; j < NUM_OF_DAY; j++)
        {
            // loop infinitely
            while (true)
            {
                // request attendance for each trainee and each day
                printf("Day %d: ", j + 1);
                scanf("%d", &input);

                if (input == 0 || input == 1)
                {
                    g_individualAttendance[i][j] = input;
                    g_totalAttendance[i] += input;
                    // force exit loop
                    break;
                }
                else
                    printf("Invalid input!\n");
            }
        }
    }
}

// function 2: display attendance table
void getAttendanceTable()
{
    // table header
    printf("\nTrainee ID\t\t\t\t\t\tTotal\n");

    for (int i = 0; i < NUM_OF_TRAINEE; i++)
    {
        // display number of trainee
        printf("%d\t\t", i + 1);

        // display attendance for each day
        for (int j = 0; j < NUM_OF_DAY; j++)
            printf("%d\t", g_individualAttendance[i][j]);

        // display total attendance of each trainee
        printf("%d\n", g_totalAttendance[i]);
    }
}

// function 3: return highest total attendance
int getHighestTotalAttendance()
{
    int sorted[NUM_OF_TRAINEE];

    // duplicate total attendance for each trainee and store in sorted
    for (int i = 0; i < NUM_OF_TRAINEE; i++)
        sorted[i] = g_totalAttendance[i];

    // perform ascending bubble sort for total attendance
    for (int i = 0; i < NUM_OF_TRAINEE; i++)
    {
        for (int j = 1; j < NUM_OF_TRAINEE; j++)
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
    int highestTotalAttendance = sorted[NUM_OF_TRAINEE - 1];
    return highestTotalAttendance;
}

// function 4: perform linear search to find trainee with highest attendance
void searchForHighestTotalAttendance(int highestTotalAttendance)
{
    for (int i = 0; i < NUM_OF_TRAINEE; i++)
    {
        if (g_totalAttendance[i] == highestTotalAttendance)
            printf("\nTrainee %d has the highest number of attendances of %d\n", i + 1, g_totalAttendance[i]);
    }
}
