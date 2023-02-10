/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 25/03/2022
Description: Temperature Converter, convert celsius to fahrenheit or vice versa
Input: choice, celsius, fahrenheit
Output: celsius to fahrenheit, fahrenheit to celsius, conversion table
Formula: fahrenheit = celsius * 1.8 + 32
Condition: max > 0 (for conversion table)
*************************************************************/
#include <stdio.h>

int getChoice();
void printMenu();
float celsius_fahrenheit(float);
float fahrenheit_celsius(float);
void convertCelsius();
void convertFahrenheit();
void printCelsiusTitlebar();
void printFahrenheitTitlebar();
void tableCelsius1(int, float);
void tableCelsius2(int, float);
void tableFahrenheit1(int, float);
void tableFahrenheit2(int, float);
void printTable();

int choice = 0, max = 0;
float celsius = 0, fahrenheit = 0, num1 = 0, num2 = 0;

int main()
{
    printf("\nWelcome to Temperature Converter");
    while (choice != 4)
    {
        printMenu();
        choice = getChoice();
        switch (choice)
        {
        // CELSIUS TO FAHRENHEIT
        case 1:
            convertCelsius();
            break;
        // FAHRENHEIT TO CELSIUS
        case 2:
            convertFahrenheit();
            break;
        // CONVERSION TABLE
        case 3:
            printTable();
            break;
        case 4:
            printf("\nThank you for using Temperature Converter!");
            break;
        default:
            printf("ERROR: INVALID INPUT!");
        }
    }
    return 0;
}
// REQUEST INPUT
int getChoice()
{
    printf("\nEnter selection: ");
    scanf("%d", &choice);
    return choice;
}
// DISPLAY MAIN MENU
void printMenu()
{
    printf("\n\nHow may I help you?");
    printf("\n1. Convert Celsius to Fahrenheit");
    printf("\n2. Convert Fahrenheit to Celsius");
    printf("\n3. Conversion Table");
    printf("\n4. Exit");
}
// CALCULATE CELSIUS TO FAHRENHEIT
float celsius_fahrenheit(float celsius)
{
    fahrenheit = celsius * 1.8 + 32;
    return fahrenheit;
}
// CALCULATE FAHRENHEIT TO CELSIUS
float fahrenheit_celsius(float fahrenheit)
{
    celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}
// DISPLAY CELSIUS TO FAHRENHEIT
void convertCelsius()
{
    printf("\nEnter Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius_fahrenheit(celsius);
    printf("%.1f degree Celsius is equivalent to %.1f degree Fahrenheit", celsius, fahrenheit);
}
// DISPLAY FAHRENHEIT TO CELSIUS
void convertFahrenheit()
{
    printf("\nEnter Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheit_celsius(fahrenheit);
    printf("%.1f degree Fahrenheit is equivalent to %.1f degree Celsius", fahrenheit, celsius);
}
// DISPLAY CELSIUS TABLE TITLEBAR
void printCelsiusTitlebar()
{

    printf("Creating table...");
    printf("\n----------------------------");
    printf("\nCelsius\t\tFahrenheit");
    printf("\n----------------------------");
}
// DISPLAY FAHRENHEIT TABLE TITLEBAR
void printFahrenheitTitlebar()
{
    printf("Creating table...");
    printf("\n-------------------------");
    printf("\nFahrenheit\tCelsius");
    printf("\n-------------------------");
}
// DISPLAY INCREASING CELSIUS TABLE
void tableCelsius1(int max, float celsius)
{
    printCelsiusTitlebar();
    for (int count = 0; count <= max; count++)
    {
        float fahrenheit = celsius_fahrenheit(celsius);
        printf("\n%.0f\t\t%.1f", celsius, fahrenheit);
        celsius++;
    }
}
// DISPLAY DECREASING CELSIUS TABLE
void tableCelsius2(int max, float celsius)
{
    printCelsiusTitlebar();
    for (int count = 0; count >= max; count--)
    {
        float fahrenheit = celsius_fahrenheit(celsius);
        printf("\n%.0f\t\t%.1f", celsius, fahrenheit);
        celsius--;
    }
}
// DISPLAY INCREASING FAHRENHEIT TABLE
void tableFahrenheit1(int max, float fahrenheit)
{
    printFahrenheitTitlebar();
    for (int count = 0; count <= max; count++)
    {
        float celsius = fahrenheit_celsius(fahrenheit);
        printf("\n%.1f\t\t%.0f", fahrenheit, celsius);
        fahrenheit++;
    }
}
// DISPLAY DECREASING FAHRENHEIT TABLE
void tableFahrenheit2(int max, float fahrenheit)
{
    printFahrenheitTitlebar();
    for (int count = 0; count >= max; count--)
    {
        float celsius = fahrenheit_celsius(fahrenheit);
        printf("\n%.1f\t\t%.0f", fahrenheit, celsius);
        fahrenheit--;
    }
}
// DISPLAY CONVERSION TABLE
void printTable()
{
    // DISPLAY MENU
    printf("\n1. Celsius to Fahrenheit");
    printf("\n2. Fahrenheit to Celsius");
    int choice = getChoice();
    switch (choice)
    {
    case 1:
        // INPUT MAX VALUE
        printf("\nEnter your initial value in Celsius: ");
        scanf("%f", &num1);
        printf("Enter your ending value in Celsius: ");
        scanf("%f", &num2);
        max = num2 - num1;
        celsius = num1;
        // DISPLAY TABLE
        if (max > 0)
            tableCelsius1(max, celsius);
        else if (max < 0)
            tableCelsius2(max, celsius);
        else
            printf("ERROR: INVALID INPUT!");
        break;

    case 2:
        // INPUT MAX VALUE
        printf("\nEnter your initial value in Fahrenheit: ");
        scanf("%f", &num1);
        printf("Enter your ending value in Fahrenheit: ");
        scanf("%f", &num2);
        max = num2 - num1;
        fahrenheit = num1;
        // DISPLAY TABLE
        if (max > 0)
            tableFahrenheit1(max, fahrenheit);
        else if (max < 0)
            tableFahrenheit2(max, fahrenheit);
        else
            printf("ERROR: INVALID INPUT!");
        break;

    default:
        printf("ERROR: INVALID INPUT!");
    }
}
/*
Welcome to Temperature Converter

How may I help you?
1. Convert Celsius to Fahrenheit
2. Convert Fahrenheit to Celsius
3. Conversion Table
4. Exit
Enter selection: 1

Enter Celsius: 42.5
42.5 degree Celsius is equivalent to 108.5 degree Fahrenheit

How may I help you?
1. Convert Celsius to Fahrenheit
2. Convert Fahrenheit to Celsius
3. Conversion Table
4. Exit
Enter selection: 2

Enter Fahrenheit: 180.6
180.6 degree Fahrenheit is equivalent to 82.6 degree Celsius
 */