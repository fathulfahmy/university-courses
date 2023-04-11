#include <iostream>
#include <vector>
using namespace std;
struct Book
{
public:
    string bookname;
    int bookID;
    float price;
    int bookQty;

    void registerBook()
    {
        cout << "\nEnter book title: ";
        getline(cin >> ws, bookname);
        cout << "Enter book ID (digits only): ";
        cin >> bookID;
        cout << "Enter price: RM";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> bookQty;
    };
    void displayBook(vector<Book> record)
    {
        int choice = -1;
        do
        {
            cout << "\n0. Exit" << endl
                 << "1. Search book by book ID" << endl
                 << "2. Display all book records" << endl
                 << "Enter selection: ";
            cin >> choice;

            if (choice == 1)
            {
                // 2. display book record by ID
                // request ID
                int inputID;
                cout << "\nEnter book ID: ";
                cin >> inputID;

                // linear search
                int i = 0;

                vector<Book>::iterator it = record.begin();
                for (; it < record.end(); it++)
                {
                    if ((*it).bookID == inputID)
                    {
                        cout << "\nTitle: " << (*it).bookname << endl
                             << "Book ID: " << (*it).bookID << endl
                             << "Price : " << (*it).price << endl
                             << "Quantity: " << (*it).bookQty;
                    }
                }
            }
            if (choice == 2)
            {
                // 3. display all records
                int i = 0;
                vector<Book>::iterator it = record.begin();
                for (; it < record.end(); it++)
                {
                    cout << "\nTitle: " << (*it).bookname << endl
                         << "Book ID: " << (*it).bookID << endl
                         << "Price : " << (*it).price << endl
                         << "Quantity: " << (*it).bookQty << endl;
                }
            }

        } while (choice != 0);
    };
};
int main()
{
    Book book;
    vector<Book> record;

    // 1. add books
    char addMore = 'n';
    do
    {
        // assign data
        book.registerBook();
        // push data to vector
        record.push_back(book);
        // request continue affirmation
        cout << "Do you want to add more books? (y for yes)";
        cin >> addMore;

    } while (addMore == 'y');
    book.displayBook(record);

    cout << "\nThank you. come again!";
    return 0;
}