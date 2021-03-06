#include "stdafx.h"
#include <iostream>
#include <cmath>

using std::endl;
using std::cin;
using std::cout;

const double pi = 3.14;

void kwadrat(int a)
{
	if(a > 0)
	{
		int obwod = 4 * a, pole = a * a;
		cout << "Obwod wynosi: " << obwod << endl << "Pole wynosi: " << pole;
	}
	else{cout << endl << "Nieprawidlowe dane.";}
	getchar(); getchar();
}

void prostokat(int a, int b)
{
	if(a > 0 && b > 0)
	{
		int obwod = 2 * a + 2 * b, pole = a * b;
		cout << "Obwod wynosi: " << obwod << endl << "Pole wynosi: " << pole;
	}
	else{cout << endl << "Nieprawidlowe dane.";}
	getchar(); getchar();
}

void trojkat(int a, int b, int c)
{
	if(a > 0 && b > 0 && c > 0 && a + b > c && c + b > a && a + c > b)
	{
		int obwod = a + b + c, p = obwod / 2, pole = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Obwod wynosi: " << obwod << endl << "Pole wynosi: " << pole;
	}
	else{cout << endl << "Nieprawidlowe dane.";}
	getchar(); getchar();
}

void rownoleglobok(int a, int b, int h)
{
	if(a > 0 && b > 0 && h > 0)
	{
		int obwod = 2 * a + 2 * b, pole = (a * h) / 2;
		cout << "Obwod wynosi: " << obwod << endl << "Pole wynosi: " << pole;
	}
	else{cout << endl << "Nieprawidlowe dane.";}
	getchar(); getchar();
}

void trapez(int a, int b, int c, int d, int h)
{
	if(a > 0 && b > 0 && c > 0 && d > 0 && h > 0 && (c * c) - pow((a - b), 2) > d)
	{
		int obwod = a + b + c + d, pole = (a + b) * h / 2;
		cout << "Obwod wynosi: " << obwod << endl << "Pole wynosi: " << pole;
	}
	else {cout << endl << "Nieprawidlowe dane.";}
	getchar(); getchar();
}

void kolo(int r)
{
	if (r > 0)
	{
		double obwod = 2 * pi * r, pole = pi * pow(r, 2);
		cout << "Obwod wynosi: " << obwod << endl << "Pole wynosi: " << pole;
	}
	else { cout << endl << "Nieprawidlowe dane."; }
	getchar(); getchar();
}

void menu()
{
	int w, a, b, c, d, e;
	cout << "----------MENU----------" << endl;
	cout << "Wybierz figure do obliczenia pola oraz obwodu:" << endl;
	cout << "1. Kwadrat" << endl;
	cout << "2. Prostokat" << endl;
	cout << "3. Trojkat" << endl;
	cout << "4. Rownoleglobok" << endl;
	cout << "5. Trapez" << endl;
	cout << "6. Kolo" << endl;
	cout << "7. Wyjdz" << endl;
	cout << endl << endl << "Twoj wybor: ";
	cin >> w;

	switch(w)
	{
		case 1:
			system("cls");
			cout << "Podaj a: ";
			cin >> a;
			kwadrat(a);
		break;
		case 2:
			system("cls");
			cout << "Podaj kolejno a i b:" << endl;
			cin >> a;
			cin >> b;
			prostokat(a, b);
		break;
		case 3:
			system("cls");
			cout << "Podaj kolejno a, b i c (niech c bedzie najwieksza liczba):" << endl;
			cin >> a;
			cin >> b;
			cin >> c;
			trojkat(a, b, c);
		break;
		case 4:
			system("cls");
			cout << "Podaj kolejno a, b i h (h to wysokosc):" << endl;
			cin >> a;
			cin >> b;
			cin >> c;
			rownoleglobok(a, b, c);
		break;
		case 5:
			system("cls");
			cout << "Podaj kolejno a, b, c, d i h (a to wieksza podstawa, d(krotszy) oraz c to boki, h to wysokosc):" << endl;
			cin >> a;
			cin >> b;
			cin >> c;
			cin >> d;
			cin >> e;
			trapez(a, b, c, d, e);
		break;
		case 6:
			system("cls");
			cout << "Podaj r (promien kola): ";
			cin >> a;
			kolo(a);
		break;
		case 7:
			exit(0);
		break;
		default:
			cout << endl << "Nieprawidlowy wybor";
		break;
	}
	system("cls");
	cout << "Chcesz kontynuowac?:\n1. Tak\nInny dowolny znak: Nie\n\nTwoj wybor: ";
	cin >> w;
	if(w == 2){exit(0);}
	system("cls");
}

int main()
{
	for(;;){menu();}
    return 0;
}