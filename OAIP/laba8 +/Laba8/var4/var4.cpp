#include <iostream>
int main() {
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	double a, b, n, s, h, x;
	cout << "Write a = ";
	cin >> a;
	cout << "Write b = ";
	cin >> b;
	cout << "Write n = ";
	cin >> n;
	h = (b - a) / n;
	x = a;
	s = 0;
	cout << "h = " << h << endl;
	do
	{
		s = s + h * (((exp(x) - 1 / x) + (exp(x + h) - 1 / (x + h))) / 2);
		x = x + h;
	} while (x < (b - h));
	cout << "S = " << s;
	return 0;
}