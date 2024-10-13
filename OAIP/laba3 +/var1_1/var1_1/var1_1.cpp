#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Write symbol" << endl; cin >> c;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(53) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(52) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(52) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(53) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	return 0;
}