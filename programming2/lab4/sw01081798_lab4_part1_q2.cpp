/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 06 / 10 / 2022
DESCRIPTION:  a complete program that will declare a variable my_pointer (float),
a pointer that will point to the my_pointer and display it as an output
SECTION: 02
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: Part 1 Q2
*************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // DECLARATION
    float my_pointer;
    float *pointer1;
    // INPUT
    cout << "Enter your current CGPA : ";
    cin >> my_pointer;
    pointer1 = &my_pointer;
    // OUTPUT
    cout << "********** CGPA - POINTER **********" << endl;
    cout << "CGPA pass by value = " << my_pointer << endl;
    cout << "CGPA pass by reference = " << pointer1 << endl;
    cout << "********** END OF PROGRAM **********" << endl;

    return 0;
}