#include <iostream>
#include <string>
using namespace std;

struct Student {
    string ime;
    string jmbag;
    int godina;
    int ects;
    double prosjek;
};

void filter_students(
    Student s[],
    int n,
    void (*action)(Student&),
    bool (*cond)(const Student&)
) {
    for (int i = 0; i < n; i++) {
        if (cond(s[i])) {
            action(s[i]);
        }
    }
}

void print_student(Student& s) {
    cout << s.ime
         << ", JMBAG: " << s.jmbag
         << ", godina: " << s.godina
         << ", ECTS: " << s.ects
         << ", prosjek: " << s.prosjek
         << endl;
}

void increase_year(Student& s) {
    s.godina++;
}

int main() {
    Student studenti[] = {
        {"Ana Anic", "001", 1, 24, 4.2},
        {"Marko Maric", "002", 1, 0, 3.8},
        {"Iva Ivic", "003", 2, 48, 3.4},
        {"Luka Lukic", "004", 2, 55, 4.6},
        {"Petra Petric", "005", 3, 45, 3.7}
    };

    int n = 5;

    cout << "Studenti prve godine s barem jednim polozenim ispitom:\n";
    filter_students(
        studenti,
        n,
        print_student,
        [](const Student& s) {
            return s.godina == 1 && s.ects > 0;
        }
    );

    cout << "\nStudenti s prosjekom vecim od 3.5:\n";
    filter_students(
        studenti,
        n,
        print_student,
        [](const Student& s) {
            return s.prosjek > 3.5;
        }
    );

    filter_students(
        studenti,
        n,
        increase_year,
        [](const Student& s) {
            return s.ects >= 45;
        }
    );

    cout << "\nNakon povecanja godine studija:\n";
    for (int i = 0; i < n; i++) {
        print_student(studenti[i]);
    }
}