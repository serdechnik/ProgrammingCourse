#include <iostream>
#include "city.h"
using namespace std;
void main()
{
	int r1 = 1, r2, ch1, ch2, ghostplan[3],capitalplan[4], amount, year;
	char* s = new char;
	CCity *city;
	ghost ghosty;
	capital Karl_Marx;
	ghostplan[0] = 0;//хитрый элемент, отвечающий за проверку наличия названия
	ghostplan[1] = 0;//хитрый элемент, отвечающий за проверку наличия даты основания
	ghostplan[2] = 0;//хитрый элемент, отвечающий за проверку наличия даты покидания
	capitalplan[0] = 0;//хитрый элемент, отвечающий за проверку наличия названия
	capitalplan[1] = 0;//хитрый элемент, отвечающий за проверку наличия численности населения
	capitalplan[2] = 0;//хитрый элемент, отвечающий за проверку наличия даты основания
	capitalplan[3] = 0;//хитрый элемент, отвечающий за проверку наличия даты становления столицей
	setlocale(LC_ALL, "Russian");
	while (r1 == 1)
	{
		cout << "\n Выберите вариант:\n 1) Просмотр состояния города-призрака.\n 2) Редактирование города-призрака.\n 3) Просмотр состояния столицы.\n 4) Редактирование столицы.\n 5) Выход.\n Ваш выбор: ";
		cin >> ch1;
		switch (ch1)
		{
		case 1:
		{
			city = &ghosty;
			if (ghostplan[0] == 0)
				cout << "\n Название города:\n НЕИЗВЕСТНО.";
			else
			{
				cout << "\n Название города:";
				cout << "\n " << city->getName();
			}
			if (ghostplan[1] == 0)
				cout << "\n Дата основания города:\n НЕИЗВЕСТНО.";
			else
			{
				cout << "\n Дата основания города:";
				cout << "\n " << city->getYear();
			}
			if (ghostplan[2] == 0)
				cout << "\n Дата покидания города:\n НЕИЗВЕСТНО.\n";
			else
			{
				cout << "\n Дата покидания города:";
				cout << "\n " << city->function();
				cout << "\n\n ";
			}
			break;
		}
		case 2:
		{
			r2 = 1;
			while (r2 == 1)
			{
				city = &ghosty;
				cout << "\n Выберите вариант:\n 1) Введение названия города.\n 2) Введение даты основания города.\n 3) Введение даты покидания города.\n 4) Возврат в основное меню.\n Ваш выбор: ";
				cin >> ch2;
				switch (ch2)
				{
				case 1:
				{
					cout << "\n Название города: ";
					cin >> s;
					city->setName(s);
					ghostplan[0] = 1;
					break;
				}
				case 2:
				{
					cout << "\n Дата основания города: ";
					cin >> year;
					city->setYear(year);
					ghostplan[1] = 1;
					break;
				}
				case 3:
				{
					cout << "\n Дата покидания города: ";
					cin >> year;
					ghosty.setEndYear(year);
					ghostplan[2] = 1;
					break;
				}
				case 4:
				{
					r2 = 0;
				}
				}
			}
			break;
		}
		case 3:
		{
			city = &Karl_Marx;
			if (capitalplan[0] == 0)
				cout << "\n Название города:\n НЕИЗВЕСТНО.";
			else
			{
				cout << "\n Название города:";
				cout << "\n " << city->getName();
			}
			if (capitalplan[1] == 0)
				cout << "\n Численность населения:\n НЕИЗВЕСТНО.";
			else
			{
				cout << "\n Численность населения:";
				cout << "\n " << city->getAmount();
			}
			if (capitalplan[2] == 0)
				cout << "\n Дата основания города:\n НЕИЗВЕСТНО.";
			else
			{
				cout << "\n Дата основания города:";
				cout << "\n " << city->getYear();
			}
			if (capitalplan[2] == 0)
				cout << "\n Дата становления города столицей:\n НЕИЗВЕСТНО.\n";
			else
			{
				cout << "\n Дата становления города столицей:";
				cout << "\n " << city->function();
				cout << "\n\n ";
			}
			break;
		}
		case 4:
		{
			r2 = 1;
			while (r2 == 1)
			{
				city = &Karl_Marx;
				cout << "\n Выберите вариант:\n 1) Введение названия города.\n 2) Введение численности населения.\n 3) Введение даты основания города.\n 4) Введение даты становления столицей.\n 5) Возврат в основное меню.\n Ваш выбор: ";
				cin >> ch2;
				switch (ch2)
				{
				case 1:
				{
					cout << "\n Название города: ";
					cin >> s;
					city->setName(s);
					capitalplan[0] = 1;
					break;
				}
				case 2:
				{
					cout << "\n Численность населения: ";
					cin >> amount;
					city->setAmount(amount);
					capitalplan[1] = 1;
					break;
				}
				case 3:
				{
					cout << "\n Дата основания города: ";
					cin >> year;
					city->setYear(year);
					capitalplan[2] = 1;
					break;
				}
				case 4:
				{
					cout << "\n Дата становления города столицей: ";
					cin >> year;
					Karl_Marx.setSecondYear(year);
					capitalplan[3] = 1;
					break;
				}
				case 5:
				{
					r2 = 0;
				}
				}
			}
			break;
		}
		case 5:
		{
			cout << "\n Прощайте.\n\n ";
			r1 = 0;
		}
		}
	}
	system("pause");
}