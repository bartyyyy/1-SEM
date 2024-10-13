#include <iostream>

using namespace std;

void lat()
{
    string input;
    cout << "Enter letters (Latin alphabet): ";
    cin >> input;

    for (char x : input) {
        int uppercaseCode = toupper(x);
        int lowercaseCode = tolower(x);

        int diff = lowercaseCode - uppercaseCode;
        cout << "Difference between code values ​​in Windows-1251 for a letter " << x << ": " << diff << endl;
    }


}