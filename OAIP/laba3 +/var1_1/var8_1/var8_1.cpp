﻿#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "write symbol" << endl;
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(28) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	return 0;
}