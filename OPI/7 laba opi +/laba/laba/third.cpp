#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>
using namespace std;

void third()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string stroka;
    cout << "������� �����: "; cin >> stroka;
    for (char symb : stroka)
    {
        cout << "��� �������, ���������������� ��������� ����� " << symb << " �����: " << (int)symb << endl;
    }
}