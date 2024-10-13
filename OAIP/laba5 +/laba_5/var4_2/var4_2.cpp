#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float y, z, b = 2.5, m = 3, a = 1.4e-3, j;
	j = b;
	while (j < 3.1)
	{
		y = (m * j) / (tan(a) - exp(10 * m));
		z = 2 * y * b + sqrt(a + b);
		j = j + 0.1;
		cout << "z= " << z << endl;
		cout << "y= " << y << endl;


	}
	return 0;

}