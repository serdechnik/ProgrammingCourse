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
	ghostplan[0] = 0;//������ �������, ���������� �� �������� ������� ��������
	ghostplan[1] = 0;//������ �������, ���������� �� �������� ������� ���� ���������
	ghostplan[2] = 0;//������ �������, ���������� �� �������� ������� ���� ���������
	capitalplan[0] = 0;//������ �������, ���������� �� �������� ������� ��������
	capitalplan[1] = 0;//������ �������, ���������� �� �������� ������� ����������� ���������
	capitalplan[2] = 0;//������ �������, ���������� �� �������� ������� ���� ���������
	capitalplan[3] = 0;//������ �������, ���������� �� �������� ������� ���� ����������� ��������
	setlocale(LC_ALL, "Russian");
	while (r1 == 1)
	{
		cout << "\n �������� �������:\n 1) �������� ��������� ������-��������.\n 2) �������������� ������-��������.\n 3) �������� ��������� �������.\n 4) �������������� �������.\n 5) �����.\n ��� �����: ";
		cin >> ch1;
		switch (ch1)
		{
		case 1:
		{
			city = &ghosty;
			if (ghostplan[0] == 0)
				cout << "\n �������� ������:\n ����������.";
			else
			{
				cout << "\n �������� ������:";
				cout << "\n " << city->getName();
			}
			if (ghostplan[1] == 0)
				cout << "\n ���� ��������� ������:\n ����������.";
			else
			{
				cout << "\n ���� ��������� ������:";
				cout << "\n " << city->getYear();
			}
			if (ghostplan[2] == 0)
				cout << "\n ���� ��������� ������:\n ����������.\n";
			else
			{
				cout << "\n ���� ��������� ������:";
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
				cout << "\n �������� �������:\n 1) �������� �������� ������.\n 2) �������� ���� ��������� ������.\n 3) �������� ���� ��������� ������.\n 4) ������� � �������� ����.\n ��� �����: ";
				cin >> ch2;
				switch (ch2)
				{
				case 1:
				{
					cout << "\n �������� ������: ";
					cin >> s;
					city->setName(s);
					ghostplan[0] = 1;
					break;
				}
				case 2:
				{
					cout << "\n ���� ��������� ������: ";
					cin >> year;
					city->setYear(year);
					ghostplan[1] = 1;
					break;
				}
				case 3:
				{
					cout << "\n ���� ��������� ������: ";
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
				cout << "\n �������� ������:\n ����������.";
			else
			{
				cout << "\n �������� ������:";
				cout << "\n " << city->getName();
			}
			if (capitalplan[1] == 0)
				cout << "\n ����������� ���������:\n ����������.";
			else
			{
				cout << "\n ����������� ���������:";
				cout << "\n " << city->getAmount();
			}
			if (capitalplan[2] == 0)
				cout << "\n ���� ��������� ������:\n ����������.";
			else
			{
				cout << "\n ���� ��������� ������:";
				cout << "\n " << city->getYear();
			}
			if (capitalplan[2] == 0)
				cout << "\n ���� ����������� ������ ��������:\n ����������.\n";
			else
			{
				cout << "\n ���� ����������� ������ ��������:";
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
				cout << "\n �������� �������:\n 1) �������� �������� ������.\n 2) �������� ����������� ���������.\n 3) �������� ���� ��������� ������.\n 4) �������� ���� ����������� ��������.\n 5) ������� � �������� ����.\n ��� �����: ";
				cin >> ch2;
				switch (ch2)
				{
				case 1:
				{
					cout << "\n �������� ������: ";
					cin >> s;
					city->setName(s);
					capitalplan[0] = 1;
					break;
				}
				case 2:
				{
					cout << "\n ����������� ���������: ";
					cin >> amount;
					city->setAmount(amount);
					capitalplan[1] = 1;
					break;
				}
				case 3:
				{
					cout << "\n ���� ��������� ������: ";
					cin >> year;
					city->setYear(year);
					capitalplan[2] = 1;
					break;
				}
				case 4:
				{
					cout << "\n ���� ����������� ������ ��������: ";
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
			cout << "\n ��������.\n\n ";
			r1 = 0;
		}
		}
	}
	system("pause");
}