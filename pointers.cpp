#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;
void main()
{
	int r = 1;
	setlocale(LC_ALL, "Russian");
	do 
	{
		char tmp[80], *r1, *r2;
		int i;
		cout << "\n ¬ведите строку: ";
		cin.getline(tmp, sizeof(tmp));
		r1 = new char[strlen(tmp) + 1];
		strcpy_s(r1, strlen(tmp) + 1, tmp);
		for (r1 = tmp; *r1; *r1++)
		{
			if (isupper(*r1))
				*r1=tolower(*r1);
			else if (islower(*r1))
				*r1 = toupper(*r1);
		}
		for (r1=tmp, i = 0; i < strlen(tmp); i++)
		{
			if (isdigit(*r1))
			{
				char *a = r1;
				for (int j = i; j < strlen(tmp); j++)
				{
					*a = *(a + 1);
					a++;
				}
				i--;
			}
			else 
				r1++;
		}
		/*
		int t = strlen(tmp); // максимум - 79, потому что нулевой символ не считает
		cout << "\n " << t;
		*/
		cout << "\n " << tmp;
		r2 = strchr(tmp, '.');
		if (r2==0)
			r = 0;
		/*delete [] r1;
		r1 = nullptr;*/
	} while (r == 1);
	cout << "\n\n ";
	system("pause");
}