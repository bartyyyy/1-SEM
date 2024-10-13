#include <stdio.h>
int main()
{
	int n, i, j;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%5d", i * j);
		printf("\n");
	}
}






//#include <stdio.h>
//#include <cmath>
//
//int main()
//{
//	float z, y, x = 3;
//	do
//	{
//		z = 2 * pow(x, 2);
//		y = z + pow(x, (float)1 / 3);
//		printf("x=%5.2f\t", x);
//		printf("y=%5.2f\t", y);
//		x = x + 0.1;
//
//	} while (x < 4.1);
//}









//#include <iostream>
//using namespace std;
//int main()
//{
//	float z, y, x = 3;
//	while (x < 4.1)
//	{
//		z = 2 * pow(x, 2);
//		y = z + pow(x, (float)1 / 3);
//		cout << "x=" << x << "\t";
//		cout << "y=" << y << endl;
//		x = x + 0.1;
//	}
//
//}



//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	float z, y, x, sd;
//	sd = 1.0 / 3.0;
//	for (int n = 1; n <= 4; n++);
//	{
//		printf("Write x");
//		scanf_s("%f", &x);
//		z = 2 * pow(x, 2);
//		y = z + pow(x, sd);
//		printf("x = 5.2f\t" , y);
//		printf("y = 5.2f\t" , y);
//	}
//}