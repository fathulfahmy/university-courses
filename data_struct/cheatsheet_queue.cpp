#include <iostream>
#include <queue>
using namespace std;
struct Data
{
    float mark;
    Data *next;
};
// LINKED LIST QUEUE ------------------------------------------------------------
void push(Data **tail, Data **head, float mark)
{
    Data *n = new Data;
    n->mark = mark;
    n->next = NULL;

    if (*head == NULL)
        *tail = *head = n;
    else
    {
        (*tail)->next = n;
        *tail = n;
    }
}
void pop(Data **head)
{
    Data *p = *head;
    *head = (*head)->next;
    free(p);
    p = *head;
}
// STL QUEUE
int main()
{
    queue<float> mark;
    int size = 5;
    float inputMark;

    // FUNCTION -----------------------------------------------------------------
    mark.push(7); // insert 7 to queue
    mark.front(); // return first value
    mark.back();  // return last value
    mark.pop();   // remove last value
    mark.empty();

    // INSERT -------------------------------------------------------------------
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter mark : ";
        cin >> inputMark;
        mark.push(inputMark);
    }

    // DISPLAY ------------------------------------------------------------------
    for (int i = 0; i < size; i++)
    {
        cout << "Mark: " << mark.front() << endl;
        mark.pop();
    }

    // LINKED LIST QUEUE --------------------------------------------------------
    Data *head = NULL, *tail = NULL;
    float llmark;
    push(&tail, &head, llmark);
    pop(&head);
    return 0;
}