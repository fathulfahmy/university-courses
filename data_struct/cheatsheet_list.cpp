#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    // DECLARATION ---------------------------------------------------------------
    list<int> rec{4, 7, 6, 3, 9, 7}, rec2{1, 2, 3};
    list<int>::iterator it, i, j, k;

    // FUNCTION
    rec.push_back(7);                           // insert 7 at the end
    rec.remove(4);                              // delete 4 from list
    rec.sort(greater<int>());                   // sort in descending order
    rec.sort();                                 // sort in ascending order
    rec.reverse();                              // reverse data
    rec.merge(rec2);                            // merge rec with rec2
    advance(it, 3);                             // move iterator forward +3
    *it = 10;                                   // set data pointed to 10
    rec2.insert(rec2.begin(), rec.begin(), it); // insert at rec2[0], from rec[0] to [2]

    // SPLICE --------------------------------------------------------------------
    // option 1: single data
    // 1. position iterator i at rec2[1]
    i = rec2.begin();
    advance(i, 1);
    // 2. splice - cut and paste single data
    rec.splice(rec.end(), rec2, i);

    // option 2:  splice range of data
    //  1. position iterator j at rec2[1] and k at rec2[3]
    j = k = rec2.begin();
    advance(j, 1);
    advance(k, 3);
    // 2. splice - cut and paste range of data from [j] to before [k]
    rec.splice(rec.end(), rec2, j, k);

    // option 3:  splice all data
    //  1. splice(paste at, source)
    rec.splice(rec.end(), rec2);

    // DISPLAY -------------------------------------------------------------------
    // option 1: iterator
    for (it = rec.begin(); it != rec.end(); it++)
        cout << *it << " ";
    // option 2: reverse iterator
    list<int>::reverse_iterator rit;
    for (rit = rec.rbegin(); rit != rec.rend(); rit++)
        cout << *rit << " ";
    return 0;
}