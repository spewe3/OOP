#include <iostream>
#include <cassert>


class IntStack{
private:
    int* niz;
    int broj;
    int kapacitet;

public:
    IntStack(int pocetni = 2) {
        kapacitet = pocetni;
        broj = 0;
        niz = new int[kapacitet];
    }

    ~ IntStack() {
        delete[] niz;
    }

    IntStack(const IntStack& s) {
        broj = s.broj;
        kapacitet = s.kapacitet;

        niz = new int[kapacitet];

        for (int i = 0; i < broj; i++) {
            niz[i] = s.niz[i];
        }
    }

    void push(int x) {
        if (broj == kapacitet) {
            kapacitet *= 2;

        int* novi = new int[kapacitet];

        for (int i = 0; i < broj; i++) {
            novi[i] = niz[i];
        }

        delete[] niz;
        niz = novi;
    }
    niz[broj] = x;
    broj++;
}

void pop() {
    assert(broj > 0);
    broj--;
}

int top() {
    assert(broj > 0);
    return niz[broj - 1];
}

bool empty() {
    return broj == 0;
}

int size() {
    return broj;
}

int capacity() {
    return kapacitet;
}

};

int main()
{
    IntStack s;
    for (int i = 1; i <= 5; ++i)
        s.push(i * 10);
    std::cout << s.size() << ' ' << s.capacity() << ' ' << s.top() << '\n';
    IntStack c = s;      // copy konstruktor; isto kao IntStack c(s);
    c.pop();
    c.push(99);
    std::cout << s.top() << ' ' << c.top() << '\n';
    while (!s.empty()) { std::cout << s.top() << ' '; s.pop(); }
    std::cout << '\n';
    return 0;
}
