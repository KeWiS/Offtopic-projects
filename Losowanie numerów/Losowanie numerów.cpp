#include "stdafx.h"
#include "Losowanie.h"
#include <iostream>

using namespace std;

int main()
{
	Losowanie losowanko;
	int b = losowanko.losowanie();
	bool war = true;
	while(war == true)
	{
		if (b != 30)
		{
			cout << "Wylosowana liczba to: " << b;
			war = false;
		}
		else
		{
			b = losowanko.losowanie();
		}
	}
	getchar();
	return 0;
}

