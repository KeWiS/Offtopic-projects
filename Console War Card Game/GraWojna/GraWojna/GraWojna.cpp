#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
	int * tab = new int[4];
	//kg = [0], kk = [1], pktg = [2], pktk = [3]
	tab[2] = 0;
	tab[3] = 0;
	srand(time(NULL));
	cout << "*** GRA W WOJNE ***" << endl;
	cout << "Nacisnij dowolny przycisk aby odkryc karte." << endl;
	getchar();
	system("cls");
	for (;;)
	{
		system("cls");
		tab[0] = (rand() % 14) + 2;
		tab[1] = (rand() % 14) + 2;
		cout << "Twoja karta: ";
		if (tab[0] > 10)
		{
			if (tab[0] == 11) { cout << "Jopek"; }
			if (tab[0] == 12) { cout << "Dama"; }
			if (tab[0] == 13) { cout << "Krol"; }
			if (tab[0] == 14) { cout << "As"; }
			if (tab[0] == 15) { cout << "Joker"; }
		}
		else
		{
			cout << tab[0];
		}
		cout << endl << "Karta przeciwnika: ";
		if (tab[1] > 10)
		{
			if (tab[1] == 11)	cout << "Jopek";
			if (tab[1] == 12)	cout << "Dama";
			if (tab[1] == 13)	cout << "Krol";
			if (tab[1] == 14)	cout << "As";
			if (tab[1] == 15)	cout << "Joker";
		}
		else
		{
			cout << tab[1];
		}
		if (tab[0] == tab[1])
		{
			continue;
		}
		else if (tab[0] > tab[1])
		{
			cout << endl << "Punkt dla Ciebie!" << endl;
			tab[2] += 1;
		}
		else
		{
			cout << endl << "Punkt dla komputera!" << endl;
			tab[3] += 1;
		}
		getchar();
		if(tab[2] == 3 || tab[3] == 3){break;}
	}
	if (tab[2] > tab[3])
	{
		cout << "GRATULACJE - wygrales!";
	}
	else if (tab[2] < tab[3])
	{
		cout << "Niestety wygral komputer :(";
	}
	delete[] tab;
	getchar();
}