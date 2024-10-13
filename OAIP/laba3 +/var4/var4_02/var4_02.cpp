#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float x, y, z, p, v;
	printf("Write x, y, z");
	scanf_s("%f", & x); scanf_s("%f", &y); scanf_s("%f", &z) ;
	p = (x + y + z) / 3;
	v = sqrt(abs(x) * abs(y) * abs(z));
	printf("p= %.3f\n", p);
	printf("v= %.3f\n", v);
	return 0;
}