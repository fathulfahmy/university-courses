#include <iostream>

using namespace std;
// node struct
struct Data
{
    float mark;
    Data *next;
};

// insert node
void push(Data **tail, Data **head, float mark)
{
    Data *n = new Data;
    n->mark = mark;
    n->next = NULL;

    /*insertion process*/
    if (*head == NULL)
        *tail = *head = n;
    else
    {
        (*tail)->next = n;
        *tail = n;
    }
}

// Question 1(b)
/* b.	Write a function named grading(). This function should be able to display: (6 marks)
•	status of each mark in stack (pass or fail).
•	total pass status.
•	total fail status.
 */
void grading(Data *head)
{
    int pass = 0, fail = 0;
    while (head != NULL)
    {
        cout << "Mark: " << head->mark << endl;
        if (head->mark >= 50)
        {
            pass++;
            cout << "Status: pass" << endl;
        }
        else
        {
            fail++;
            cout << "Status: fail" << endl;
        }
        head = head->next;
    }
    cout << "Total pass: " << pass << endl
         << "Total failed: " << fail << endl;
}

// Question 1(c)
/* c.	Write a function named pop(). This function should be able to remove all marks in stack. (4 marks) */
void pop(Data **head)
{
    Data *p = *head;
    *head = (*head)->next;
    free(p);
    p = *head;
}
int main()
{
    Data *head = NULL, *tail = NULL;
    int size;
    float mark;

    cout << "Enter total data to insert: ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter mark : ";
        cin >> mark;

        // Question 1(a)
        push(&tail, &head, mark);
    }

    // Question 1(a)
    grading(head);
    pop(&head);

    cout << "\nEnd of program";
    return 0;
}
