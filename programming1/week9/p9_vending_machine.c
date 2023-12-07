// author: fathul fahmy
#include <stdio.h>

#define FOOD_PRICE 3.90
#define BEVERAGE_PRICE 2.50

void getMainMenu();
void setChoice();
void setTotalPurchase();
void setUserPayment();
void getReceipt();

// global variable
int g_choice = 0;
int g_item[] = {0, 0, 0, 0, 0, 0, 0};
float g_userPayment = 0;
float g_totalPurchase = 0;

int main()
{
    printf("\nWelcome to Patui Vending Machine");
    while (g_choice != 8)
    {
        getMainMenu();

        setChoice();
        switch (g_choice)
        {
        case 1:
            g_item[0]++;
            break;
        case 2:
            g_item[1]++;
            break;
        case 3:
            g_item[2]++;
            break;
        case 4:
            g_item[3]++;
            break;
        case 5:
            g_item[4]++;
            break;
        case 6:
            g_item[5]++;
            break;
        case 7:
            g_item[6]++;
            break;
        case 8:
            break;
        default:
            printf("ERROR: INVALID INPUT!");
        }

        // display current total purchase
        setTotalPurchase();
        if (g_totalPurchase != 0)
            printf("\nTotal purchased: RM%.2f", g_totalPurchase);
    }
    if (g_totalPurchase != 0)
    {
        // request user payment amount
        setUserPayment();

        // display receipt
        getReceipt();
    }
    return 0;
}

// function 1: display main menu
void getMainMenu()
{
    printf("\n\nSelect an item to purchase");
    printf("\n1. Maggi Asam Laksa");
    printf("\n2. Maggi Ayam");
    printf("\n3. Maggi Kari");
    printf("\n4. Maggi Tomyam");
    printf("\n5. Nescafe Latte");
    printf("\n6. Nescafe Mocha");
    printf("\n7. Nescafe Original");
    printf("\n8. Finish");
}

// function 2: request user menu selection
void setChoice()
{
    printf("\nEnter selection: ");
    scanf("%d", &g_choice);
}

// function 3: set total purchase of all item
void setTotalPurchase()
{
    g_totalPurchase = 0;
    g_totalPurchase += (g_item[0] + g_item[1] + g_item[2] + g_item[3]) * FOOD_PRICE;
    g_totalPurchase += (g_item[4] + g_item[5] + g_item[6]) * BEVERAGE_PRICE;
}

// function 4: request user payment amount
void setUserPayment()
{
    do
    {
        float input = 0;

        printf("\n\nEnter amount : RM");
        scanf("%f", &input);

        if (input <= 0)
            printf("ERROR: INVALID INPUT!");
        else
        {
            // accept user payment
            g_userPayment += input;

            // inform user insufficient amount if payment less than purchase
            if (g_userPayment < g_totalPurchase)
            {
                printf("Total purchase (RM): %.2f", g_totalPurchase);
                printf("\nPayment entered (RM): %.2f", g_userPayment);
                printf("\nPLEASE ADD MORE!");
            }
        }
    } while (g_userPayment < g_totalPurchase);
}

// function 5: display receipt with item name, total price, amount paid
void getReceipt()
{
    printf("\nPrinting receipt...");
    printf("\n----------------------------------------------");
    printf("\nItem\t\t\tQuantity\tPrice");
    printf("\n----------------------------------------------");
    // ITEM NAME                                 QUANTITY    QUANTITY * PRICE
    if (g_item[0] != 0)
        printf("\nMaggi Asam Laksa\t%d\t\t%.2f", g_item[0], g_item[0] * FOOD_PRICE);
    if (g_item[1] != 0)
        printf("\nMaggi Ayam\t\t%d\t\t%.2f", g_item[1], g_item[1] * FOOD_PRICE);
    if (g_item[2] != 0)
        printf("\nMaggi Kari\t\t%d\t\t%.2f", g_item[2], g_item[2] * FOOD_PRICE);
    if (g_item[3] != 0)
        printf("\nMaggi Tomyam\t\t%d\t\t%.2f", g_item[3], g_item[3] * FOOD_PRICE);
    if (g_item[4] != 0)
        printf("\nNescafe Latte\t\t%d\t\t%.2f", g_item[4], g_item[4] * BEVERAGE_PRICE);
    if (g_item[5] != 0)
        printf("\nNescafe Mocha\t\t%d\t\t%.2f", g_item[5], g_item[5] * BEVERAGE_PRICE);
    if (g_item[6] != 0)
        printf("\nNescafe Original\t%d\t\t%.2f", g_item[6], g_item[6] * BEVERAGE_PRICE);
    printf("\n----------------------------------------------");
    printf("\nTotal\t\t\t\t\tRM%.2f", g_totalPurchase);
    printf("\nPaid\t\t\t\t\tRM%.2f", g_userPayment);
    printf("\nBalance\t\t\t\t\tRM%.2f", g_userPayment - g_totalPurchase);
    printf("\n\nThank you for your purchase!");
}
