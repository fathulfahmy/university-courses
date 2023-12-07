// author: fathul fahmy
#include <stdio.h>

// function prototype
void setChoice();
void getMainMenu();

void setFahrenheit();
void setCelsius();

void convertCelsius();
void convertFahrenheit();

void getCelsiusTitlebar();
void getFahrenheitTitlebar();

void getAscendingCelsius();
void getDescendingCelsius();
void getAscendingFahrenheit();
void getDescendingFahrenheit();

void getConversionTableMenu();

// global variable
int g_choice = 0;
int g_max = 0;
float g_celsius = 0;
float g_fahrenheit = 0;
float g_initialNum = 0;
float g_endingNum = 0;

int main()
{
    printf("\nWelcome to Temperature Converter");
    while (g_choice != 4)
    {
        getMainMenu();

        setChoice();

        switch (g_choice)
        {
        case 1:
            convertCelsius();
            break;
        case 2:
            convertFahrenheit();
            break;
        case 3:
            getConversionTableMenu();
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

// function 1: request user input
void setChoice()
{
    printf("\nEnter selection: ");
    scanf("%d", &g_choice);
}

// function 2: print user main menu
void getMainMenu()
{
    printf("\n\nHow may I help you?");
    printf("\n1. Convert Celsius to Fahrenheit");
    printf("\n2. Convert Fahrenheit to Celsius");
    printf("\n3. Conversion Table");
    printf("\n4. Exit");
}

// function 3: calculate celsius to fahrenheit
void setFahrenheit()
{
    g_fahrenheit = g_celsius * 1.8 + 32;
}

// function 4: calculate fahrenheit to celsius
void setCelsius()
{
    g_celsius = (g_fahrenheit - 32) / 1.8;
}

// function 5: convert user input celsius to fahrenheit
void convertCelsius()
{
    printf("\nEnter Celsius: ");
    scanf("%f", &g_celsius);

    setFahrenheit();

    printf("%.1f degree Celsius is equivalent to %.1f degree Fahrenheit", g_celsius, g_fahrenheit);
}

// function 6: convert user input fahrenheit to celsius
void convertFahrenheit()
{
    printf("\nEnter Fahrenheit: ");
    scanf("%f", &g_fahrenheit);

    setCelsius();
    printf("%.1f degree Fahrenheit is equivalent to %.1f degree Celsius", g_fahrenheit, g_celsius);
}

// function 7: display titlebar for celsius to fahrenheit conversion table
void getCelsiusTitlebar()
{

    printf("Creating table...");
    printf("\n----------------------------");
    printf("\nCelsius\t\tFahrenheit");
    printf("\n----------------------------");
}

// function 8: display titlebar for fahrenheit to celsius conversion table
void getFahrenheitTitlebar()
{
    printf("Creating table...");
    printf("\n-------------------------");
    printf("\nFahrenheit\tCelsius");
    printf("\n-------------------------");
}

// function 9: display conversion table of celsius to fahrenheit (ascending value)
void getAscendingCelsius()
{
    getCelsiusTitlebar();

    for (int count = 0; count <= g_max; count++)
    {
        setFahrenheit();
        printf("\n%.0f\t\t%.1f", g_celsius, g_fahrenheit);
        g_celsius++;
    }
}

// function 10: display conversion table of celsius to fahrenheit (descending value)
void getDescendingCelsius()
{
    getCelsiusTitlebar();

    for (int count = 0; count >= g_max; count--)
    {
        setFahrenheit();
        printf("\n%.0f\t\t%.1f", g_celsius, g_fahrenheit);
        g_celsius--;
    }
}

// function 11: display conversion table of fahrenheit to celsius (ascending value)
void getAscendingFahrenheit()
{
    getFahrenheitTitlebar();

    for (int count = 0; count <= g_max; count++)
    {
        setCelsius();
        printf("\n%.1f\t\t%.0f", g_fahrenheit, g_celsius);
        g_fahrenheit++;
    }
}

// function 12: display conversion table of fahrenheit to celsius (descending value)
void getDescendingFahrenheit()
{
    getFahrenheitTitlebar();

    for (int count = 0; count >= g_max; count--)
    {
        setCelsius();
        printf("\n%.1f\t\t%.0f", g_fahrenheit, g_celsius);
        g_fahrenheit--;
    }
}

// function 13: conversion table user menu
void getConversionTableMenu()
{
    // display choice for users
    printf("\n1. Celsius to Fahrenheit");
    printf("\n2. Fahrenheit to Celsius");

    setChoice();
    switch (g_choice)
    {
    // user selects celsius to fahrenheit
    case 1:
        printf("\nEnter your initial value in Celsius: ");
        scanf("%f", &g_initialNum);

        printf("Enter your ending value in Celsius: ");
        scanf("%f", &g_endingNum);

        g_max = g_endingNum - g_initialNum;
        g_celsius = g_initialNum;

        // display conversion table
        if (g_max > 0)
            getAscendingCelsius();
        else if (g_max < 0)
            getDescendingCelsius();
        else
            printf("ERROR: INVALID INPUT!");
        break;

    // user selects fahrenheit to celsius
    case 2:
        printf("\nEnter your initial value in Fahrenheit: ");
        scanf("%f", &g_initialNum);

        printf("Enter your ending value in Fahrenheit: ");
        scanf("%f", &g_endingNum);

        g_max = g_endingNum - g_initialNum;
        g_fahrenheit = g_initialNum;

        // display conversion table
        if (g_max > 0)
            getAscendingFahrenheit();
        else if (g_max < 0)
            getDescendingFahrenheit();
        else
            printf("ERROR: INVALID INPUT!");
        break;

    default:
        printf("ERROR: INVALID INPUT!");
    }
}
