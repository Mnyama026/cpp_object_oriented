#include <iostream>
#include <string>
using namespace std;

// Book class
class Book {
private:
    string title;
    string author;
    int copies;

public:
    // Input book details
    void inputDetails() {
        cout << "=== Library Book Management System ===" << endl;

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Number of Copies: ";
        cin >> copies;
    }

    // Borrow a book
    void borrowBook() {
        if (copies > 0) {
            copies = copies - 1;
            cout << "\nBook borrowed successfully!" << endl;
        } else {
            cout << "\nNo copies available!" << endl;
        }
    }

    // Display book details
    void displayDetails() {
        cout << "\n==========================================" << endl;
        cout << "             BOOK DETAILS                 " << endl;
        cout << "==========================================" << endl;
        cout << "Book Title         : " << title << endl;
        cout << "Author Name        : " << author << endl;
        cout << "Copies Available   : " << copies << endl;
        cout << "==========================================" << endl;
    }
};

// Main function
int main() {
    Book book1;

    book1.inputDetails();
    book1.borrowBook();
    book1.displayDetails();

    return 0;
}
