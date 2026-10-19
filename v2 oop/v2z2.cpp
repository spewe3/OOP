#include <iostream>
using namespace std;

inline bool ascending(int a, int b) {
    return a < b;
}

inline bool descending(int a, int b) {
    return a > b;
}

void my_sort(int arr[], int n, bool (*cmp)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (cmp(arr[j + 1], arr[j])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 8, 1, 4};
    int n = 5;

    my_sort(arr, n, ascending);
    print(arr, n);

    my_sort(arr, n, descending);
    print(arr, n);
}