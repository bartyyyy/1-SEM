#include<stdio.h>

int main()
{
	float k= 0.0, g, f, sum;
	float a[5] = { 2.3, 7, -2, -4, 9 };
	while (k < 7)
	{
		f = k;
		for (int i = 1; i < 5; i++)
		{
			sum += a[i] / i;

		}
		g = f / sum;
		k += 0.2;
	}
	printf("g=%f\n", g);
	return 0;
}