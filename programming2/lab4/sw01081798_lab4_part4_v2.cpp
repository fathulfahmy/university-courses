/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 06/10/2022
DESCRIPTION: a program to perform the swapping of 2 numbers
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: Part4 V1
*************************************************************/
#include <iostream>
using namespace std;
void swapNum(float *, float *);

int main()
{
    // DECLARATION
    float num1, num2;
    float *pointer1, *pointer2;
    // INPUT
    cout << "********** SWAPPING - POINTER **********" << endl;
    cout << "Enter 2 numbers" << endl;
    cout << "a = ";
    cin >> num1;
    cout << "b = ";
    cin >> num2;
    // ASSIGN TO POINTER
    pointer1 = &num1;
    pointer2 = &num2;
    // CALL FUNCTION
    swapNum(pointer1, pointer2);
    // OUTPUT
    cout << "After swapping" << endl;
    cout << "a = " << num1 << endl;
    cout << "b = " << num2 << endl;
    cout << "********** END OF PROGRAM **********" << endl;

    return 0;
}

void swapNum(float *pointer1, float *pointer2)
{
    float temp;
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}