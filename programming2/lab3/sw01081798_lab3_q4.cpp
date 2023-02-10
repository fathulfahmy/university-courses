/*************************************************************
AUTHOR: SW01081798 Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 29/09/2022
DESCRIPTION:  a program that receives prices for n items
INPUT: n item, price
OUTPUT: price, total, average
FORMULA:
getPrice(); - receive user input for prices
displayPrice() – display all entered prices
CalculateTotalAveragePrice() – calculate and display the total and average price.
CONDITION:
*************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void getPrice(int, float[]);
void displayPrice(int, float[]);
void calcTotalAveragePrice(int, float[]);

int main()
{
    // INPUT item quantity
    int item = 0;
    cout << "How many items user purchase? : ";
    cin >> item;
    cout << endl;

    float price[item] = {0};

    // INPUT price
    getPrice(item, price);
    
    // OUTPUT price
    displayPrice(item, price);
    
    // COMPUTE total, average
    // OUTPUT total, average
    calcTotalAveragePrice(item, price);

    return 0;
}

// INPUT price
void getPrice(int item, float price[])
{
    for (int i = 0; i < item; i++)
    {
        cout << "Enter price for item " << i + 1 << ": ";
        cin >> price[i];
    }
}

// OUTPUT price
void displayPrice(int item, float price[])
{
    cout << "\nDisplay Price for ALL Items" << endl;
    for (int i = 0; i < item; i++)
        cout << "Price for item " << i + 1 << " is " << fixed << setprecision(2) << price[i] << endl;
}

// COMPUTE total, average
// OUTPUT total, average
void calcTotalAveragePrice(int item, float price[])
{
    float total = 0;
    for (int i = 0; i < item; i++)
        total += price[i];

    cout << "\nTotal price are " << fixed << setprecision(2) << total << endl;
    cout << "Average price are " << fixed << setprecision(2) << total / item << endl;
}

/*
How many items user purchase? : 3

Enter price for item 1: 3.5
Enter price for item 2: 15.9
Enter price for item 3: 29.35

Display Price for ALL Items
Price for item 1 is 3.50
Price for item 2 is 15.90
Price for item 3 is 29.35

Total price are 48.75
Average price are 16.25
*/
