#include <stdio.h>

void main()
{
    // declare variable
    int counter = 0;
    float weight, height;
    char fullName[30];

    // assign value to variable
    weight = 180.5;
    counter = counter + 1;

    // request name
    printf("\nEnter your full name: ");
    scanf("%s", fullName);

    // request weight loss
    float weightLoss, newWeight;
    printf("\nEnter your weight loss (kg): ");
    scanf("%f", &weightLoss);

    // calculate new weight
    newWeight = weight - weightLoss;

    // display message to user
    printf("\nHello %s!", fullName);
    printf("\nYour new weight is %.2f kg\n", newWeight);
    printf("\n\"Congratulations!\" \nYou are no longer overweight\n");
}
