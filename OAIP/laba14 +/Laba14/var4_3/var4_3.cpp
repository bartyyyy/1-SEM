#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void countColumnsWithoutZeros() {
    int rows, cols;

    std::cout << "Введите количество строк матрицы: ";
    std::cin >> rows;

    std::cout << "Введите количество столбцов матрицы: ";
    std::cin >> cols;

    int matrix[MAX_ROWS][MAX_COLS];

    std::cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

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

    std::cout << "Количество столбцов, не содержащих ни одного нулевого элемента: " << count << std::endl;
}

void printMatrixTransposed() {
    int rows, cols;

    std::cout << "Введите количество строк матрицы: ";
    std::cin >> rows;

    std::cout << "Введите количество столбцов матрицы: ";
    std::cin >> cols;

    int matrix[MAX_ROWS][MAX_COLS];

    std::cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Транспонированная матрица:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int choice;

    std::cout << "Выберите действие:\n";
    std::cout << "1. Определение количества столбцов без нулей.\n";
    std::cout << "2. Вывод транспонированной матрицы.\n";
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        countColumnsWithoutZeros();
        break;
    case 2:
        printMatrixTransposed();
        break;
    default:
        std::cout << "Неверный выбор.\n";
    }

    return 0;
}