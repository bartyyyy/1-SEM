#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "ru");
	const int m = 100;
	int size;
	char n = 0;
	char a[m];
	cout << "Write size of massive" << endl;
	cin >> size;
	cout << "Write elemnts of massive" << endl;
	for (n = 0; n < size; n++)
		cin >> a[n];
	cout << "a = { ";
	for (n = 0; n < size; n++)
		cout << a[n] << " ";
	cout << "}" << endl;

	char b[m], c[m];
	int k = 0, i = 0;
	for (n = 0; n < size; n++)
	{
		if (a[n] >= '0' && a[n] <= '9')
		{
			b[k] = a[n];
			k++;
		}
		else
		{
			c[i] = a[n];
			i++;
		}
	}
	cout << "symbols: ";
	for (int p = 0; p < i; p++) {
		cout << c[p] << " ";
	}
	cout << endl;

	cout << "numbers: ";
	for (i = 0; i < k; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}