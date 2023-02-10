/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 15-09-2022
DESCRIPTION: calculate the current electricity usage in our daily life
INPUT: wattage, hour, day, utility_rate
OUTPUT: monthly_consumption, monthly_cost
FORMULA: daily_consumption = (wattage * hour) / 1000
monthly_consumption = daily_consumption * day
monthly_cost = monthly_consumption * utility_rate
CONDITION: NA
*************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float wattage, hour, day, utility_rate, daily_consumption, monthly_consumption, monthly_cost;

    cout << "\nWattage (W): " ;
    cin >> wattage;
    cout << "\nDaily usage: (hour/day): " ;
    cin >> hour;
    cout << "\nMonthly usage (day/month): " ;
    cin >> day;
    cout << "\nUtility rate (MYR/ kWh): RM" ;
    cin >> utility_rate;

    daily_consumption = (wattage * hour) / 1000;
    monthly_consumption = daily_consumption * day;
    monthly_cost = monthly_consumption * utility_rate;

    cout << "\nMonthly Consumption (kWh): " ;
    cout << monthly_consumption;
    cout << "\nMonthly Cost (MYR): RM" ;
    cout << monthly_cost;
    return 0;
}

/*
Wattage (W): 1500

Daily usage: (hour/day): 1

Monthly usage (day/month): 5

Utility rate (MYR/ kWh): RM0.11

Monthly Consumption (kWh): 7.5
Monthly Cost (MYR): RM0.825
 */