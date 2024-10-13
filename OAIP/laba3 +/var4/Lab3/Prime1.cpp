
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	//char c;
	//cout << "Введите один символ:";
	//cin >> c;
	//cout << "c=" << c << endl;
	//int t;
	//cout << "Введите t=";
	//cin >> t;
	//cout << "t=" << t << endl;
	float x;
	cout << "Введите x=";
	cin >> x;
	cout << "x=" << x << endl;
	cout << "Тип размера в байтах" << endl;
	cout << "int:" << sizeof(int) << endl;
	cout << "char:" << sizeof(char) << endl;
	cout << "float:" << sizeof(float) << endl;
	cout << "double:" << sizeof(double) << endl;

}

