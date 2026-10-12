#include <iostream>
#include <string>
using namespace std;
#define MAX(a ,b) ((a) > (b) ? (a) : (b))

inline int my_max(int a, int b) {
	return (a > b) ? a : b;
}

template <typename T>
	inline T my_max1(T a, T b) {
		return (a > b) ? a : b;
	}

int main() {
	int a = MAX(3, 5);
	int b = 2 * MAX(3, 5);
	int c = MAX(3, 5) + 1;
	int i = 3;
	int d = my_max(++i, 2);

	cout << "rezultat: " << d << " i " << i << endl;

	cout << "int max: " << my_max1(1, 2) << endl;

	cout << "double max: " << my_max1(1.1, 2.2) << endl;

	cout << "char max: " << my_max1('a', 'b') << endl;

	cout << "string max: " << my_max1("aa", "bb") << endl;

	return 0;
}
