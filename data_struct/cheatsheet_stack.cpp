#include <iostream>
#include <stack>
using namespace std;

struct Data
{
    float mark;
    Data *next;
};
// LINKED LIST STACK -------------------------------------------------------------
void push(Data **head, float mark)
{
    Data *n = new Data;
    n->mark = mark;
    n->next = NULL;

    if (*head == NULL)
        *head = n;
    else
    {
        n->next = *head;
        *head = n;
    }
}
void pop(Data **head)
{
    Data *p = *head;
    *head = (*head)->next;
    free(p);
    p = *head;
}
// STL STACK ---------------------------------------------------------------------
int main()
{
    stack<float> mark;
    int size = 5;
    float inputMark;

    // FUNCTION ------------------------------------------------------------------
    mark.push(7); // insert 7 to stack
    mark.top();   // return top value
    mark.pop();   // remove last value
    mark.empty(); // check if stack is empty

    // INSERT --------------------------------------------------------------------
    for (int i = 0; i < size; i++)
    {
        cout << "Enter mark: ";
        cin >> inputMark;
        mark.push(inputMark);
    }

    // DISPLAY ------------------------------------------------------------------
    for (int i = 0; i < size; i++)
    {
        cout << "Mark: " << mark.top() << endl;
        mark.pop();
    }

    // LINKED LIST STACK --------------------------------------------------------
    float llmark;
    Data *head = NULL;
    push(&head, llmark);
    pop(&head);

    return 0;
}