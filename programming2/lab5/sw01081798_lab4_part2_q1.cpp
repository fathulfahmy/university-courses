/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 27/10/2022
DESCRIPTION:
struct: Student
function: readData, calcQuiz, printStudent
main: call all three functions and display the average quiz mark.
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: Lab 5 Part 2
*************************************************************/
#include <iostream>
using namespace std;

struct Student
{
    char name[30];
    float quiz1Mark;
    float quiz2Mark;
};

// function prototype
void readData(Student &);
float calcQuiz(Student);
void printStudent(Student);

int main()
{
    // DECLARE student1 variable with Student struct
    Student student1;
    // DECLARE average quiz mark
    float average = 0;

    // INPUT name, quiz1 mark, quiz2 mark
    readData(student1);
    // COMPUTE average quiz mark
    average = calcQuiz(student1);
    // OUTPUT name, quiz1 mark, quiz2 mark
    printStudent(student1);
    // OUTPUT average
    cout << "Average Quiz Mark: " << average;

    return 0;
}

void readData(Student &student1)
{
    // INPUT name
    cout << "Enter Student Name: ";
    cin.get(student1.name, 30);
    // INPUT quiz 1 mark
    cout << "Enter Quiz 1 mark: ";
    cin >> student1.quiz1Mark;
    // INPUT quiz 2 mark
    cout << "Enter Quiz 2 mark: ";
    cin >> student1.quiz2Mark;
}

float calcQuiz(Student student1)
{
    float average;
    // COMPUTE average
    average += ((student1.quiz1Mark + student1.quiz2Mark) / 2);
    // RETURN average
    return average;
}

void printStudent(Student student1)
{
    cout << "\nDisplaying Information." << endl
         << "Student Name: " << student1.name << endl
         << "Quiz 1 Mark: " << student1.quiz1Mark << endl
         << "Quiz 2 Mark: " << student1.quiz2Mark << endl;
}
