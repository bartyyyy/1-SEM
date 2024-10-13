#include <iostream>

using namespace std;

void num()
{
    string input;
    cout << "Enter decimal numbers: ";
    cin >> input;

    for (char z : input) {
        int digitCode = '0' + (z - '0');
        cout << "Code of the character corresponding to the number " << z << " in Windows-1251: " << digitCode << endl;
    }

}