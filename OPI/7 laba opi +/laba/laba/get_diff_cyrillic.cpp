#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>

using namespace std;

char getDiffCyrillic()
{

    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string stroka;

    cout << "Enter a Cyrillic letter: "; cin >> stroka;

    for (char symbol : stroka) {
    
        if (('А' <= symbol && symbol <= 'Я') || ('а' <= symbol && symbol <= 'я')) {

            cout << "Difference between " << (char)toupper(symbol) << " and " << (char)tolower(symbol) << " equal to: " << (int)tolower(symbol) - (int)toupper(symbol) << std::endl;

        }

        else if (symbol == 'ё' || symbol == 'Ё') {

            cout << "Difference between " << (char)toupper(symbol) << " and " << (char)tolower(symbol) << " equal to: " << (int)tolower(symbol) - (int)toupper(symbol) << std::endl;

        }

        else { 

            cout << "Invalid character\n";
        }
    }

    return 0;
}