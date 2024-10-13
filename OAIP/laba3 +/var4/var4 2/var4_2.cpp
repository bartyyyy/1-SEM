#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y, z, a, b;
	cout << "Write x: ";
	cin >> x;
	cout << "Write y: ";
	cin >> z;
	cout << "Write z: ";
	cin >> z;
	a = (x + y + z) / 3;
	cout << "Srednee arifmiticheskoe = " << a << endl;
	b = pow(x * y * z, 1./.3);
	cout << "Srednee geometricheskoe = " << b;
	_getch();
	return 0;
}