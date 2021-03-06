#include "stdafx.h"
#include "Stosy.h"
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	std::vector < Stosy > litery;
	int wybor, it = 0, x, y;
	char dod;
	std::string doda;
	bool zaw = false, z = true, zz;
	for (;;)
	{
		wybor = 0;
		dod = 'x';
		cout << "Zawartosc stosu:\n";
		if (zaw == false)	cout << "PUSTY";
		else
		{
			for (int i = litery.size() - 1; i >= 0; i--)
			{
				cout << litery[i].litera << std::endl;
			}
		}
		cout << "\n---------------------" << endl;
		cout << "Wybierz akcje:\n";
		cout << "1. Dodaj do stosu\n2. Zdejmij ze stosu\n3. Sprawdz czy slowo w stosie to palindrom\n4. Wyjdz\nTwoj wybor: ";
		cin >> wybor;
		switch (wybor)
		{
		case 1:
			system("CLS");
			cout << "Podaj litere do dodania: ";
			cin >> doda;
			if (doda.length() < 2)
			{
				dod = doda[0];
				dod = tolower(dod);
				litery.push_back(dod);
			}
			else
			{
				cout << "Mozesz podac tylko JEDNA litere! Nacisnij dowolny klawisz, aby kontynuowac.";
				getchar();
				getchar();
			}
			zaw = true;
			break;
		case 2:
			if (litery.size() != 0)
			{
				litery.pop_back();
			}
			if (litery.size() == 0)
			{
				zaw = false;
			}
			break;
		case 3:
			zz = true;
			if (litery.size() != 0)
			{
				for (x = 0, y = litery.size() - 1; x <= y; x++, y--)
				{
					if (litery[x].litera != litery[y].litera)
					{
						zz = false;
						break;
					}
				}
				if (zz == true) cout << endl << "Palindrom";
				else cout << endl << "Nie palindrom";
			}
			else cout << endl << "Stos jest PUSTY!";
			getchar();
			getchar();
			break;
		case 4:
			return 0;
		}
		system("cls");
	}
    return 0;
}

