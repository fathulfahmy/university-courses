#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;

// line 57 requirement
// bool even()
// {
//     // data here
// }

int main()
{
    list<int> rec{4, 7, 6, 3, 9, 7}, rec2{1, 2, 3};

    // 1. sort in ascending order
    rec.sort();

    /*
     problem: code below cannot be used with linked list because
     < symbol is not applicable in linked list as the data is not contiguous
     uncomment code below to view code ( ctrl + / )
    */

    // cout << "\nDisplay by using iterator: ";
    // list<int>::iterator it;
    // for (it = rec.begin(); it < rec.end(); it++)
    //     cout << *it << " ";

    /*
    solution: replace < symbol with != and
    it loops as long as it does not meet end of list
    */
    cout << "\nDisplay by using iterator: ";
    list<int>::iterator it;
    for (it = rec.begin(); it != rec.end(); it++)
        cout << *it << " ";

    // 2. sort in descending order
    rec.sort(greater<int>());

    // 3. display in descending order
    // sort in ascending order
    rec.sort();
    // display in reverse order
    cout << "\nDisplay by using reverse iterator: ";
    list<int>::reverse_iterator rit;
    for (rit = rec.rbegin(); rit != rec.rend(); rit++)
        cout << *rit << " ";

    // 4.0 remove specified data
    // remove 7 from  4 7 6 3 9 7
    rec.remove(7);
    cout << "\nRemove: ";
    for (it = rec.begin(); it != rec.end(); it++)
        cout << *it << " ";

    // 4.1 remove special case
    // line 8 - 11 are required
    // rec.remove_if(even);

    // 4.2 unclear usage, will be revised in next lecture
    // rec.unique()

    // 5. restructure data
    rec.reverse();

    // 6. merge
    // rec 2 will be merged at the beginning of rec
    rec.merge(rec2);

    return 0;
}