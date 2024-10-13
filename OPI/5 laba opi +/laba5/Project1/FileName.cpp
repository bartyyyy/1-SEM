#include <iostream>
#include <cwchar>
#include <windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);

	wchar_t letter;
	wcin >> letter;
	char letterEN;
	cin >> letterEN;
	int code = static_cast<int>(letter) - static_cast<int>(letterEN);
	cout << code;
	return 0;
}