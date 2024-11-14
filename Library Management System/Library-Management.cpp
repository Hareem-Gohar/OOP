#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Books{
    private:
    string title;
    string author;
    bool isAvailable;
    public:
    Books(string title, string author){
        this->title = title;
        this->author = author;
        isAvailable = true;
    }
    //Checkout Method
    bool checkout(){
        if(isAvailable){
            isAvailable = false;
            return true;
        }
        return false;
    }
    void returnBook(){
       isAvailable = true;
    }
    string  getTitle(){
        return title;
    }
    string  getAuthor(){
        return author;
    }
    
    bool isBookAvailable(){
        return isAvailable;
    }
    
    
};
class Library{
    private:
    //dynamic array
    vector<Books> books;
    public:
    
    void addBook(string& title, string& author){
        books.emplace_back(title, author);
        cout << "Book added: " << title << " by " << author << endl;
    }
    
    void displayAvailableBooks() {
        cout << "Available books:\n";
        for ( auto& book : books) {
            if (book.isBookAvailable()) {
                cout << "- \"" << book.getTitle() << "\" by " << book.getAuthor() << endl;
            }
        }
         cout << "Sorry, There are no books"<< endl;
    }
bool borrowBook(string& title){
        for(auto& book : books){
            if(book.getTitle() == title && book.isBookAvailable()){
                book.checkout();
                cout << "You have borrowed \"" << title << "\" successfully." << endl;
                return true;
            }
        }
        cout << "Sorry, \"" << title << "\" is not available or doesn't exist." << endl;
        return false;
    }
    bool returnBook(string& title){
           for(auto& book : books){
                if(book.getTitle() == title && !book.isBookAvailable()){
                    book.returnBook();
                    cout << "\"" << title << "\" has been returned successfully." << endl;
                return true;
                }
           }
               cout << "Sorry, \"" << title << "\" is either not borrowed or doesn't exist." << endl;
        return false;
    }
};
int main(){
    Library Lib;
    int choice;
    do{
        cout << "\nLibrary Menu:\n";
        cout << "1. Add a new book\n";
        cout << "2. Display available books\n";
        cout << "3. Borrow a book\n";
        cout << "4. Return a book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice){
            case 1: {
                string title, author;
                cout<<"Enter Book Title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                Lib.addBook(title, author);
                break;
            }
            case 2: {
              Lib.displayAvailableBooks();
                break;
            }
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
            default:
                cout << "Invalid choice. Please try again." << endl;

        }
    }
    while(choice != 5);
    return 0;
}