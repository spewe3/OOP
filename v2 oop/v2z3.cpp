#include <iostream>
using namespace std;

template <typename T>
inline bool ascending(T a, T b) {
    return a < b;
}

template <typename T>
inline bool descending(T a, T b) {
    return a > b;
}

template <typename T>
void my_sort(T arr[], int n, bool (*cmp)(T, T)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (cmp(arr[j + 1], arr[j])) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void print(const T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int int_arr[] = {5, 2, 8, 1};
    double double_arr[] = {3.2, 1.5, 4.8, 2.1};
    char char_arr[] = {'z', 'a', 'm', 'c'};

    my_sort(int_arr, 4, ascending<int>);
    my_sort(double_arr, 4, descending<double>);
    my_sort(char_arr, 4, ascending<char>);

    print(int_arr, 4);
    print(double_arr, 4);
    print(char_arr, 4);
}