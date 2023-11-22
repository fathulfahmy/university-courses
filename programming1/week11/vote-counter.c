/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 08/04/2022
DESCRIPTION: A program to compute total votes and display winner or highest vote
INPUT: votes
OUTPUT: totalCandidate, totalCollege, winner message, highest vote message
FORMULA: max = sorted[CANDIDATE - 1]
CONDITION: input > 0
*************************************************************/
#include <stdio.h>
#include <stdbool.h>
#define COLLEGE 4
#define CANDIDATE 5

void printTable();
void getVote();
void calculateCandidate();
void calculateCollege();
float getMax();
void linearSearch(float);

int vote[COLLEGE][CANDIDATE];
float totalCandidate[CANDIDATE];

int main()
{
    getVote();
    printTable();
    calculateCandidate();
    float max = getMax();
    linearSearch(max);

    return 0;
}
void getVote()
{
    for (int i = 0; i < COLLEGE; i++)
    {
        char str0[] = "COE", str1[] = "CCI", str2[] = "CES", str3[] = "COGS";

        // Display college name
        if (i == 0)
            printf("\nCollege %s\n", str0);
        if (i == 1)
            printf("\nCollege %s\n", str1);
        if (i == 2)
            printf("\nCollege %s\n", str2);
        if (i == 3)
            printf("\nCollege %s\n", str3);

        char candidate = 'A';
        for (int j = 0; j < CANDIDATE; j++)
        {
            while (true)
            {
                // Request input
                int input = 0;
                printf("Enter number of votes for candidate %c: ", candidate);
                scanf("%d", &input);
                // Store input
                if (input > 0)
                {
                    vote[i][j] = 0;
                    vote[i][j] = input;
                    candidate++;
                    break;
                }
                printf("Invalid input!\n");
            }
        }
    }
}
void printTable()
{
    int allVote = 0;
    float totalCollege[COLLEGE];
    // Calculate total and percentage for each college
    for (int i = 0; i < COLLEGE; i++)
    {
        totalCollege[i] = 0;
        for (int j = 0; j < CANDIDATE; j++)
        {
            totalCollege[i] += vote[i][j];
            allVote += vote[i][j];
        }
    }
    printf("\nCollege \tCandidate A \tCandidate B \tCandidate C \tCandidateD \tCandidate E \tTotal \t\tPercentage\n");
    for (int i = 0; i < COLLEGE; i++)
    {
        char str0[] = "COE", str1[] = "CCI", str2[] = "CES", str3[] = "COGS";

        // College name
        if (i == 0)
            printf("%s\t\t", str0);
        if (i == 1)
            printf("%s\t\t", str1);
        if (i == 2)
            printf("%s\t\t", str2);
        if (i == 3)
            printf("%s\t\t", str3);
        // Votes
        for (int j = 0; j < CANDIDATE; j++)
            printf("%d\t\t", vote[i][j]);
        // Total
        printf("%.0f\t\t", totalCollege[i]);
        printf("%.1f\t\t\n", totalCollege[i] / allVote * 100);
    }
}
void calculateCandidate()
{
    // Calculate total
    int allVote = 0, i = 0, j = 0;

    for (i = 0; i < COLLEGE; i++)
    {
        totalCandidate[j] = 0;
        for (j = 0; j < CANDIDATE; j++)
        {
            totalCandidate[j] += vote[i][j];
            allVote += vote[i][j];
        }
    }
    printf("Total\t\t");
    for (int i = 0; i < CANDIDATE; i++)
        printf("%.0f\t\t", totalCandidate[i]);

    // Percentage
    printf("\nPercentage\t");
    for (int i = 0; i < CANDIDATE; i++)
    {
        totalCandidate[i] = totalCandidate[i] / allVote * 100;
        printf("%.1f\t\t", totalCandidate[i]);
    }
    printf("\n");
}
float getMax()
{
    float sorted[CANDIDATE];
    // Copy total[] to sorted[]
    for (int i = 0; i < CANDIDATE; i++)
        sorted[i] = totalCandidate[i];
    // Bubble Sort
    for (int i = 0; i < CANDIDATE; i++)
    {
        for (int j = 1; j < CANDIDATE; j++)
        {
            if (sorted[j] < sorted[j - 1])
            {
                float temp = 0;
                temp = sorted[j];
                sorted[j] = sorted[j - 1];
                sorted[j - 1] = temp;
            }
        }
    }
    float max = sorted[CANDIDATE - 1];
    return max;
}
void linearSearch(float max)
{
    char candidate = 'A';
    int found = 0;
    // Winner
    for (int i = 0; i < CANDIDATE; i++)
    {
        if (totalCandidate[i] > 50)
        {
            found = 1;
            printf("\nCandidate %c is the winner. Congratulations!", candidate);
        }
        candidate++;
    }

    if (found == 0)
    {
        // Highest vote
        candidate = 'A';
        for (int i = 0; i < CANDIDATE; i++)
        {
            if (totalCandidate[i] == max)
                printf("\nCandidate %c has the highest vote of %.1f%%", candidate, totalCandidate[i]);
            candidate++;
        }
    }
}
/*
College         Candidate A     Candidate B     Candidate C     CandidateD      Candidate E     Total           Percentage
COE             291             48              209             13              111             672             24.5
CCI             174             90              312             22              202             800             29.1
CES             168             50              112             45              186             561             20.4
COGS            144             38              408             24              98              712             25.9
Total           777             226             1041            104             597
Percentage      28.3            8.2             37.9            3.8             21.7

Candidate C has the highest vote of 37.9%
 */