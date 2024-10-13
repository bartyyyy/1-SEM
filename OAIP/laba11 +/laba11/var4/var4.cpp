#include <iostream>

using namespace std;

int main() {
    int n, m;

    cout << "Введите размер первой последовательности: ";
    cin >> n;
    int* x = new int[n];
    cout << "Введите элементы первой последовательности: ";
    for (int i = 0; i < n; i++) {
        cin >> *(x+i);
    }

    cout << "Введите размер второй последовательности: ";
    cin >> m;
    int* y = new int[m];
    cout << "Введите элементы второй последовательности: ";
    for (int i = 0; i < m; i++) {
        cin >> *(y+i);
    }

    int** dp = new int* [n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = new int[m + 1];
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) {
                *(dp+i+j) = 0;
            }
            else if (x[i - 1] == y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << "Максимальная длина последовательности: " << dp[n][m] << endl;
    return 0;
}