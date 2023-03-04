#include <iostream>
using namespace std;

int main()
{
    // part1: create variable
    // a variable stores a value
    int var1 = 5;
    // part2: create pointer
    // a pointer stores an
    // address
    int *pointer = &var1;
    // part3: create pointer
    // to a pointer
    // a pointer to a pointer
    // stores an address
    // of a pointer
    int **pointer2 = &pointer;

    cout << var1 << endl
         << *pointer << endl
         << **pointer2;
    return 0;
}