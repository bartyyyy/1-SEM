#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>

using namespace std;

char getDiffLatin()
{

    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str;

    cout << "Enter a Latin letter: "; cin >> str;

    for (char symbol : str) {
   
        if (('A' <= symbol && symbol <= 'Z') || ('a' <= symbol && symbol <= 'z')) {
        
            cout << "Difference  " << (char)toupper(symbol) << " and " << (char)tolower(symbol) << " equal to: " << (int)tolower(symbol) - (int)toupper(symbol) << endl;

        }

        else {

            cout << "Invalid character\n";
        
        }

    }

    return '0';
}