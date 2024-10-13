#include <iostream>
#include <climits>
using namespace std;

void massiv();
void matrix();

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main(void)
{
    setlocale(LC_CTYPE, "Russian");
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

void massiv()
{
    int rows, cols;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;

    std::cout << "Введите количество столбцов: ";
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


void matrix()
{

    int rows, cols;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;

    std::cout << "Введите количество столбцов: ";
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