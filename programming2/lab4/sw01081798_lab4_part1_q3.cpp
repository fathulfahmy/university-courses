/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 06 / 10 / 2022
DESCRIPTION:  a complete program that will declare a variable my_letter (char),
a pointer that will point to the my_letter and display it as an output
SECTION: 02
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: Part 1 Q3
*************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // DECLARATION
    char my_letter;
    char *pointer1;
    // INPUT
    cout << "Enter your favourite letter : ";
    cin >> my_letter;
    pointer1 = &my_letter;
    // OUTPUT
    cout << "********** LETTER - POINTER **********" << endl;
    cout << "Letter pass by value = " << my_letter << endl;
    cout << "Letter pass by reference = " << (void *)pointer1 << endl;
    cout << "********** END OF PROGRAM **********" << endl;

    return 0;
}