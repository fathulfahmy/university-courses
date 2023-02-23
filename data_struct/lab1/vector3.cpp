#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // declare vector
    vector<int> rec = {1, 2, 3, 4, 5, 6};
    // display vector size
    cout << "Size of vector is: " << rec.size() << endl;
    // display vector
    for (auto i : rec)
        cout << i << " ";
    // display data
    cout << "\nFirst data: " << rec.front();
    cout << "\nLast data: " << rec.back();
    cout << "\nMiddle data: " << rec.at(rec.size() / 2);
    cout << "\nSecond data: " << rec.front() + 1;

    // insert 3 at second last index
    rec.insert(rec.end() - 1, 3);
    cout << "\nInsert 3 at second last index: ";
    // display vector
    for (auto i : rec)
        cout << i << " ";

    cout << "\nContent of vector using iterator: ";
    vector<int>::iterator j = rec.begin();
    for (; j < rec.end(); j++)
        cout << *j << " ";

    cout << "\nContent of vector using reverse iterator: ";
    vector<int>::reverse_iterator k = rec.rbegin();
    for (; k < rec.rend(); k++)
        cout << *k << " ";

    cout << "\nContent of vector using constant reverse iterator: ";
    vector<int>::const_reverse_iterator l = rec.crbegin();
    for (; l < rec.crend(); l++)
        cout << *l << " ";

    return 0;
}