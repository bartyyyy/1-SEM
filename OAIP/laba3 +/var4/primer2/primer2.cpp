#include <iomanip>
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	cout << "Write symbol:"; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;



}