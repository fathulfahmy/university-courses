#include <iostream>
#include <vector>
#include <algorithm>  //sort
#include <functional> //greater
using namespace std;

int main()
{
    vector<int> rec;
    int no;
    char choice;

    // user controlled loop
    do
    {
        cout << "Enter number: ";
        cin >> no;
        rec.push_back(no);
        cout << "Add data (y for Yes)";
        cin >> choice;
    } while (choice == 'y');

    // sort in ascending order
    sort(rec.begin(), rec.end());

    // sort in descending order
    sort(rec.begin(), rec.end(), greater<int>());

    // display option 1: counter controlled loop
    cout << "\ncounter-controlled loop: ";
    for (int i = 0; i < rec.size(); i++)
        cout << rec.at(i) << " ";

    // display option  2: iterator
    cout << "\nreverse order: ";
    vector<int>::reverse_iterator it;
    for (it = rec.rbegin(); it < rec.rend(); it++)
        cout << *it << " ";
    cout << "\nThank you";

    return 0;
}