#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main() {
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

    return 0;
}