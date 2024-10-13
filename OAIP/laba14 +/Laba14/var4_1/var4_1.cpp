
#include <iostream>

int main() {
    int n;

    std::cout << "Введите размер массива n: ";
    std::cin >> n;

    double* arr = new double[n];

    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    int firstNegIndex = -1;
    int secondNegIndex = -1;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (firstNegIndex == -1) {
                firstNegIndex = i;
            }
            else if (secondNegIndex == -1) {
                secondNegIndex = i;
                break;
            }
        }
    }

    if (firstNegIndex != -1 && secondNegIndex != -1) {
        for (int i = firstNegIndex + 1; i < secondNegIndex; i++) {
            sum += arr[i];
        }
    }
    else {
        std::cout << "В массиве отсутствуют два отрицательных элемента.\n";
    }

    delete[] arr;

    std::cout << "Номер минимального элемента: " << minIndex << std::endl;
    std::cout << "Сумма элементов между первым и вторым отрицательными элементами: " << sum << std::endl;

    return 0;
}
