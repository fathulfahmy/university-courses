#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> rec)
{
    vector<int>::iterator it = rec.begin();
    for (; it < rec.end(); it++)
        cout << *it << " ";
}

int main()
{
    // 1. display vector
    vector<int> rec{2, 4, 6, 8};
    vector<int>::iterator it, i, j, k;

    cout << "\nOriginal vector: ";
    display(rec);

    // 2. add data
    int no;
    cout << "\n\nEnter three additional data: \n";
    for (int i = 1; i < 4; i++)
    {
        cout << "Enter a number: ";
        cin >> no;
        rec.push_back(no);
    }

    // 3. display vector
    cout << "Vector after adding three data: ";
    display(rec);

    // 4. change value [2] to 9
    cout << "\n\nChange the 3rd data to 9";
    it = rec.begin();
    advance(it, 2);
    *it = 9;
    cout << "\nVector after update the 3rd data: ";
    display(rec);

    // 5. sort data in ascending order
    cout << "\n\nSort the data in ascending order";
    sort(rec.begin(), rec.end());
    cout << "\nVector after the data are sorted: ";
    display(rec);

    // 6. delete data element = 4
    cout << "\n\nDelete data 4";
    // remove(start, stop, data to be removed)
    k = remove(rec.begin(), rec.end(), 4);
    cout << "\nVector after data 4 is deleted: ";
    display(rec);

    // for(k = rec.begin(); k != rec.end(); k++)
    // {
    //     if(*k == 4)
    //         rec.remove();
    // }

    // 7. delete the first three data
    cout << "\nDelete the first three data";
    i = j = rec.begin();
    advance(j, 3);
    rec.erase(i, j);
    cout << "\nVector after the first three data are deleted: ";
    display(rec);
    return 0;
}