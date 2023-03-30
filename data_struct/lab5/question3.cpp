#include <iostream>
using namespace std;

// Question (2)
// 2. Write a function named insert().This function should be able to copy data from all arrays and store it into a singly linked list queue

const int SIZE = 6;

struct Data
{
    string name;
    float salary;
    int yearService;
    Data *next;
};

// insert node
void insert(Data **tail, Data **head, string name[], float salary[], int yearService[])
{
    Data *n;
    for (int i = 0; i < SIZE; i++)
    {
        n = new Data;
        n->name = name[i];
        n->salary = salary[i];
        n->yearService = yearService[i];
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
}

// Question (3)
// 3. Write a function named update().This function should be able to reposition requested data as 1st record in queue based on input name from user.
// Refer to sample output given below.
void update(Data **tail, Data **head)
{
    Data *p, *p2;
    p = p2 = *head;

    string inputName;
    char inputProceed;
    int count = 1;

    cout << "\nEnter name to be updated as 1st record: ";
    cin >> inputName;

    // search match name
    while (p->next->name != inputName)
    {
        p = p->next;
        count++;
    }

    cout << "\nYou need to move first " << count << " record(s) to the end.";
    cout << "\nPress Y to proceed: ";
    cin >> inputProceed;
    if (inputProceed == 'Y')
    {
        p2 = p->next;
        p->next = p->next->next;
        p2->next = *head;
        *head = p2;
    }
    else
    {
        cout << "No update recorded";
    }
}

// Question (4)
// 4. Write a function named display().This function should be able to display the updated details of employees in the company.
void display(Data *head)
{
    cout << "\n--------------------------------------" << endl;
    for (; head != NULL; head = head->next)
    {
        cout << "\nStaff Name: " << head->name << ", Salary: " << head->salary << ", Year of Service:" << head->yearService;
    }
}

int main()
{
    string name[] = {"Ahmad", "Siew Mun", "Ravi", "John", "Mohammad", "Jennifer"};
    float salary[] = {12000.0, 4800.0, 8000.0, 5500.0, 14000.0, 11000.0};
    int service[] = {10, 4, 9, 7, 6, 5};

    // Question (1)
    // 1. Complete the main().This function should be able to invoke all functions in the program.

    Data *tail = NULL, *head = NULL;
    insert(&tail, &head, name, salary, service);

    cout << "\n# Menu : Current Record # " << endl;
    display(head);

    cout << "\n\n# Menu : Update Record # " << endl;
    update(&tail, &head);

    cout << "\n# Menu : Updated Record # " << endl;
    display(head);
    cout << "\nEnd of program";
    return 0;
}
