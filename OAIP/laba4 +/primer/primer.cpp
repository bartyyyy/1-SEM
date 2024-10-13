#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float b, z, x = 4e-3, s = 1.1, j;
	printf_s("Vvedite j ");
	scanf_s("%f", &j);
	b = s + (5 * x + j);

	if (b < 1.5)
		z = sqrt(x + 0.3 * j) + b;
	else
		z = abs(x * j + b);
	printf("j=%f\t", j);
	printf("z=%f\n", z);
}