#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a, sum = 0; int i;
	const int size = 4;
	for (i = 1; i <= size; i++)
	{
		cout << "Write a" << i << endl;
		cin >> a;
		sum = sum + a;
	}
	cout << "Answer: " << sum << endl;
}

