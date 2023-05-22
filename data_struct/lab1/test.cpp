#include <iostream>
#include <stack>

using namespace std;

struct T
{
    int id;
    string name;
};
int main(void)
{
    stack<T> s;
    T temp;

    temp.id = 1;
    temp.name = "test";

    s.push(temp);
    temp.id = 2;
    temp.name = "2test";
    s.push(temp);

    cout << s.top().name << endl;
    s.pop();
    cout << s.top().name << endl;

    return 0;
}