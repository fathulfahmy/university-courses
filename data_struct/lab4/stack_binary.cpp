#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> bin;

    // SET number, digit
    int number = -1, digit;
    // READ number
    while (number <= 0)
    {
        cout << "Enter a decimal number [larger than 0] : ";
        cin >> number;
        if (number <= 0)
            cout << "Error: The number must be larger than 0. " << endl;
    }
    cout << "Decimal number: " << number << endl;
    // WHILE (number > 0)
    while (number > 0)
    {
        digit = number % 2;
        bin.push(digit);
        number = number / 2;
    }
    cout << "Binary number: ";
    while (!bin.empty())
    {
        cout << bin.top();
        bin.pop();
    }
    cout << "\nThank you";
    return 0;
}