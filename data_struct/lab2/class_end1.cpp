#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    list<int> rec{4, 7, 6, 3, 9, 7}, rec2{1, 2, 3};
    // current it position = [0]
    list<int>::iterator it = rec.begin();

    // 1. advance position of iterator by 3
    advance(it, 3);

    // current it position = [3]
    // 2.change value of element pointed by iterator
    *it = 10;

    // 3. display list
    cout << "\nDisplay by using iterator: ";
    for (it = rec.begin(); it != rec.end(); it++)
        cout << *it << " ";

    return 0;
}