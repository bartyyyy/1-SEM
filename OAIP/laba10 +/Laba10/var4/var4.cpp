#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char s[33];
	cout << "Write number ";
	cin >> A;
	_itoa_s(A, s, 2);
	cout << "Number in double code = " << s << endl;
	if ((A & 3) == 0)
		cout << "Number multiple 4" << endl;
	else
		cout << "Number repeatedly 4" << endl;
	return 0;
}