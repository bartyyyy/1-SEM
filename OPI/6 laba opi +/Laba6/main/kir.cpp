#include <iostream>
#include <Windows.h>

using namespace std;

void kir()
{
    SetConsoleCP(1251);

    string input;
    cout << "Enter letters (Russian alphabet): ";
    cin >> input;

    for (char y : input) {
        int uppercaseCode = static_cast<int>(y);
        int lowercaseCode = static_cast<int>(tolower(y));

        int diff = lowercaseCode - uppercaseCode;
        cout << "Difference between code values ​​in Windows-1251 for a letter " << y << ": " << diff << endl;
    }
}