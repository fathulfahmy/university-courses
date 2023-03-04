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

    // add data to record
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
    // display data from record
    void displayBook(vector<Book> record)
    {
        int choice = -1;
        do
        {
            // 1. display menu
            cout << "\n0. Exit" << endl
                 << "1. Search book by book ID" << endl
                 << "2. Display all book records" << endl
                 << "Enter selection: ";
            cin >> choice;

            vector<Book>::iterator it;
            switch (choice)
            {
            case 0:
                break;
            case 1:
                // 2. display book record by ID
                // request ID
                int inputID;
                cout << "\nEnter book ID: ";
                cin >> inputID;

                // linear search
                for (it = record.begin(); it < record.end(); it++)
                {
                    if ((*it).bookID == inputID)
                    {
                        cout << "\nTitle: " << (*it).bookname << endl
                             << "Book ID: " << (*it).bookID << endl
                             << "Price : " << (*it).price << endl
                             << "Quantity: " << (*it).bookQty << endl;
                    }
                }
                break;
            case 2:
                // 3. display all records
                for (it = record.begin(); it < record.end(); it++)
                {
                    cout << "\nTitle: " << (*it).bookname << endl
                         << "Book ID: " << (*it).bookID << endl
                         << "Price : " << (*it).price << endl
                         << "Quantity: " << (*it).bookQty << endl;
                }
                break;
            default:
                cout << "Invalid input!";
            }

        } while (choice != 0);
    };
    // delete data from record
    void deleteBook(vector<Book> *record)
    {
        // request ID
        int inputID;
        cout << "\nEnter book ID: ";
        cin >> inputID;

        // linear search
        vector<Book>::iterator it = record->begin();
        for (; it < record->end(); it++)
        {
            if ((*it).bookID == inputID)
            {
                record->erase(it);
            }
        }
    }
    // update data in record
    void updateBook(vector<Book> *record)
    {
        // request ID
        int inputID;
        cout << "\nEnter book ID: ";
        cin >> inputID;

        vector<Book>::iterator it;
        // linear search
        for (it = record.begin(); it < record.end(); it++)
        {
            if ((*it).bookID == inputID)
            {
                // edit title
                // edit ID
                // edit price
                // edit quantity
            }
        }
    }
};
int main()
{
    Book book;
    vector<Book> record;

    // 1. add book data
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

    int choice = -1;
    do
    {
        // 1. display menu
        cout << "\n0. Exit" << endl
             << "1. Display books" << endl
             << "2. Delete books" << endl
             << "3. Update books" << endl
             << "Enter selection: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "\nThank you. come again!";
            break;
        case 1:
            book.displayBook(record);
            break;
            // 3. delete book by ID
        case 2:
            book.deleteBook(&record);
            break;
        // 4. udpate book by ID
        case 3:
            book.updateBook(&record);
            break;
        default:
            break;
        }

    } while (choice != 0);

    return 0;
}