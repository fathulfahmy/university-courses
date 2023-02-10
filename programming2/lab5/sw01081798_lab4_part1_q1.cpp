/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 20/10/2022
DESCRIPTION:
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION:
*************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

#define nameSize 10
// DECLARE struct
struct Student
{
    char name[nameSize];
    int studentID;
    float test1_mark;
    float test2_mark;
};
int main()
{
    // INPUT size
    int arrSize = 0;
    cout << "Enter the number of students: ";
    cin >> arrSize;

    // ASSIGN struct array
    Student student[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        cout << endl
             << "Input for Student Result Record " << i + 1 << endl;
        // INPUT name
        cout << "Enter Name: ";
        cin.ignore(1);
        cin.getline(student[i].name, nameSize);
        // INPUT student ID
        cout << "Enter ID no: ";
        cin >> student[i].studentID;
        // INPUT test mark 1
        cout << "Enter test 1 mark: ";
        cin >> student[i].test1_mark;
        // INPUT test mark 2
        cout << "Enter test 2 mark: ";
        cin >> student[i].test2_mark;
    }

    // OUTPUT table
    cout << endl
         << "Display Student Result Record" << endl;
    // COL id
    cout << resetiosflags(ios::adjustfield);
    cout << setiosflags(ios::right);
    cout << setw(10) << "ID\t";

    // COL name
    cout << resetiosflags(ios::adjustfield);
    cout << setiosflags(ios::left);
    cout << setw(10) << "Name\t";
    // COL avg test mark
    cout << resetiosflags(ios::adjustfield);
    cout << setiosflags(ios::internal);
    cout << setw(8) << "Average Test Mark" << endl;

    float sumAverage = 0;
    for (int i = 0; i < arrSize; i++)
    {
        // COMPUTE average and ADD total average
        float average = ((student[i].test1_mark + student[i].test2_mark) / 2);
        sumAverage += average;
        // OUTPUT student id
        cout << resetiosflags(ios::adjustfield);
        cout << setiosflags(ios::right);
        cout << setw(10) << student[i].studentID << "\t";

        // OUTPUT name
        cout << resetiosflags(ios::adjustfield);
        cout << setiosflags(ios::left);
        cout << setw(10) << student[i].name << "\t";

        // OUTPUT avg test mark
        cout << resetiosflags(ios::adjustfield);
        cout << setiosflags(ios::internal);
        cout << setw(8) << fixed << setprecision(2) << (average) << endl;
    }

    cout << "Average Test Mark = " << (sumAverage / arrSize);

    return 0;
}

/*
Enter the number of students: 2

Input for Student Result Record 1
Enter Name: fathul
Enter ID no: 10798
Enter test 1 mark: 90
Enter test 2 mark: 75

Input for Student Result Record 2
Enter Name: haziq
Enter ID no: 10796
Enter test 1 mark: 90.25
Enter test 2 mark: 85.5

Display Student Result Record
       ID       Name         Average Test Mark
     10798      fathul             82.50      
     10796      haziq              87.88      
Average Test Mark = 85.19
 */