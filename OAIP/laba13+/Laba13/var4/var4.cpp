#include <iostream>
int main()
{
	using namespace std;

	const int n = 100, m = 100;
	int A[n][m];
	int column, row, sum = 0, k = 0;
	float arifm;
	cout << "строка = ";
	cin >> row;
	cout << "столбец = ";
	cin >> column;

	srand((unsigned)time(NULL));

	for (int i = 0; i < row; i++)
	{
		cout << "\n";
		for (int j = 0; j < column; j++)
		{
			A[i][j] = rand() % 10;
			cout << A[i][j] << " ";
			sum += A[i][j];
		}
	}

	cout << endl;
	cout << "сумма = " << sum << endl;
	arifm = sum / (row * column);
	cout << "среднее = " << arifm;
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		cout << "\n";
		for (int j = 0; j < column; j++)
		{
			cout << A[i][j] << " ";
			if (A[i][j] > arifm) k++;
		}
	}

	cout << endl << "количество = " << k;
	return 0;
}