# Library Management System in C++

This is a simple **C++** program for managing a small library. It allows users to add, display, search, and delete books from the collection.

---
## Features

- Add new books with **ID**, **title**, and **author**.
- Display all registered books.
- Search for a book by title.
- Delete a book by title.
- Supports up to **50 books**.
---

## How to Use?
### Requirements

To run this program you need:

- A **C++ compiler** (e.g., g++, Clang, Visual Studio).
- Standard library support (`<iostream>`, `<string>`).

---

### Compilation

Open your terminal or command prompt and compile the code:

```bash
g++ main.cpp -o library
```

This will produce an executable named library.

### Running the Program

Run the executable:

```bash
./library
```

You’ll see a text menu like:
```bash
===== MENYJA E BIBLIOTEKES =====
1. Shto Liber
2. Shfaq Librat
3. Kerko Liber
4. Fshi Liber
5. Dil
Zgjedhja juaj:
```

Enter a number to select an option:

Option	Description
1. 	Add a new book
2.	Display all books
3.	Search a book by title
4.	Delete a book by title
5.	Exit the program

## Program Logic

- The program runs in a loop until the user selects option 5 (Exit).

- User input is handled using a switch statement.

- Book data is stored temporarily in an array.

- Each menu option calls a separate function.

## Limitations

- Data is not saved to a file (data is lost when the program ends).

- Book search and deletion require an exact title match.

- Maximum of 50 books can be stored.
