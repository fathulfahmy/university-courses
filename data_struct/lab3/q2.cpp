// suitable header(s)
#include <iostream>
#include <vector>
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

void filterRecord(Node **head, Node **tail, vector<Data> staff)
{

    /*this function shall copy all data from STL staff and store it in a singly
      linked list, ONLY if the value of the salary is greater than RM5000 */
    Node *node, *dummy;
    const int maxSalary = 5000;
    vector<Data>::iterator it;
    it = staff.begin();

    for (; it != staff.end(); it++)
    {

        if (it->salary >= maxSalary)
        {
            // create new node
            node = new Node();
            node->name = it->name;
            node->salary = it->salary;
            node->next = NULL;

            // head point to first node
            if (*head == NULL)
                *head = *tail = node;
            // link node to next node
            else
            {
                // last node point to new node
                (*tail)->next = node;
                // tail point to new node
                *tail = node;
            }
        }
    }
}

void display(Node *head)
{
    cout << "\n:: Staff Record With Salary > RM5k ::" << endl;
    for (; head != NULL; head = head->next)
    {
        cout << "Name: " << head->name << endl;
        cout << "Salary: " << head->salary << endl;
    }

    /*this function shall display all data in the singly linked list */
}

void addRecord(Node **head, Node **tail)
{

    const int maxSalary = 5000;
    Node *node, *dummy = *head;
    float inputSalary;

    // create new node
    node = new Node();
    cout << ":: New Staff Record With Salary > RM5k ::" << endl;
    // input name
    cout << "Enter name: ";
    getline(cin >> ws, node->name);
    // input salary
    cout << "Enter salary: ";
    cin >> inputSalary;
    if (inputSalary > maxSalary)
        node->salary = inputSalary;
    else
        cout << "Invalid value!";

    // insert node
    int selection;
    cout << "Enter position of record [1]front, [2]middle, [3]end";
    cin >> selection;
    switch (selection)
    {
    case 1:
        // new node point to current first node
        node->next = *head;
        // head point to new node
        *head = node;
        break;
    case 2:
        int midPosition;
        display(*head);
        cout << "Enter middle position (other than front and end): ";
        cin >> midPosition;
        // move dummy to one position before mid
        for (int i = 1; i < midPosition; i++)
            dummy = dummy->next;
        // new node point to mid
        node->next = dummy->next;
        // dummy point to new node
        dummy->next = node;
        break;
    case 3:
        // last node point to new node
        (*tail)->next = node;
        // tail point to new node
        *tail = node;
        break;
    }
}
void deleteRecord(Node **head, Node **tail)
{
    Node *dummy = *head;
    Node *dummy2;
    string deleteName;
    cout << ":: Delete Staff Record ::" << endl
         << "Enter name: ";
    cin >> ws;
    getline(cin >> ws, deleteName);

    if (dummy->next == NULL)
        cout << "List is empty!" << endl;
    else
    {
        // begin
        if (dummy->name == deleteName)
        {
            *head = dummy->next;
            free(dummy);
        }
        else
        {
            // search name
            while (dummy->next->name != deleteName)
                dummy = dummy->next;

            dummy2 = dummy->next->next;
            free(dummy->next);
            dummy->next = dummy2;
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

    // filter salary
    filterRecord(&head, &tail, staff);
    // enter new record
    addRecord(&head, &tail);
    // display
    display(head);
    // delete
    deleteRecord(&head, &tail);
    cout << "End of Program";

    return 0;
}