#include <stack>
#include <iostream>
using namespace std;
struct Data
{
    int id;
    float weight;
};
int main()
{
    stack<Data> myStack;
    Data temp;
    for (int i = 0; i < 3; i++)
    {
        cin >> temp.id;
        cin >> temp.weight;
        myStack.push(temp);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << myStack.top().id;
        cout << myStack.top().weight;
        myStack.pop();
    }
    return 0;
}