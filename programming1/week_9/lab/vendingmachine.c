/*************************************************************
Author: Muhammad Fathul Fahmy Bin Mohd Nizam
Date: 25/03/2022
Description: vending machine with billing system
Input: choice, amount
Output: menu, receipt
Formula: balance = amount - total
total = quantity * price
Condition: amount > total
*************************************************************/
#include <stdio.h>
#define FOOD 3.90
#define BEVERAGE 2.50

void printMenu();
int getOrder();
float calculateTotal(int item[]);
float calculateCharges(float, float);
void printReceipt(int item[], float, float);

int choice = 0, item[] = {0, 0, 0, 0, 0, 0};
float amount = 0, total = 0;

int main()
{
    printf("\nWelcome to Patui Vending Machine");
    while (choice != 8)
    {
        // DISPLAY MENU
        printMenu();
        choice = getOrder();
        switch (choice)
        {
        case 1:
            item[0]++;
            break;
        case 2:
            item[1]++;
            break;
        case 3:
            item[2]++;
            break;
        case 4:
            item[3]++;
            break;
        case 5:
            item[4]++;
            break;
        case 6:
            item[5]++;
            break;
        case 7:
            item[6]++;
            break;
        case 8:
            break;
        default:
            printf("ERROR: INVALID INPUT!");
        }
        // DISPLAY CURRENT TOTAL
        total = calculateTotal(item);
        if (total != 0)
            printf("\nTotal: RM%.2f", total);
    }
    if (total != 0)
    {
        // INPUT AMOUNT TO PAY
        amount = calculateCharges(amount, total);
        // DISPLAY RECEIPT
        printReceipt(item, amount, total);
    }
    return 0;
}
// DISPLAY MENU
void printMenu()
{
    printf("\n\nContact us if your money get swallowed");
    printf("\n1. Maggi Asam Laksa");
    printf("\n2. Maggi Ayam");
    printf("\n3. Maggi Kari");
    printf("\n4. Maggi Tomyam");
    printf("\n5. Nescafe Latte");
    printf("\n6. Nescafe Mocha");
    printf("\n7. Nescafe Original");
    printf("\n8. Exit");
}
// INPUT CHOICE
int getOrder()
{
    printf("\nEnter selection: ");
    scanf("%d", &choice);
    return choice;
}
// CALCULATE TOTAL PRICE
float calculateTotal(int item[])
{
    total = 0;
    total += (item[0] + item[1] + item[2] + item[3]) * FOOD;
    total += (item[4] + item[5] + item[6]) * BEVERAGE;
    return total;
}
// CALCULATE AMOUNT TO PAY
float calculateCharges(float amount, float total)
{
    do
    {
        float input = 0;
        printf("\n\nEnter amount: ");
        scanf("%f", &input);
        if (input <= 0)
            printf("ERROR: INVALID INPUT!");
        else
        {
            amount += input;
            if (amount < total)
            {
                printf("Total: %.2f", total);
                printf("\nAmount: %.2f", amount);
                printf("\nPLEASE ADD MORE!");
            }
        }
    } while (amount < total);
    return amount;
}
// DISPLAY RECEIPT
void printReceipt(int item[], float amount, float total)
{
    printf("\nPrinting receipt...");
    printf("\n----------------------------------------------");
    printf("\nItem\t\t\tQuantity\tPrice");
    printf("\n----------------------------------------------");
    // ITEM NAME                                    QUANTITY    PRICE
    if (item[0] != 0)
        printf("\nMaggi Asam Laksa\t%d\t\t%.2f", item[0], item[0] * FOOD);
    if (item[1] != 0)
        printf("\nMaggi Ayam\t\t%d\t\t%.2f", item[1], item[1] * FOOD);
    if (item[2] != 0)
        printf("\nMaggi Kari\t\t%d\t\t%.2f", item[2], item[2] * FOOD);
    if (item[3] != 0)
        printf("\nMaggi Tomyam\t\t%d\t\t%.2f", item[3], item[3] * FOOD);
    if (item[4] != 0)
        printf("\nNescafe Latte\t\t%d\t\t%.2f", item[4], item[4] * BEVERAGE);
    if (item[5] != 0)
        printf("\nNescafe Mocha\t\t%d\t\t%.2f", item[5], item[5] * BEVERAGE);
    if (item[6] != 0)
        printf("\nNescafe Original\t%d\t\t%.2f", item[6], item[6] * BEVERAGE);
    printf("\n----------------------------------------------");
    printf("\nTotal\t\t\t\t\t%.2f", total);
    printf("\nAmount\t\t\t\t\t%.2f", amount);
    printf("\nBalance\t\t\t\t\t%.2f", amount - total);
    printf("\n\nThank you for your purchase!");
}

/*
Welcome to Patui Vending Machine

Contact us if your money get swallowed
1. Maggi Asam Laksa
2. Maggi Ayam
3. Maggi Kari
4. Maggi Tomyam
5. Nescafe Latte
6. Nescafe Mocha
7. Nescafe Original
8. Exit
Enter selection: 4

Total: RM3.90

Enter amount: 1
Total: 16.70
Amount: 16.00
PLEASE ADD MORE!

Enter amount: 1

Printing receipt...
----------------------------------------------
Item                    Quantity        Price
----------------------------------------------
Maggi Kari              1               3.90
Maggi Tomyam            2               7.80
Nescafe Original        1099431936              2748579840.00
----------------------------------------------
Total                                   16.70
Amount                                  17.00
Balance                                 0.30

Thank you for your purchase!
 */