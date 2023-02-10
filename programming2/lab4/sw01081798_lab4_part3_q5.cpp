/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 13/10/2022
DESCRIPTION: a complete program that will declare two dynamic memory allocation
pointer variables: intptr (int) and floatptr (float).
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: Part 4 Q5
*************************************************************/
#include <iostream>
#include <new>

using namespace std;
int main()
{
    // ASSIGN int pointer
    int *ptrInt = new int;
    *ptrInt = 89;
    // ASSIGN float pointer
    float *ptrFloat = new float;
    *ptrFloat = 100.75;
    // OUTPUT pointer
    cout << "Integer pointer value: " << *ptrInt << endl;
    cout << "Float pointer value: " << *ptrFloat << endl;
    // DELETE
    delete ptrInt;
    delete ptrFloat;

    return 0;
}

/* Integer pointer value: 89
Float pointer value: 100.75 */