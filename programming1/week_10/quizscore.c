/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 31/03/2022
DESCRIPTION: a program to store quiz score for each student,
display average each quiz, student with highest total
INPUT: score
OUTPUT: score for each quiz, totalQuiz, average
FORMULA: avg = sum / 3
CONDITION: score >= 0, highestScore = sortedTotalStudent[STUDENT - 1]
*************************************************************/
#include <stdio.h>
#define STUDENT 4
#define QUIZ 3

float inputScore(int);
void printTotalQuiz(float totalQuiz[]);
void printAverage(float totalQuiz[]);
void printHighestScore(float totalStudent[]);

int i = 0, j = 0;
int main()
{
    float score[STUDENT][QUIZ], totalQuiz[QUIZ], totalStudent[STUDENT];
    // Input student score
    for (i = 0; i < STUDENT; i++)
    {
        score[i][j] = 0, totalQuiz[j] = 0, totalStudent[i] = 0;
        printf("\nStudent %d\n", i + 1);
        for (j = 0; j < QUIZ; j++)
        {
            score[i][j] = inputScore(j + 1);
            totalQuiz[j] += score[i][j];
            totalStudent[i] += score[i][j];
        }
    }
    // Display titlebar
    printf("\nPrinting table...");
    printf("\nStudent\t\tQuiz 1\t\tQuiz 2\t\tQuiz 3\t\tTotal\n");
    // Print table
    for (int i = 0; i < STUDENT; i++)
    {
        // Display number of students
        printf("%d", i + 1);
        // Display score for each students
        for (j = 0; j < QUIZ; j++)
            printf("\t\t%.1f", score[i][j]);
        // Display total for each students
        printf("\t\t%.1f\n", totalStudent[i]);
    }
    printTotalQuiz(totalQuiz);
    printAverage(totalQuiz);
    printHighestScore(totalStudent);

    return 0;
}

// Input for elements of array
// Return if input > 0
float inputScore(int quiz)
{
    float input = -1;
    while (input < 0)
    {
        printf("Enter quiz %d score: ", quiz);
        scanf("%f", &input);
        if (input < 0)
            printf("Invalid input!\n");
        else
            return input;
    }
}

// Display total for each quiz
void printTotalQuiz(float totalQuiz[])
{
    printf("Total");
    for (j = 0; j < QUIZ; j++)
        printf("\t\t%.1f", totalQuiz[j]);
}

// Display average for each quiz
void printAverage(float totalQuiz[])
{
    printf("\nAverage");
    for (j = 0; j < QUIZ; j++)
        printf("\t\t%.1f", totalQuiz[j] / STUDENT);
}

// Display student with highest score
void printHighestScore(float totalStudent[])
{
    // Creates a temporary array to hold the total score for each students
    float sortedTotalStudent[STUDENT];
    for (int i = 0; i < STUDENT; i++)
        sortedTotalStudent[i] = totalStudent[i];
    // Bubble Sort
    for (i = 0; i < STUDENT; i++)
    {
        for (j = 1; j < STUDENT; j++)
        {
            if (sortedTotalStudent[j] < sortedTotalStudent[j - 1])
            {
                int temp = 0;
                temp = sortedTotalStudent[j];
                sortedTotalStudent[j] = sortedTotalStudent[j - 1];
                sortedTotalStudent[j - 1] = temp;
            }
        }
    }
    // Linear search total for each student and find student with highest total
    for (i = 0; i < STUDENT; i++)
    {
        if (totalStudent[i] == sortedTotalStudent[STUDENT - 1])
            printf("\n\nStudent %d has the highest total score of %.1f", i + 1, totalStudent[i]);
    }
}
/*
Student         Quiz 1          Quiz 2          Quiz 3          Total
1               0.0             12.0            9.0             89.0
2               90.0            10.0            9.0             109.0
3               72.0            7.0             10.0            89.0
4               79.0            8.0             8.0             95.0
Total           309.0           37.0            36.0
Average         77.2            9.2             9.0

Student 2 has the highest total score of 109.0
 */