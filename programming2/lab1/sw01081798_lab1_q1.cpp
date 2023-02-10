/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 15/09/2022
DESCRIPTION: to display welcome message and birth year questions
INPUT: birth_year
OUTPUT: birth_year
FORMULA: NA
CONDITION: NA
*************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int birth_year = 0;
    cout << "Hello there!" << endl;
    cout << "Are you in good health?" << endl;
    cout << "What is your birth year?" << endl;
    cin >> birth_year;
    cout << "You are born in the year " << birth_year << endl;
}

/*
Hello there!
Are you in good health?
What is your birth year?
2001
You are born in the year 2001
 */