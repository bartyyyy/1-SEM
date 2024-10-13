#include <iostream>
#include <climits>
using namespace std;

void massiv();
void matrix();

const int MAX_ROWS = 100;
const int MAX_COLS = 100;


int countColumnsWithoutZeros(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int count = 0;

    for (int j = 0; j < cols; j++) {
        bool hasZero = false;
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] == 0) {
                hasZero = true;
                break;
            }
        }
        if (!hasZero) {
            count++;
        }
    }
    return count;
}


void matrix()
{

    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    std::cout << "Введите элементы матрицы: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int result = countColumnsWithoutZeros(matrix, rows, cols);
    std::cout << "Количество столбцов без нулей: " << result << std::endl;

    return;
}


int main(void)
{
    int choice;
    do
    {
        cout << "Введите" << endl;
        cout << "1-одномерный массив" << endl;
        cout << "2-работа с матрицей" << endl;
        cout << "3-выход" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1: {
            massiv(); break;
        }

        case 2: {
            matrix(); break;
        }
        case 3: {
            break;
        }
        }
    } while (choice != 3);
}

void massiv() {
        int n;
        std::cout << "Введите размер массива: ";
        std::cin >> n;

        double* array = new double[n];
        std::cout << "Введите элементы массива: ";
        for (int i = 0; i < n; ++i) {
            std::cin >> array[i];
        }

        int minIndex = 0;
        for (int i = 1; i < n; ++i) {
            if (array[i] < array[minIndex]) {
                minIndex = i;
            }
        }

        int firstNegIndex = -1;
        int secondNegIndex = -1;
        for (int i = 0; i < n; ++i) {
            if (array[i] < 0) {
                if (firstNegIndex == -1) {
                    firstNegIndex = i;
                }
                else if (secondNegIndex == -1) {
                    secondNegIndex = i;
                    break;
                }
            }
        }

        double sum = 0.0;
        if (firstNegIndex != -1 && secondNegIndex != -1) {
            int start = std::min(firstNegIndex, secondNegIndex);
            int end = std::max(firstNegIndex, secondNegIndex);
            for (int i = start + 1; i < end; ++i) {
                sum += array[i];
            }
        }

        std::cout << "Номер минимального элемента: " << minIndex << std::endl;
        std::cout << "Сумма элементов между первым и вторым отрицательными элементами: " << sum << std::endl;

        delete[] array;
    }

