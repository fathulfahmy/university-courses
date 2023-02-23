/*************************************************************
SUBJECT: Data Structure
DATE: 31/01/2023
DESCRIPTION: Chapter 1 Abstract Data Type and Introduction to STL (Part 2)
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: Slide 9
*************************************************************/
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // declare vector
    vector<int> vec;
    // declare dynamic array
    int num[] = {1, 2, 3, 4};

    // // assign vectorname.assign(int size, int value)
    vec.assign(5, 10);

    // copy num to vec
    vec.assign(num, num + 4); // copy from index 0 untill before index 2 (i = 0) and (i = 1)

    // display vector
    for (auto i : vec)
        cout << i << " ";

    // display empty vector message
    if (vec.empty())
        cout << "Vector is empty\n";

    cout << "\nThank you";

    return 0;
}