#include <iostream>
#include <string>
using namespace std;

const int MAX_LIBRA = 50;

// Strukturë për librat
struct Liber {
    int id;
    string titull;
    string autor;
};

Liber libra[MAX_LIBRA];
int nrLibra = 0;

// Funksioni për shtimin e një libri
void shtoLiber() {
    if (nrLibra >= MAX_LIBRA) {
        cout << "Biblioteka është plot.\n";
        return;
    }

    cout << "Shkruaj ID e librit: ";
    while (!(cin >> libra[nrLibra].id)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "ID e pavlefshme. Shkruaj një numer: ";
    }
    cin.ignore();

    cout << "Shkruaj titullin e librit: ";
    getline(cin, libra[nrLibra].titull);

    cout << "Shkruaj autorin e librit: ";
    getline(cin, libra[nrLibra].autor);

    nrLibra++;
    cout << "Libri u shtua me sukses!\n";
}

// Funksioni për shfaqjen e librave
void shfaqLibra() {
    if (nrLibra == 0) {
        cout << "Nuk ka libra për të shfaqur.\n";
        return;
    }

    cout << "\n--- Lista e Librave ---\n";
    for (int i = 0; i < nrLibra; i++) {
        cout << "ID: " << libra[i].id
             << ", Titulli: " << libra[i].titull
             << ", Autori: " << libra[i].autor << endl;
    }
}

// Funksioni për kërkimin e librit sipas ID-së
void kerkoLiber() {
    if (nrLibra == 0) {
        cout << "Nuk ka libra për të kërkuar.\n";
        return;
    }

    int idKerko;
    cout << "Shkruaj ID e librit për të kërkuar: ";
    cin >> idKerko;
    cin.ignore();

    for (int i = 0; i < nrLibra; i++) {
        if (libra[i].id == idKerko) {
            cout << "Libri u gjet!\n";
            cout << "ID: " << libra[i].id
                 << ", Titulli: " << libra[i].titull
                 << ", Autori: " << libra[i].autor << endl;
            return;
        }
    }
    cout << "Libri me ID " << idKerko << " nuk u gjet.\n";
}

// Funksioni kryesor
int main() {
    int zgjedhja;

    do {
        cout << "\n===== MENYJA E BIBLIOTEKËS =====\n";
        cout << "1. Shto Liber\n";
        cout << "2. Shfaq Librat\n";
        cout << "3. Kërko Liber sipas ID\n";
        cout << "4. Dil\n";
        cout << "Zgjedhja juaj: ";
        cin >> zgjedhja;
        cin.ignore();

        switch (zgjedhja) {
            case 1:
                shtoLiber();
                break;
            case 2:
                shfaqLibra();
                break;
            case 3:
                kerkoLiber();
                break;
            case 4:
                cout << "Programi u mbyll.\n";
                break;
            default:
                cout << "Zgjedhje e pavlefshme. Provoni përsëri.\n";
        }
    } while (zgjedhja != 4);

    return 0;
}
