#include "stdafx.h"
#include "Cenzura.h"
#include <iostream>
#include <string>
#include <algorithm>

Cenzura::Cenzura()
{
}


Cenzura::~Cenzura()
{
}

string Cenzura::cenzurka(string zdanie)
{
	int i = 0, j = zdanie.length(), x = 0;
	transform(zdanie.begin(), zdanie.end(), zdanie.begin(), ::tolower);
	while (i < j)
	{
		if (j >= 5)
		{
			if (zdanie[i] == 'k' && zdanie[i + 1] == 'u' && zdanie[i + 2] == 'r' && zdanie[i + 3] == 'w' && zdanie[i + 4] == 'a')
			{
				for (int x = 0; 4 >= x; x++) { zdanie[i + x] = '*'; }
			}
		}
		if (j >= 4)
		{
			if ((zdanie[i] == 'c' && zdanie[i + 1] == 'h' && zdanie[i + 2] == 'u' && zdanie[i + 3] == 'j') || (zdanie[i] == 'c' && zdanie[i + 1] == 'w' && zdanie[i + 2] == 'e' && zdanie[i + 3] == 'l'))
			{
				x = 0;
				for (x; 3 >= x; x++) { zdanie[i + x] = '*'; }
			}
		}
		i++;
	}
	return zdanie;
}

