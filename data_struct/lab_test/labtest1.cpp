// suitable header(s)
#include <iostream>
#include <vector>
using namespace std;

struct Data
{
    string name, role;
    float basicSalary, teaching, transporation, electricity, overtime, allowance, bonus;
};

struct Node
{
    string name, role;
    float basicSalary, teaching, transporation, electricity, overtime, allowance, bonus;
    Node *next;
};

void filter(Node **head, Node **tail, vector<Data> staff, vector<Data> supportStaff)
{
    Node *node, *dummy;
    vector<Data>::iterator it, it2;
    it = staff.begin();
    for (; it != staff.end(); it++)
    {
        if (it->role == "Lecturer")
        {
            // create new node
            node = new Node();
            node->name = it->name;
            node->role = it->role;
            node->basicSalary = it->basicSalary;
            node->allowance = it->teaching + it->transporation + it->electricity + it->overtime;
            node->next = NULL;

            if (*head == NULL)
                *head = *tail = node;
            else
            {
                (*tail)->next = node;
                *tail = node;
            }
            // staff.pop_back();
        }
        else
        {
            // supportStaff.push_back(staff.back());
            // staff.pop_back();
        }
    }
}
void update(Node **head, Node **tail, vector<Data> staff)
{
    vector<Data>::iterator it;
    it = staff.begin();
    for (; it != staff.end(); it++)
    {
        it->basicSalary *= 1.10;
        it->allowance = it->teaching + it->transporation + it->electricity + it->overtime;
    }
    for (; *head != NULL; *head = (*head)->next)
    {
        (*head)->basicSalary *= 1.05;
    }
}

void display(Node *head, vector<Data> staff)
{
    cout << "\n:: Staff Record ::" << endl;
    for (head = head; head != NULL; head = head->next)
    {
        cout << "\n\nName: " << head->name << endl
             << "Role: " << head->role << endl
             << "Basic Salary: " << head->basicSalary << endl
             << "Allowance: " << head->allowance << endl
             << "Bonus: " << head->bonus;
    }
    // vector<Data>::iterator it;
    // it = staff.begin();
    // for (; it != staff.end(); it++)
    // {
    //     cout << "Name: " << it->name << endl
    //          << "Role: " << it->role << endl
    //          << "Basic Salary: " << it->basicSalary << endl
    //          << "Allowance: " << it->allowance << endl
    //          << "Bonus: " << it->bonus;
    // }
}

void addRecord(Node **head, Node **tail)
{

    Node *node, *dummy = *head;
    float inputSalary;

    // create new node
    node = new Node();
    cout << ":: New Staff Record With Salary ::" << endl;
    // input
    cout << "\nEnter name: ";
    getline(cin >> ws, node->name);
    cout << "Enter role: ";
    getline(cin >> ws, node->role);
    cout << "Enter basic salary: ";
    cin >> node->basicSalary;
    cout << "Enter teaching allowance: ";
    cin >> node->teaching;
    cout << "Enter transportation allowance: ";
    cin >> node->teaching;
    cout << "Enter electricity allowance: ";
    cin >> node->teaching;
    cout << "Enter overtime allowance: ";
    cin >> node->teaching;
    node->allowance = node->teaching + node->transporation + node->electricity + node->overtime;

    // insert node
    (*tail)->next = node;
    *tail = node;
}
int main()
{
    vector<Data> supportStaff;
    vector<Data> staff = {
        {"Hussein", "Lecturer", 10500, 700, 100, 80, 0, 0, 0},
        {"John", "Technician", 1800, 0, 100, 80, 600, 0, 0},
        {"Rajesh", "IT Executive", 3500, 0, 100, 80, 100, 0, 0},
        {"Danial", "Clerk", 1500, 0, 100, 80, 150, 0, 0},
        {"Ahmad", "Lecturer", 4800, 500, 100, 80, 0, 0, 0},
        {"Adrian", "IT Admin", 3700, 0, 100, 80, 300, 0, 0},
        {"Siti", "Lecturer", 7000, 500, 100, 80, 0, 0, 0}};
    Node *head = NULL, *tail = NULL;

    filter(&head, &tail, staff, supportStaff);
    addRecord(&head, &tail);
    update(&head, &tail, staff);
    display(head, staff);
    cout << "End of Program";

    return 0;
}