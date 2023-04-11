#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
int main()
{
    // DECLARATION ---------------------------------------------------------------
    vector<int> vec;
    vector<int> vec1{1, 7, 6};
    int num[] = {1, 2, 3, 4};
    vector<int>::iterator it, it2, it3;

    // FUNCTION ------------------------------------------------------------------
    vec.assign(5, 10);               // set vector size to 5 and fill blank with  10
    vec.assign(num, num + 4);        // insert from array [0] untill [3] to vector
    vec.push_back(8);                // insert 8 at the end
    vec.pop_back();                  // delete last data
    vec.insert(vec.begin(), 11);     // insert 11 at [0]
    vec.emplace(vec.begin() + 2, 9); // insert 9 at [1]
    vec.emplace_back(7);             // insert 7 at the end
    vec.erase(vec.begin() + 3);      // delete [2]
    vec.erase(vec.end() - 2);        // delete second last data
    vec.swap(vec1);                  // swap vector with vector1
    vec1.clear();                    // clear vector
    vec.resize(5);                   // resize vector
    vec.resize(10, 9);               // resize to size 10 and fill blank with 9
    vec.size();                      // return vector size
    if (vec.empty())                 // check if vector empty
        ;
    vec.front();                                  // return first data
    vec.back();                                   // return last data
    vec.at(vec.size() / 2);                       // return middle data
    vec.front() + 1;                              // return second data
    sort(vec.begin(), vec.end());                 // sort in ascending order
    sort(vec.begin(), vec.end(), greater<int>()); // sort in descending order
    advance(it, 2);                               // move iterator forward +2
    *it = 9;                                      // set data pointed to 9
    remove(vec.begin(), vec.end(), 4);            // delete 4 from begin to end
    it2 = it3 = vec.begin();                      // delete data from [0] to [2]
    advance(it3, 3);
    vec.erase(it2, it3);

    // DISPLAY--------------------------------------------------------------------
    // option 1: iterator
    vector<int>::iterator j = vec.begin();
    for (; j < vec.end(); j++)
        cout << *j << " ";
    // option 2: reverse iterator
    vector<int>::reverse_iterator k = vec.rbegin();
    for (; k < vec.rend(); k++)
        cout << *k << " ";
    // option 3: constant reverse iterator
    vector<int>::const_reverse_iterator l = vec.crbegin();
    for (; l < vec.crend(); l++)
        cout << *l << " ";
    // option 4: counter controlled
    for (int i = 0; i < vec.size(); i++)
        cout << vec.at(i) << " ";

    return 0;
}