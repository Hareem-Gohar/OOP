# Library Management System

## Problem Statement

Create a program that simulates a simple library management system. The program should manage books and allow users to borrow and return them.

### Specifications:

1. **Book Class:**
   - Attributes for the title, author, and availability status (e.g., true for available, false for checked out).
   - A constructor to initialize the book with its title and author. By default, the book should be available.
   - A method to check out the book (mark it as unavailable if it’s not already checked out).
   - A method to return the book (mark it as available if it’s currently checked out).

2. **Library Class:**
   - Stores a collection of books (using an array or vector of Book objects).
   - Has methods to add books, display all available books, check out a book, and return a book.
   - Allows users to enter the title of a book they wish to check out or return and searches for that book in the library.

3. **Main Program:**
   - Displays a menu allowing the user to:
     - Add a new book to the library.
     - Display all available books.
     - Borrow a book.
     - Return a book.
     - Exit the program.

## Functions Used

### Book Class:

1. **Constructor**: 
   - `Books(string title, string author)` initializes the book with its title and author. By default, the book is set to available (`isAvailable = true`).

2. **checkout()**: 
   - Checks out the book by setting its availability to `false`. Returns `true` if the checkout is successful, `false` if the book is already checked out.

3. **returnBook()**: 
   - Marks the book as available by setting its availability to `true`.

4. **getTitle()**: 
   - Returns the title of the book.

5. **getAuthor()**: 
   - Returns the author of the book.

6. **isBookAvailable()**: 
   - Checks if the book is available or not.

### Library Class:

1. **addBook()**: 
   - Adds a new book to the library.

2. **displayAvailableBooks()**: 
   - Displays all the available books in the library.

3. **borrowBook()**: 
   - Allows the user to borrow a book by providing the title. If the book is available, it is checked out.

4. **returnBook()**: 
   - Allows the user to return a borrowed book by providing the title.

### Main Program:

1. **Menu System**:
   - Displays the options for adding books, borrowing, returning, and displaying available books.
   - Takes user input to perform actions like adding books, borrowing, and returning them.

## What I Learn


1. **Object-Oriented Programming (OOP) Concepts**:
   - Classes and objects.
   - Constructors and member functions.
   - Accessing and modifying object attributes.
   - Encapsulation and method calls.

2. **Data Management**:
   - Storing a collection of objects (books) using a dynamic array or vector.
   - Searching for books within a collection using loops.

3. **User Interaction**:
   - Displaying menus to the user.
   - Receiving and processing user input.
   - Implementing a simple interface for interacting with the system.

## Concepts Implemented

- **Encapsulation**: The `Books` class encapsulates the attributes of a book (title, author, and availability) and provides methods to interact with these attributes, keeping the internal workings hidden from the outside.
  
- **Array (Vector)**: The `Library` class uses a dynamic array (vector) to store the collection of books, allowing easy addition and retrieval of books.
  
- **Searching**: The program searches for books by their title when borrowing or returning them.
  
- **Conditionals**: Using conditionals like `if-else` to check book availability and ensure that books can only be borrowed or returned under the correct conditions.
