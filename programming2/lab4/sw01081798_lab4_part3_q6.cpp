/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 13/10/2022
DESCRIPTION:
1. ask the user the number of students (n).
2. the program will repeat until n
3. Then, the program will reprint all the student's GPAs.
4. The program also calculates and prints the total and average of the GPA.
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: Part 4 Q6
*************************************************************/
#include <iostream>
#include <new>

using namespace std;
int main()
{
    int size = 0;
    float sum = 0;
    cout << "Enter number of students: ";
    cin >> size;

    float *ptrFloat = new float[size];
    cout << "\nEnter GPA of students." << endl;
    // INPUT
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> *(ptrFloat + i);
        sum += *(ptrFloat + i);
        // cin >> ptrFloat[i];
        // sum += ptrFloat[i];
    }
    cout << "\nDisplaying GPA of students." << endl;
    // OUTPUT
    for (int i = 0; i < size; i++)
        cout
            << "Student " << i + 1 << ": " << ptrFloat[i] << endl;

    cout << "\nThe total GPA for " << size << " students are " << sum << endl;
    cout << "The average of the GPA  are " << sum / size << endl;

    // DELETE
    delete[] ptrFloat;

    return 0;
}

/* 
Enter number of students: 4

Enter GPA of students.
Student 1: 3.84
Student 2: 2.75
Student 3: 1.98
Student 4: 2.31

Displaying GPA of students.
Student 1: 3.84
Student 2: 2.75
Student 3: 1.98
Student 4: 2.31

The total GPA for 4 students are 10.88
The average of the GPA  are 2.72
 */