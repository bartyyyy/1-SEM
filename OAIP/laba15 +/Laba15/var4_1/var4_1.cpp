#include <iostream>
#include <cmath>

double myFunction(double x) {
    return exp(x) - 1 / x;
}

double integral(double (*function)(double), double a, double b, int n) {
    double sum = 0;
    double h = (b - a) / n;

    for (int i = 0; i < n; i++) {
        double x = a + (i + 0.5) * h;
        sum += function(x);
    }

    return sum * h;
}

int main() {
    double a, b;
    int n;

    std::cout << "Введите начальную точку a: ";
    std::cin >> a;

    std::cout << "Введите конечную точку b: ";
    std::cin >> b;

    std::cout << "Введите количество разбиений n: ";
    std::cin >> n;

    double (*function)(double) = myFunction;

    double result = integral(function, a, b, n);

    std::cout << "Значение интеграла: " << result << std::endl;

    return 0;
}