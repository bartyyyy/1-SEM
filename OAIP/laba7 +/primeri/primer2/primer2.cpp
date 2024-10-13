#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int COUNT = 5;
	float b, m = 9999;
	for (int i = 1; i <= COUNT; i++)
	{
		cout << "Write b" << i << endl;
		cin >> b;
		if (b < m) m = b;
	}
	cout << "Answer: " << m << endl;
}