/*************************************************************
SUBJECT: CSEB2213/ CSEB214/ CSNB244 PROGRAMMING II/ PROGRAMMING II WITH C++
DATE: 15/10/2022
DESCRIPTION:
NAME:
STUDENTID:
QUESTION:
*************************************************************/
#include <iostream>
#define size 5

using namespace std;

struct MyStruct
{
    string name;
    float price;
    float weight;
};
void displayMenu();
void getWeight(MyStruct *);
void printReceipt(MyStruct *);

int main()
{
    MyStruct *pointer;
    MyStruct fruit[size];

    // ASSIGN address to pointer
    pointer = fruit;

    // INITIALIZE fruit name
    fruit[0].name = "Sunkist Orange";
    fruit[1].name = "Strawberry";
    fruit[2].name = "Papaya";
    fruit[3].name = "Star fruit";
    fruit[4].name = "Kiwi";

    // INITIALIZE fruit price
    fruit[0].price = 2;
    fruit[1].price = 22;
    fruit[2].price = 5;
    fruit[3].price = 6;
    fruit[4].price = 10;

    // INITIALIZE fruit weight
    for (int i = 0; i < size; i++)
        fruit[i].weight = 0;

    // CALL function
    displayMenu();
    getWeight(pointer);
    printReceipt(pointer);

    return 0;
}
void displayMenu()
{
    cout << "Welcome to Only Fresh Fruit Shop\n"
         << endl
         << "Today's fresh fruit <Price per kg>" << endl
         << "0 - Sunkist Orange RM2" << endl
         << "1 - Strawberry RM22" << endl
         << "2 - Papaya RM5" << endl
         << "3 - Star fruit RM6" << endl
         << "4 - Kiwi RM10" << endl;
}
void getWeight(MyStruct *pointer)
{
    int input = 0;
    while (input != -1)
    {
        cout << "\nEnter fruit code <-1 to stop>: ";
        cin >> input;

        // IN BOUND
        if (input >= 0 && input <= 4)
        {
            cout << (pointer[input]).name << endl;

            float weight = 0;
            cout << "Enter weight<Kg>: ";
            cin >> weight;

            // ERROR CHECKING
            if ((weight + pointer[input].weight) <= 0)
                cout << "Invalid input!" << endl;
            else
                pointer[input].weight += weight;
        }
        // EXIT
        else if (input == -1)
            break;
        // OUT OF BOUND
        else
            cout << "Invalid input!" << endl;
    }
}
void printReceipt(MyStruct *pointer)
{
    float sum = 0;
    cout << "------------------" << endl
         << "Receipt" << endl;
    for (int i = 0; i < size; i++)
    {
        if (pointer[i].weight != 0)
            cout << pointer[i].name << " RM " << (pointer[i].weight * pointer[i].price) << endl;
        sum += (pointer[i].weight * pointer[i].price);
    }
    cout << "TOTAL = RM " << sum << endl
         << "------------------" << endl;
}
