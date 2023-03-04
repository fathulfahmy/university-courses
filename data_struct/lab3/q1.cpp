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
    cin.ignore();
    getline(cin, node->name);
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
int main()
{
    vector<Data> staff = {{"Mei Ling", 12000}, {"Rajesh", 4000}, {"Husin", 7500}};
    Data temp;
    Node *head = NULL;
    Node *tail = NULL;

    // // new record
    // cout << ":: New Record ::" << endl;
    // /* this section shall prompt user to input data for staff name and salary.
    // Store the input data at the end of the STL staff */
    // cout << "Enter staff name: ";
    // getline(cin, temp.name);
    // cout << "Enter staff's salary: ";
    // cin >> temp.salary;
    // staff.push_back(temp);

    // // display
    // vector<Data>::iterator it;
    // cout << "\n:: All Staff Record ::" << endl;
    // /*this function shall display all data in the STL staff using iterator */
    // for (it = staff.begin(); it != staff.end(); it++)
    // {
    //     cout << "Name: " << it->name << endl;
    //     cout << "Salary " << it->salary << endl;
    // }

    // filter salary
    filterRecord(&head, &tail, staff);
    // enter new record
    addRecord(&head, &tail);
    // display
    display(head);
    cout << "End of Program";

    return 0;
}