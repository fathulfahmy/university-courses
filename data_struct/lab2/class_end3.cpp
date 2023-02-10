#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    list<int> rec{1, 2, 3, 4, 5}, rec2{6, 7, 8, 9, 10};
    // current it position = [0]
    list<int>::iterator it, i, j, k;

    // SPLICE SINGLE DATA
    // 1. display list before splice
    cout << "\nRec before splice: ";
    for (it = rec.begin(); it != rec.end(); it++)
        cout << *it << " ";
    cout << "\nRec2 before splice: ";
    for (it = rec2.begin(); it != rec2.end(); it++)
        cout << *it << " ";

    // 2. position iterator i at rec2[1]
    i = rec2.begin();
    advance(i, 1);
    // 3. splice - cut and paste single data
    rec.splice(rec.end(), rec2, i);

    // 4. display list after splice
    cout << "\nRec after splice (single): ";
    for (it = rec.begin(); it != rec.end(); it++)
        cout << *it << " ";
    cout << "\nRec2 after splice (single): ";
    for (it = rec2.begin(); it != rec2.end(); it++)
        cout << *it << " ";

    // SPLICE RANGE OF DATA
    // 1. position iterator j at rec2[1] and k at rec2[3]
    j = k = rec2.begin();
    advance(j, 1);
    advance(k, 3);
    // 2. splice - cut and paste range of data from [j] to before [k]
    rec.splice(rec.end(), rec2, j, k);
    // 3. display list after splice
    cout << "\nRec after splice (range): ";
    for (it = rec.begin(); it != rec.end(); it++)
        cout << *it << " ";
    cout << "\nRec2 after splice (range): ";
    for (it = rec2.begin(); it != rec2.end(); it++)
        cout << *it << " ";

    // SPLICE ALL DATA
    // 1. splice - cut and paste all data
    // splice(paste at, source)
    rec.splice(rec.end(), rec2);

    // 2. display list after second splice
    cout << "\nRec after splice (all): ";
    for (it = rec.begin(); it != rec.end(); it++)
        cout << *it << " ";
    cout << "\nRec2 after splice (all): ";
    for (it = rec2.begin(); it != rec2.end(); it++)
        cout << *it << " ";
    return 0;
}