#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    // Declare variables; Step 1
    ifstream inFile;
    ofstream outFile;

    double salary, increment;
    double average;
    string firstName;
    string lastName;

    inFile.open("TextFile1.txt"); // Step 2
    outFile.open("testavg.out");  // Step 3

    outFile << fixed << showpoint; // Step 4
    outFile << setprecision(2);    // Step 4

    cout << "Processing data" << endl;
    inFile >> firstName >> lastName;                                     // Step 5
    outFile << "Student name: " << firstName << " " << lastName << endl; // Step 6

    inFile >> salary >> increment;                                                   // Step 7
    outFile << "Test scores: " << setw(6) << salary << setw(6) << increment << endl; // Step 8

    // Step 10
    inFile.close();  // Step 11
    outFile.close(); // Step 11
    return 0;
}