#include <iostream>
#include <Windows.h>
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60], dela[20];
	puts("\tКак вас зовут?");
	gets_s(name);
	printf("Привет, %s \n", name);
	puts("\tКак у тебя дела?");
	gets_s(dela);
	puts("\tМда, ну пока <3");
}