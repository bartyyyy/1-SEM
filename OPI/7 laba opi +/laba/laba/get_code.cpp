#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>
#include <cctype>  
#include <cwctype>
#include <cwchar> 





using namespace std;

char getCode()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string stroka;

  

    cout << "Enter a number: "; cin >> stroka;

    for (char symbol : stroka)  {

        if (symbol>= 48 && symbol <= 57) {

        cout << "Code of the character corresponding to the entered digit " << symbol << " equals: " << (int)symbol << endl;

        }

        else {

            cout << "Invalid character ";

        }
    }


    return 0;
}