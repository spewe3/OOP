#include <iostream>
using namespace std;

void my_transform(int arr[], int n, int (*f)(int)) {
    for (int i = 0; i < n; i++) {
        arr[i] = f(arr[i]);
    }
}

int twice(int x) {
    return 2 * x;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    my_transform(arr, n, twice);


    my_transform(arr, n, [](int x) {
        return x % 2 == 0 ? x / 2 : 2 * x;
    });

    int sum = 0;
    int product = 1;

    [&]() {
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            product *= arr[i];
        }
    }();

    int prag = 4;
    int suma_vecih = 0;

    [prag, &suma_vecih, &arr, n]() {
        for (int i = 0; i < n; i++) {
            if (arr[i] > prag) {
                suma_vecih += arr[i];
            }
        }
    }();

    cout << "Niz: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nSuma: " << sum;
    cout << "\nProdukt: " << product;
    cout << "\nSuma elemenata vecih od " << prag << ": " << suma_vecih << endl;
}