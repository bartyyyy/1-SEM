#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	int a, b;
	cout << "Write first number" << endl;
	cin >> a;
	cout << "Write second number" << endl; 
	cin >> b;
	while ((a != 0) && (b != 0))
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	cout << "HOD = " << a + b;
	return 0;
}