#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

struct Fraction {
    int numerator, denominator;

    void reduce() {
        int g = gcd(numerator, denominator);
        numerator /= g;
        denominator /= g;
    }

    double value() {
        return (double)numerator / denominator;
    }

    void print() {
        cout << numerator << "/" << denominator;
    }
};

Fraction sum(const Fraction& a, const Fraction& b) {
    Fraction r = {
        a.numerator * b.denominator + b.numerator * a.denominator,
        a.denominator * b.denominator
    };

    r.reduce();
    return r;
}

int main() {
    Fraction a = {1, 2};
    Fraction b = {1, 4};

    Fraction c = sum(a, b);

    cout << "value: " << a.value() << endl;
    cout << "sum: ";
    c.print();

    return 0;
}