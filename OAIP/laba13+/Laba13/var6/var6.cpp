#include <iostream>

const int MAX_N = 100;
const int MAX_M = 100;

void swapColumns(int A[][MAX_M], int N, int M, int P, int Q) {
    for (int i = 0; i < N; i++) {
        int temp = A[i][P];
        A[i][P] = A[i][Q];
        A[i][Q] = temp;
    }
}

int main() {
    int N, M, P, Q;
    int A[MAX_N][MAX_M];

    
    std::cout << "Введите количество строк матрицы: ";
    std::cin >> N;
    std::cout << "Введите количество столбцов матрицы: ";
    std::cin >> M;

    
    std::cout << "Введите элементы матрицы:" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> A[i][j];
        }
    }

    
    std::cout << "Введите номер первого столбца (P): ";
    std::cin >> P;
    std::cout << "Введите номер второго столбца (Q): ";
    std::cin >> Q;

   
    if (P < 0 || P >= M || Q < 0 || Q >= M) {
        std::cout << "Ошибка: неверно указаны номера столбцов." << std::endl;
        return 0;
    }

    swapColumns(A, N, M, P, Q);

    
    std::cout << "Результат:" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}