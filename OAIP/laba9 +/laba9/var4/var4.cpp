#include <iostream>
#include <locale>

void main()
{
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	const int N = 100;
	int size, M[N], k, i;
	cout << "Write size of massive" << endl;
	cin >> size;
	if (size > 100)
		return;
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++)
	{
		M[i] = rand() % 100;
		cout << M[i] << " ";
	}
	cout << endl;
	cout << "Write number" << endl;
	cin >> k;
	for (int i = k; i < size - 1; i++)
	{
		M[i] = M[i + 1];
	}
	for (int i = 0; i < size - 1; i++)
	{
		cout << M[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size - 1; i++) {
		if (M[i] != 0) {
			if (M[i] % 2 == 0) {
				cout << M[i] << " 0 ";
			}
			else cout << M[i] << " ";
		}
	}
	cout << endl;
}