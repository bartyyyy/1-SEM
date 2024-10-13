#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>

void first()
{
    using namespace std;
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string stroka;
    cout << "������� ����� ��������: "; cin >> stroka;
    for (char symb : stroka)
    {
        if (('A' <= symb && symb <= 'Z') || ('a' <= symb && symb <= 'z'))
        {
            cout << "�������  " << (char)toupper(symb) << " � " << (char)tolower(symb) << " �����: " << (int)tolower(symb) - (int)toupper(symb) << endl;
        }
        else
            cout << "������������ ������\n";
    }
}