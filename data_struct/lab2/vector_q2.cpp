#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    // Q: What is the output of the code segment?
    // A: 2, 4, 7, 8

    int a[] = {2, 4, 7, 8, 11};
    // 1. declare array a with element 2, 4, 7, 8, 11

    vector<int> L(a, a + 4);
    // 2. declare vector L
    // copy from index = 0 until (before index = 4)
    // vector is assigned with element 2, 4, 7 and 8

    vector<int>::iterator i;
    for (i = L.begin(); i != L.end(); ++i)
        cout << *i << " ";

    return 0;
}
