#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Введите размер массива A: ";
    cin >> n;

    int* A = new int[n];
    cout << "Введите элементы массива A: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Введите размер массива B: ";
    cin >> m;

    int* B = new int[m];
    cout << "Введите элементы массива B: ";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int largestA = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > largestA) {
            largestA = A[i];
        }
    }

    bool containsLargest = false;
    for (int i = 0; i < m; i++) {
        if (B[i] == largestA) {
            containsLargest = true;
            break;
        }
    }

    if (containsLargest) {
        cout << "Наибольший элемент массива A содержится в массиве B.\n";
    }
    else {
        cout << "Наибольший элемент массива A не содержится в массиве B.\n";
    }
    return 0;
}