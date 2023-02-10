#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    // Q: What is the output of the following code segment?
    // A: 5 4 2 2 9

    int array[] = {5, 4, 2, 5, 9};
    // 1. declare array named array with elemetn 5 4 2 5 9

    vector<int> myvec(array, array + 5);
    // 2. declare vector named myvec
    // copy element array at index = 0 untill (before index = 5)
    // 5 4 2 5 9

    replace(myvec.begin() + 1, myvec.end(), 5, 2);
    // 3. replace(start, stop, find, replace)
    // 5 4 2 2 9

    vector<int>::iterator x;
    for (x = myvec.begin(); x != myvec.end(); ++x)
        cout << *x << " ";

    return 0;
}