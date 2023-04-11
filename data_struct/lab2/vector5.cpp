#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{

    vector<int> rec;
    int no = 0;
    char choice = 'n';
    // user controlled loop
    do
    {
        // 1. request from user a number
        cout << "Enter a number: ";
        cin >> no;

        // 2.0 insert number at the beginning of vector
        // uncomment code below to view code ( ctrl + /)
        // rec.insert(rec.begin(), no);

        // 2.1 insert number at the end of vector
        rec.push_back(no);
        cout << "Enter another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    // 3.0 sort in ascending order
    // sort(start, end)
    sort(rec.begin(), rec.end());

    // 3.1 sort in descending order
    // sort by prioritizing greater number
    sort(rec.begin(), rec.end(), greater<int>());

    // 4.0 display by using counter controlled loop
    cout << "\nDisplay by using counter-controlled loop: ";
    // note: rec.size() to get vector size
    for (int i = 0; i < rec.size(); i++)
        cout << rec.at(i) << " ";

    // 4.1 display by using iterator
    cout << "\nDisplay by using iterator: ";
    vector<int>::iterator it;
    for (it = rec.begin(); it < rec.end(); it++)
        cout << *it << " ";

    // 4.2 display by using reverse iterator
    cout << "\nDisplay by using reverse iterator: ";
    vector<int>::reverse_iterator rit;
    for (rit = rec.rbegin(); rit < rec.rend(); rit++)
        cout << *rit << " ";

    cout << "\nThank you";
    return 0;
}