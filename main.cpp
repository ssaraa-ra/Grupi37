#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

// Struktura e librit
struct Book {
    int id;
    string title;
    string author;
};

Book books[MAX];
int countBooks = 0;

// Funksioni per te shtuar libra
void addBook() {
    if (countBooks >= MAX) {
        cout << "Biblioteka eshte e mbushur!.\n";
        return;
    }

    cout << "Shkruaj ID: ";
    cin >> books[countBooks].id;
    cin.ignore();

    cout << "Shkruaj titullin e librit: ";
    getline(cin, books[countBooks].title);

    cout << "Shkruaj autorin: ";
    getline(cin, books[countBooks].author);

    countBooks++;
    cout << "Libri u shtua me sukses!\n";
}

// Funksioni per te shfaq nje liber
void displayBooks() {
    if (countBooks == 0) {
        cout << "Nuk ka libra per te shfaqur.\n";
        return;
    }

    cout << "\n--- Lista e Librave ---\n";
    for (int i = 0; i < countBooks; i++) {
        cout << "ID: " << books[i].id
             << ", Titulli: " << books[i].title
             << ", Autori: " << books[i].author << endl;
    }
}

// Funksioni per me kerku libra
void searchBook() {
    string searchTitle;
    cout << "Shkruaj titullin e librit qe deshironi ta kerkoni: ";
    getline(cin, searchTitle);

    for (int i = 0; i < countBooks; i++) {
        if (books[i].title == searchTitle) {
            cout << "Libri u gjet!\n";
            cout << "ID: " << books[i].id
                 << ", Titulli: " << books[i].title
                 << ", Autori: " << books[i].author << endl;
            return;
        }
    }
    cout << "Libri nuk u gjet.\n";
}

// Funksioni per me fshi librin
void deleteBook() {
    string deleteTitle;
    cout << "Shkruaj titullin e librit qe deshironi ta fshini: ";
    getline(cin, deleteTitle);

    for (int i = 0; i < countBooks; i++) {
        if (books[i].title == deleteTitle) {
            for (int j = i; j < countBooks - 1; j++) {
                books[j] = books[j + 1];
            }
            countBooks--;
            cout << "Libri u fshi me sukses.\n";
            return;
        }
    }
    cout << "Libri nuk u gjet.\n"; //kur nuk ekziston
}

int main() {
    int choice;

    do {
        cout << "\n===== MENYJA E BIBLIOTEKES =====\n";
        cout << "1. Shto Liber\n";
        cout << "2. Shfaq Librat\n";
        cout << "3. Kerko Liber\n";
        cout << "4. Fshi Liber\n";
        cout << "5. Dil\n";
        cout << "Zgjedhja juaj: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            deleteBook();
            break;
        case 5:
            cout << "Programi u mbyll.\n";
            break;
        default:
            cout << "Zgjedhje e pavlefshme.\n";
        }
    } while (choice != 5);

    return 0;
}  
