#include <iostream>
using namespace std;

inline double add(double a, double b) {
    return a + b;
}

inline double subtract(double a, double b) {
    return a - b;
}

inline double multiply(double a, double b) {
    return a * b;
}

inline double divide(double a, double b) {
    return a / b;
}

int main() {
    double (*operations[])(double, double) = {
        add,
        subtract,
        multiply,
        divide
    };

    double a, b;
    int operation;

    cout << "Unesite dva broja: ";
    cin >> a >> b;

    cout << "Operacija (0=zbrajanje, 1=oduzimanje, 2=mnozenje, 3=dijeljenje): ";
    cin >> operation;

    if (operation < 0 || operation > 3) {
        cout << "Neispravan broj operacije." << endl;
    } else if (operation == 3 && b == 0) {
        cout << "Dijeljenje s nulom nije dozvoljeno" << endl;
    } else {
        cout << "Rezultat: " << operations[operation](a, b) << endl;
    }
}