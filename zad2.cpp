#include <iostream>
#include <string>
using namespace std;

int main() {
    int godina;
    string ime;

    cout << "Unesi godinu rodenja: ";
    cin >> godina;

    cin.ignore();

    cout << "Unesi ime i prezime: ";
    getline(cin, ime);

    cout << "Inicijali: ";

    for (int i = 0; i < ime.length(); i++) {
        if (i == 0 || ime[i - 1] == ' ') {
            cout << ime[i] << ".";
        }
    }

    int broj = 0;

    for (char c : ime) {
        if (c != ' ') {
            broj++;
        }
    }

    cout << "\nBroj znakova: " << broj << endl;
    cout << "Godina koju navrsava: " << 2026 - godina << endl;

    return 0;
}