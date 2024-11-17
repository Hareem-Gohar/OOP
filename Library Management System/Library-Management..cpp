#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Books {
private:
    string title;
    string author;
    bool isAvailable;

public:
    Books(string title, string author) : title(title), author(author), isAvailable(true) {}

    bool checkout() {
        if (isAvailable) {
            isAvailable = false;
            return true;
        }
        return false;
    }

    void returnBook() {
        isAvailable = true;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    bool isBookAvailable() const {
        return isAvailable;
    }
};

class Library {
private:
    vector<Books> books;

public:
    void addBook(string &title, string &author) {
        books.emplace_back(title, author);
        cout << "Book added: " << title << " by " << author << endl;
    }

    void displayAvailableBooks() const {
    if (books.empty()) {
        cout << "Sorry, there are no books in the library." << endl;
        return;
    }

    bool found = false;
    cout << "Available books:\n";
    for (const auto &book : books) {
        if (book.isBookAvailable()) {
            cout << "- \"" << book.getTitle() << "\" by " << book.getAuthor() << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Sorry, there are no available books at the moment." << endl;
    }
}


    bool borrowBook(string &title) {
        for (auto &book : books) {
            if (book.getTitle() == title && book.isBookAvailable()) {
                book.checkout();
                cout << "You have borrowed \"" << title << "\" successfully." << endl;
                return true;
            }
        }
        cout << "Sorry, \"" << title << "\" is not available or doesn't exist." << endl;
        return false;
    }

    bool returnBook(string &title) {
        for (auto &book : books) {
            if (book.getTitle() == title && !book.isBookAvailable()) {
                book.returnBook();
                cout << "\"" << title << "\" has been returned successfully." << endl;
                return true;
            }
        }
        cout << "Sorry, \"" << title << "\" is either not borrowed or doesn't exist." << endl;
        return false;
    }
};

int main() {
    Library Lib;
    int choice;
    do {
        cout << "\nLibrary Menu:\n";
        cout << "1. Add a new book\n";
        cout << "2. Display available books\n";
        cout << "3. Borrow a book\n";
        cout << "4. Return a book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string title, author;
            cout << "Enter Book Title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            Lib.addBook(title, author);
            break;
        }
        case 2:
            Lib.displayAvailableBooks();
            break;

        case 3: {
            string title;
            cout << "Enter the title of the book to borrow: ";
            cin.ignore();
            getline(cin, title);
            Lib.borrowBook(title);
            break;
        }
        case 4: {
            string title;
            cout << "Enter the title of the book to return: ";
            cin.ignore();
            getline(cin, title);
            Lib.returnBook(title);
            break;
        }
        case 5:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
