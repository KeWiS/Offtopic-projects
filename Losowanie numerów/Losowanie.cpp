#include "stdafx.h"
#include "Losowanie.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

Losowanie::Losowanie()
{
}


Losowanie::~Losowanie()
{
}

int Losowanie::losowanie()
{
	bool i = true;
	int wylosowana;
	string linia;
	fstream wykluczenia;
	wykluczenia.open("wykluczenia.txt", ios::in);
	srand(time(NULL));
	wylosowana = rand() % 28 + 1;
	while (getline(wykluczenia, linia))
	{
		if (atoi(linia.c_str()) == wylosowana)
		{
			return 30;
		}
	}
	wykluczenia.close();
	wykluczenia.open("wykluczenia.txt", ios::out | ios::app);
	wykluczenia << wylosowana << endl;
	wykluczenia.close();
	return wylosowana;
}

