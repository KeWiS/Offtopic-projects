#include "stdafx.h"
#include "Cenzura.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	Cenzura cenzur;
	string zd;
	cout << "Podaj zdanie/slowo do ocenzurowania: ";
	getline(cin, zd);
	cout << cenzur.cenzurka(zd) << endl << "Nie pszeklinaj wandalu, nie wolno";
	getchar();
	return 0;
}

