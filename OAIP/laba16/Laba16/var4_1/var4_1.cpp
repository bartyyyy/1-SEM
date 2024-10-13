#include <iostream>


bool findPositiveRow(int** matrix, int rows, int cols, int& rowNumber) {
    for (int i = 0; i < rows; i++) {
        bool foundPositive = false;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > 0) {
                foundPositive = true;
                break;
            }
        }
        if (foundPositive) {
            rowNumber = i;
            return true;
        }
    }
    return false;
}

void changeSigns(int** matrix, int row, int cols) {
    for (int i = 0; i < cols; i++) {
        matrix[row - 1][i] = -matrix[row - 1][i];
    }
}


void printMatrix(int** matrix, int rows, int cols) {
    std::cout << "Матрица:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;
    std::cout << "Введите количество строк и столбцов матрицы: ";
    std::cin >> rows >> cols;

 
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    std::cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int rowNumber;
    if (findPositiveRow(matrix, rows, cols, rowNumber)) {
        std::cout << "Найдена строка с положительным элементом: " << rowNumber + 1 << std::endl;
        changeSigns(matrix, rowNumber, cols);  
        std::cout << "Знаки элементов предыдущей строки изменены на противоположные." << std::endl;
    }
    else {
        std::cout << "В матрице нет строки с положительным элементом." << std::endl;
    }

  
    printMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}