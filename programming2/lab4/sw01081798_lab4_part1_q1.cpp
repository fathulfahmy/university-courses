/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 06 / 10 / 2022
DESCRIPTION: a complete program that will declare a variable my_age (int),
a pointer that will point to the my_age and display it as an output
SECTION: 02
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: Part 1 Q1
*************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // DECLARATION
    int my_age;
    int *pointer1;
    // INPUT
    cout << "Enter your current age : ";
    cin >> my_age;
    pointer1 = &my_age;
    // OUTPUT
    cout << "********** AGE - POINTER **********" << endl;
    cout << "Age pass by value = " << my_age << endl;
    cout << "Age pass by reference= " << pointer1 << endl;
    cout << "********** END OF PROGRAM **********" << endl;
    
    return 0;
}