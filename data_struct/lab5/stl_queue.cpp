#include <iostream>
#include <queue>
using namespace std;
void grading(int size, queue<float> mark)
{
    int pass = 0, fail = 0;
    for (int i = 0; i < size; i++)
    {
        // check status
        if (mark.front() >= 50)
        {
            pass++;
            cout << "Mark: " << mark.front() << endl;
            mark.pop();
            // display status
            cout << "Status: pass" << endl;
        }
        else
        {
            fail++;
            cout << "Mark: " << mark.front() << endl;
            mark.pop();
            cout << "Status: fail" << endl;
        }
    }
    // display total status
    cout << "Total pass: " << pass << endl
         << "Total failed: " << fail << endl;
}
int main()
{
    int size;
    float inputMark;
    queue<float> mark;

    cout << "Enter total data to insert: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        // insert mark
        cout << "Enter mark: ";
        cin >> inputMark;
        mark.push(inputMark);
    }

    // grade mark
    grading(size, mark);
    // display mark
    return 0;
}