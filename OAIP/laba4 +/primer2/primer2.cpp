﻿#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float x, y, z, mn, mx;
	printf("Vvedite x "); scanf_s("%f", &x);
	printf("Vvedite y "); scanf_s("%f", &y);
	printf("Vvedite z "); scanf_s("%f", &z);
	if ((x + y + z) < (x * y * z))
		mx = (x * y * z);
	else
		mx = (x + y + z);
	mn = x;
	if (mn > y) mn = y;
	if (mn > z) mn = z;
	printf("max(x+y+z, xyz)*min(x,y,z) = %f\n", mn * mx);


}