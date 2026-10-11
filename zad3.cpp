#include <iostream>
using namespace std;

int& find_max(int arr[], int n) {
    int max = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max]) {
            max = i;
        }
    }

    return arr[max];
}

int main() {
    int numbers[] = {4, -7, 12, 0, 9, -3};
    int n = 6;

    for (int x : numbers) {
        cout << x << " ";
    }

    cout << endl;

    for (int& x : numbers) {
        if (x < 0) {
            x = -x;
        }
    }

    for (int x : numbers) {
        cout << x << " ";
    }

    cout << endl;

    find_max(numbers, n) = 0;

    for (int x : numbers) {
        cout << x << " ";
    }

    return 0;
}