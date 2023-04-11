#include <iostream>
#include <vector>
using namespace std;
struct Data
{
    string name;
    float salary;
};
// NODE --------------------------------------------------------------------------
struct Node // option 1: struct
{
    string name;
    float salary;
    Node *next;
};
class Node // option 2: class
{
public:
    string name;
    float salary;
    Node *next;
};
// COPY STL TO LINKED LIST -------------------------------------------------------
void copyToLinkedList(Node **head, Node **tail, vector<Data> staff)
{
    Node *node, *dummy;
    vector<Data>::iterator it;
    for (it = staff.begin(); it != staff.end(); it++)
    {
        // create new node
        node = new Node();
        // set node data
        node->name = it->name;
        node->salary = it->salary;
        node->next = NULL;

        // insert node to linked list
        // case 1: linked list empty
        if (*head == NULL)
            *head = *tail = node;
        // case 2: linked list occupied
        else
        {
            (*tail)->next = node;
            *tail = node;
        }
    }
}
// DISPLAY -----------------------------------------------------------------------
void display(Node *head)
{
    for (; head != NULL; head = head->next)
    {
        cout << "Name: " << head->name
             << " ,Salary: " << head->salary << endl;
    }
}
// CREATE NODE -------------------------------------------------------------------
Node *createNode()
{
    // create new node
    Node *node = new Node();
    // input name
    cout << "Enter name: ";
    getline(cin >> ws, node->name);
    // input salary
    cout << "Enter salary: ";
    cin >> node->salary;
    return node;
}

// INSERT NODE -------------------------------------------------------------------
void insertNode(Node **head, Node **tail)
{

    Node *node, *dummy = *head;
    node = createNode();

    // insert node
    int selection;
    cout << "Enter position of record [1]front, [2]middle, [3]end: ";
    cin >> selection;
    switch (selection)
    {
    case 1: // insert front
        node->next = *head;
        *head = node;
        break;
    case 2: // insert middle
        int midPosition;
        display(*head);
        cout << "Enter middle position (other than front and end): ";
        cin >> midPosition;
        // move dummy to one position before mid
        for (int i = 1; i < midPosition; i++)
            dummy = dummy->next;
        node->next = dummy->next;
        dummy->next = node;
        break;
    case 3: // insert last
        (*tail)->next = node;
        *tail = node;
        break;
    }
}
// DELETE NODE -------------------------------------------------------------------
void deleteNode(Node **head, Node **tail)
{
    Node *dummy = *head, *dummy2;
    string inputName;
    cout << "Enter name: ";
    getline(cin >> ws, inputName);

    // list empty
    if (dummy->next == NULL)
        cout << "List is empty!" << endl;
    else
    {
        if (dummy->name == inputName) // delete at begin
        {
            *head = dummy->next;
            free(dummy);
        }
        else // delete at middle or last
        {
            while (dummy->next->name != inputName)
                dummy = dummy->next;

            dummy2 = dummy->next->next;
            free(dummy->next);
            dummy->next = dummy2;
        }
    }
}
int main()
{
    vector<Data> staff = {{"Mei", 12000}, {"Rajesh", 4000}, {"Husin", 7500}};
    Node *head, *tail;
    head = tail = NULL;

    copyToLinkedList(&head, &tail, staff);
    insertNode(&head, &tail);
    display(head);
    deleteNode(&head, &tail);
    return 0;
}