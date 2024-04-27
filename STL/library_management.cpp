#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Book structure
struct Book {
    string title;
    string author;
    bool available;

    Book(const string& t, const string& a) : title(t), author(a), available(true) {}
};

// Library class
class Library {
private:
    vector<Book> books;

public:
    // Add a book to the library
    void addBook(const string& title, const string& author) {
        books.push_back(Book(title, author));
    }

    // Borrow a book
    void borrowBook(const string& title) {
        auto it = find_if(books.begin(), books.end(), [&title](const Book& b) {
            return b.title == title && b.available;
        });

        if (it != books.end()) {
            it->available = false;
            cout << "You have successfully borrowed the book \"" << title << "\"" << endl;
        } else {
            cout << "Sorry, the book \"" << title << "\" is either not available or does not exist in the library." << endl;
        }
    }

    // Return a book
    void returnBook(const string& title) {
        auto it = find_if(books.begin(), books.end(), [&title](const Book& b) {
            return b.title == title && !b.available;
        });

        if (it != books.end()) {
            it->available = true;
            cout << "You have successfully returned the book \"" << title << "\"" << endl;
        } else {
            cout << "You did not borrow the book \"" << title << "\" from this library." << endl;
        }
    }

    // Display all available books
    void displayBooks() {
        cout << "Available Books:" << endl;
        for (const auto& book : books) {
            if (book.available) {
                cout << "Title: " << book.title << ", Author: " << book.author << endl;
            }
        }
    }
};

int main() {
    Library library;
    char choice;

    do {
        cout << "===== Library Management System =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Borrow Book" << endl;
        cout << "3. Return Book" << endl;
        cout << "4. Display Available Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1': {
                string title, author;
                cout << "Enter book title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter author name: ";
                getline(cin, author);
                library.addBook(title, author);
                break;
            }
            case '2': {
                string title;
                cout << "Enter title of the book you want to borrow: ";
                cin.ignore();
                getline(cin, title);
                library.borrowBook(title);
                break;
            }
            case '3': {
                string title;
                cout << "Enter title of the book you want to return: ";
                cin.ignore();
                getline(cin, title);
                library.returnBook(title);
                break;
            }
            case '4':
                library.displayBooks();
                break;
            case '5':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }
    } while (choice != '5');

    return 0;
}
