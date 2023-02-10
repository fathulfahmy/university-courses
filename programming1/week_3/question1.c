/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 12/02/2022
Description: a single C statement corresponding to each of the following tasks
Input: weight loss, full name
Output: new weight, congratulations message, full name
*************************************************************/
#include <stdio.h>
void main()
{
    float weight, height;
    int counter = 0;
    weight = 180.5;
    counter = counter + 1;
    float weight_loss, new_weight;

    // Read value for weight loss
    printf("\nEnter your weight loss: ");
    scanf("%f", &weight_loss);

    // Compute value of new weight
    new_weight = weight - weight_loss;

    printf("\nYour new weight is %.2f\n", new_weight);
    printf("\n\"Congratulations!\" to you; you are no longer overweight!\n");

    // Print full name    
    char full_name[30];
    printf("\nEnter your full name: ");
    scanf("%s", full_name);
    printf("\nFull name is: %s\n", full_name);
}

/*************************************************************
Enter your weight loss: 100

Your new weight is 80.50

"Congratulations!" to you; you are no longer overweight!

Enter your full name: Fathul

Full name is: Fathul
*************************************************************/