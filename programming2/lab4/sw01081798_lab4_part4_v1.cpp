/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 06/10/2022
DESCRIPTION:
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
    cin >> num1;
    cin >> num2;
    // CALL FUNCTION
    swapNum(&num1, &num2);
    // OUTPUT
    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}

void swapNum(float *num1, float *num2)
{
    float temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}