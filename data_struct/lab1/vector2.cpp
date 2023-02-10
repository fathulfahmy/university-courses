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
    vector<int> vec{1, 2, 3, 4, 5};
    vector<int> vec1{1, 7, 6};

    // push at last index
    cout << "\nPush back last index: ";
    vec.push_back(8); // add 8 to next index i = 5
    for (auto i : vec)
        cout << i << " ";

    // pop at last index
    vec.pop_back();
    cout << "\nPop back last index: ";
    for (auto i : vec)
        cout << i << " ";

    // insert at first index
    cout << "\n\nInsert first index: ";
    vec.insert(vec.begin(), 11);
    for (auto i : vec)
        cout << i << " ";

    // insert at specified index
    cout << "\nEmplace specified index (i = begin+2): ";
    vec.emplace(vec.begin() + 2, 9);
    for (auto i : vec)
        cout << i << " ";

    // insert at last index
    cout << "\nEmplace last index: ";
    vec.emplace_back(7);
    for (auto i : vec)
        cout << i << " ";

    // erase at specified index
    cout << "\n\nDelete specified index (i = begin+3): ";
    vec.erase(vec.begin() + 3);
    for (auto i : vec)
        cout << i << " ";

    // erase at specified index
    cout << "\nDelete specified index (i = end-2): ";
    vec.erase(vec.end() - 2);
    for (auto i : vec)
        cout << i << " ";

    // display vec
    cout << "\n\nCurrent data in vec: ";
    for (auto i : vec)
        cout << i << " ";

    // display vec1
    cout << "\nCurrent data in vec1: ";
    for (auto i : vec1)
        cout << i << " ";

    // swap
    vec.swap(vec1);

    // display vec
    cout << "\n\nData in vec after swap: ";
    for (auto i : vec)
        cout << i << " ";

    // display vec1
    cout << "\nData in vec1 after swap: ";
    for (auto i : vec1)
        cout << i << " ";

    // clear vec1
    vec1.clear();
    cout << "\n\nClear vec1: ";
    for (auto i : vec1)
        cout << i << " ";

    // display vec size before resize
    cout << "\n\nSize of vec before resize: ";
    cout << vec.size();

    vec.resize(5);
    // display vec size after resize
    cout << "\nSize of vec after resize: ";
    cout << vec.size();

    // display vec after resize
    cout << "\nData in vec after resize to 5: ";
    for (auto i : vec)
        cout << i << " ";

    // resize vec and assign value
    vec.resize(10, 9); // resize to size 10 and insert 9 to new space
    cout << "\nData in vec after resize to 10 and assign: ";
    for (auto i : vec)
        cout << i << " ";

    // display empty vector message
    if (vec.empty())
        cout << "Vector is empty\n";

    cout << "\n\nThank you";

    return 0;
}