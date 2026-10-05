#include <iostream>
using namespace std;

int main() {
	int a{}, b{};

	cout << "Unesi a: ";
	cin >> a;
	cout << "Unesi b: ";
	cin >> b;

	int zbroj{ a + b };
	double aritmet{ (a + b) / 2.0 };
	bool usporedba{ a < b };

	cout << "Zbroj: " << zbroj << endl;
	cout << "Sredina: " << aritmet << endl;
	cout << "usporedba: " << boolalpha << usporedba << endl;

	return 0;
}

