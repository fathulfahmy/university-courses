/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******
Subject code : CSEB3213/CSEB324 Data Structure & Algorithms
Section      : 01B
Student name : Harsvin Subramaniam
Student ID no: SN0107983
Question no  : 02
*******/
// suitable header(s)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Data
{
    string name;
    float salary;
};

struct Node
{
    string name;
    float salary;
    Node *next;
};

void filterRecord(vector<Data> staff, Node **head, Node **tail)
{

    Node *newNode;
    for (int i = 0; i < staff.size(); i++)
    {
        if (staff[i].salary > 5000)
        {
            newNode = new Node;
            newNode->name = staff[i].name;
            newNode->salary = staff[i].salary;
            newNode->next = NULL;
            if (*head == NULL)
            {
                *head = *tail = newNode;
            }
            else
            {
                (*tail)->next = newNode;
                *tail = newNode;
            }
        }
    }
}

void display(Node *head)
{
    cout << "\n:: Staff Record With Salary > RM5k ::" << endl;
    while (head != NULL)
    {
        cout << "Name: " << head->name << " : Salary : RM" << head->salary << endl;
        head = head->next;
    }
}
void addRecord(Node **head, Node **tail)
{
    Node *newNode = new Node;
    int position, listPosition, i = 0;
    cout << "\n:: New Staff Record Wit Salary > RM5k ::" << endl;
    cout << "Enter name: ";
    cin >> ws;
    getline(cin, newNode->name);
    cout << "Enter salary : RM";
    cin >> newNode->salary;

    while (newNode->salary < 5000)
    {
        cout << "Error Min Salary is RM5000. Re-enter salary : ";
        cin >> newNode->salary;
    }

    Node *p = *head;
    cout << "Enter position of record [1] front, [2]middle. [3]end :";
    cin >> position;

    switch (position)
    {
    case 1:
        newNode->next = *head;
        *head = newNode;
        break;
    case 2:
        display(*head);
        cout << "Enter middle position (other than front and end) : ";
        cin >> listPosition;
        for (int i = 1; i < listPosition; i++)
            p = p->next;
        newNode->next = p->next;
        p->next = newNode;
        break;
    case 3:
        (*tail)->next = newNode;
        *tail = newNode;
        break;
    }
}

void deleteRecord(Node **head, Node **tail)
{
    Node *p = *head;
    Node *p2;
    string deleteName;
    cout << "\n\n:: Delete Staff Record ::" << endl
         << "Enter name: ";
    cin >> ws;
    getline(cin, deleteName);

    if (p->next == NULL)
        cout << "List is empty!" << endl;
    else
    {
        // begin
        if (p->name == deleteName)
        {
            *head = p->next;
            free(p);
        }
        else
        {
            // search name
            while (p->next->name != deleteName)
                p = p->next;

            p2 = p->next->next;
            free(p->next);
            p->next = p2;
        }
    }
    display(*head);
}
int main()
{
    vector<Data> staff = {{"Mei Ling", 12000}, {"Rajesh", 4000}, {"Husin", 7500}};
    Data temp;
    Node *head = NULL;
    Node *tail = NULL;

    filterRecord(staff, &head, &tail);
    addRecord(&head, &tail);
    display(head);
    deleteRecord(&head, &tail);
    cout << "End of Program";
    return 0;
}
