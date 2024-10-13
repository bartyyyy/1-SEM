#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float y, z, b = 2.5, m = 3, a = 1.4e-3, j;
	for (int i = 0; i < 3; i++)
	{
		cout << "Vvedite m= ";
		cin >> m;
		for (int t = 0; t < 4; t++)
		{
			cout << "Vvedite j= ";
			cin >> j;
			y = (m * j) / (tan(a) - exp(10 * m));
			z = 2 * y * b + sqrt(a + b);
			cout << "y= " << y << endl;
			cout << "z= " << z << endl;
		}
	}
	return 0;
}