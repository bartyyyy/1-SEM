#include <iostream>  

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "ru");
	int a[10], n, i;
	cout << "Write number ";
	cin >> n;
	for (i = 0; n > 0; i++) //до тех пор, пока не будет равно единице
	{
		a[i] = n % 2;	//число делится с остатком на два и массиву присваивается цифра в остатке
		n = n / 2;		//число делится на два
	}
	cout << "In double system: ";
	for (i = i - 1; i >= 0; i--) // записывается массив в обратном порядке
	{
		cout << a[i];
	}
	return 0;
}