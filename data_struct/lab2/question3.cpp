#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    // Q: What is the output of the following code segment?
    // A: 5 4 1 9 8
    vector<int> v1;
    int i = 1, no;

    for (; i < 6; i++)
    // 1. loop 6 times
    {
        cout << "Enter a value";
        cin >> no;
        // 2. request input from user
        // note: assume that user enters 8 9 1 4 5

        v1.insert(v1.begin(), no);
        // 3. every new element is assigned at the beginning
    }

    vector<int>::iterator x;
    for (x = v1.begin(); x != v1.end(); ++x)
        cout << *x << " ";
    cout << endl;

    return 0;
}