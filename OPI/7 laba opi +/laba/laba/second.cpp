#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>
using namespace std;
void second()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string stroka;
    cout << "������� ����� ��������: "; cin >> stroka;
    for (char symb : stroka)
    {
        if (('�' <= symb && symb <= '�') || ('�' <= symb && symb <= '�'))
            cout << "������� ����� " << (char)toupper(symb) << " � " << (char)tolower(symb) << " �����: " << (int)tolower(symb) - (int)toupper(symb) << std::endl;
        else if (symb == '�' || symb == '�')
            cout << "������� ����� " << (char)toupper(symb) << " � " << (char)tolower(symb) << " �����: " << (int)tolower(symb) - (int)toupper(symb) << std::endl;
        else
            cout << "������������ ������\n";

    }
}